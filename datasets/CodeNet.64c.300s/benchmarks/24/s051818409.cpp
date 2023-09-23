#include<iostream>
using namespace std;
int main(){
int n;
int a,b,ap,bp;
while(cin>>n&&n){
ap=0;
bp=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b){
			ap+=a+b;
		}else if(a<b){
			bp+=a+b;
		}else{
			ap+=a;
			bp+=b;
		}
	}
	cout<<ap<<" "<<bp<<endl;
}

return 0;
}