//===========================
// ªª ÷ B
//===========================
#include<iostream>
//#include<fstream>
using namespace std;
//---------------------------
int main(){
	//ifstream cin("in.txt");
	//ofstream cout("out.txt");
	for(char c,d,x,y; cin>>c>>d; )
		if(c=='A')
			cout<<(d=='1' ? x : y)<<"\n";
		else 
		  x=c, y=d;
}//-------------------------- 
