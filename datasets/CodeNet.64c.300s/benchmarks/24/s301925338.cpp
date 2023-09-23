#include<iostream>

using namespace std;

int n,A,B;

int main(){
	while(true){
		cin>>n;
		if(n==0)break;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(a>b)A=A+a+b;
			else if(a<b)B=B+a+b;
			else A=A+a,B=B+b;
		}
		cout<<A<<" "<<B<<endl;
		A=0,B=0;
	}
	return 0;
}