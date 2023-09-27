#include <iostream>
using namespace std;

int main() {
	while(true){
		int n;
		cin>>n;
		
		if(n==0){
			break;
		}
		
		int sum_a=0,sum_b=0;
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			
			if(a>b){
				sum_a+=a+b;
			} else if(a<b){
				sum_b+=a+b;
			} else{
				sum_a+=a;
				sum_b+=b;
			}
		}
	
		cout<<sum_a<<" "<<sum_b<<endl;
	}
	return 0;
}