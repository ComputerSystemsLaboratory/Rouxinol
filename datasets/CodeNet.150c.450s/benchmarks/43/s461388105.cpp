#include<iostream>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

int main(){
	int n;
	
	while(cin>>n,n){
		int totalA=0,totalB=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(a>b){
				totalA+=a+b;
			}
			else if(b>a){
				totalB+=a+b;
			}
			else{
				totalA+=a;
				totalB+=b;
			}
		}
		cout<<totalA<<" "<<totalB<<endl; 
	}
	return 0;
}