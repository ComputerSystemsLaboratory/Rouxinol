#include<iostream>

using namespace std;

int main(){
	int n;
	while(cin>>n && n){
		int a=0,b=0;
		
		for(int i=0;i<n;i++){
			int x,y;
			cin>>x>>y;
			if(x>y)a+=x+y;
			else if(x==y){
				a+=x;b+=y;
			}
			else b+=x+y;
		}
		cout<<a<<" "<<b<<endl;
	}
	
}