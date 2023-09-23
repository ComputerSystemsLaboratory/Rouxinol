#include<iostream>
#define MAX_SIZE 1000000

using namespace std;

int main(void){
	
	int a,d,n,temp;
	bool is_prime[MAX_SIZE+1];
	
	
	for(int i=0;i<=MAX_SIZE;i++){
		is_prime[i]=true;
	}
	is_prime[0]=is_prime[1]=false;
	for(int i=2;i<=MAX_SIZE;i++){
		if(is_prime[i]){
			for(int j=2*i;j<=MAX_SIZE;j=j+i){
				is_prime[j]=false;
			}
		}
	}

	while(1){
		
		cin>>a>>d>>n;
		
		if(a==0 && d==0 && n==0){
			break;
		}
		for(int i=0,cnt=0;i<=MAX_SIZE;i++){
			temp=a+i*d;
		
			if(is_prime[temp]){
				cnt++;
				if(cnt==n){
					cout<<temp<<endl;
				}
			}
			if(cnt==n){
				break;
			}
		}
	}
}