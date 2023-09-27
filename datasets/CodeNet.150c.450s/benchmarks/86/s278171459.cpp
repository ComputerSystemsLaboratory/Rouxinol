#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,p,x;
	while(true){
		cin>>n>>m>>p;
		if(n==0&&m==0&&p==0)
			break;
		int w=0,a=0;
		for(int i=0;i<n;i++){
			cin>>x;
			w+=x;
			if(i==m-1)
				a+=x;
		}
		if(a==0)
			cout<<"0"<<endl;
		else
			cout<<w*(100-p)/a<<endl;
	}
	return 0;
}