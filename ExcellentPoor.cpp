//===========================
// Excellent & Poor
//===========================
#include<iostream>
#include<string>
using namespace std;
//---------------------------
int main(){
  for(string s,t; cin>>s>>t; ){
    int num=0;
  	for(int i=0; i<s.length(); i++)
  	 	num += (s[i]!=t[i]);
	  cout<<num<<"\n";
  }
}//--------------------------
