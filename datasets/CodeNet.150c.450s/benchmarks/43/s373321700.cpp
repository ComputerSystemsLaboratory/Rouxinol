#include<iostream>
using namespace std;
int main(){
while(1){
	int n,A,B,a,b;
	cin>>n;
	if(n == 0)break;
	A=0;
	B=0;
		for(int i =0; i <n;i++){
			cin >>a>>b;
		if(a>b){
		A +=(a+b);
		}
		else if(a<b){
		B +=(a+b);
		}
		else {
      A +=a;
	  B +=b;
		}
		}
		cout<<A<<" "<<B<<endl;
   }
return 0;
}
