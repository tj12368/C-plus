//=====================================
// sum of series
//=====================================
#include<iostream>
#include<fstream>
using namespace std;
//-------------------------------------
int main(){
  //ifstream cin("in.txt");
  //ofstream cout("out.txt");
  for(int n; cin>>n && n!=-1; )
    if(n) cout<<"5"+string(n-1,'0')+"5"+string(n-1,'0')+"\n";
    else  cout<<"1\n";
}//====================================
 