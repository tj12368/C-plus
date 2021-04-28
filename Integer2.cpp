//===========================
// Integer Dif C  C-str
//===========================
#include<iostream>
//#include<fstream>
#include<cstring>
using namespace std;
//---------------------------
bool isDigit(char* s, int len, int bit){
	if(len==0 || s[0]=='0') return 0;
	for(int i=0; i<len; i++)
	  if(!isdigit(s[i])) 
		  return 0;
	return len<=bit;
}//--------------------------
int main(){
	//ifstream cin("in.txt");
	//ofstream cout("out.txt");
	for(char s[100]; cin>>s; ){
		int bit=10;
		char* ps=s;
		int len=strlen(ps);
		if(len==1 && ps[0]=='0'){ cout<<"Yes\n"; continue; }
		if(ps[0]=='+' || ps[0]=='-')
		  ps++, len--;
		if(len==0){ cout<<"No\n"; continue; }
		if(ps[len-1]=='L' || ps[len-1]=='l'){
		  len--;
		  bit = 19;
	  }
		cout<<(isDigit(ps,len,bit) ? "Yes\n" : "No\n");
  }
}//--------------------------
