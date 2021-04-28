//===========================
// cutSquare  C
//===========================
#include<iostream>
using namespace std;
//---------------------------
int main(){
  for(int a,b; cin>>a>>b; ){
    int sum = 1;
    for( ; a!=b; sum++)
      if(a>b) a -= b;
      else    b -= a;
    cout<<sum<<"\n";
  }
}//--------------------------
