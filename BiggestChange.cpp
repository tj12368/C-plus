//===========================
//最大人数变化 Dif CP 
//===========================
#include<iostream>
using namespace std;
//---------------------------
int main(){
	for(int n; cin>>n; ){
		int sum=0, b=0;  //b为跟踪累计值大于0之数 
		for(int a; n-- && cin>>a; ){
			b = (b>0?b:0) + a;
			if(b>sum) sum=b;
	  }
		cout<<sum<<"\n";
	}
}//--------------------------
