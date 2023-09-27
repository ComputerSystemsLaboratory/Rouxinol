#include<iostream>

using namespace std;

int main(){
	
	while(1){
		int n,m;
		
		cin>>n>>m;
		
		if(n==0 && m ==0){
			break;
		}
		int input[100000];
		
		for(int i=0;i<n;i++){
			cin>>input[i];
		}
		
		int cont = m;
		
		int now = 0;
		for(int i=0;i<m;i++){
			now += input[i];
		}
		
		
		int max = now;
		for(int i=m;i<n;i++){
			now-=input[i-m];
			now+=input[i];
			
			if(now>max){
				max=now;
			}
		}
	
	cout<<max<<endl;
	}
	
	return 0;
}