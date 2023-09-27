#include<iostream>
using namespace std;
int main(){
int n,i=1;
	long long max=-1000000,min=1000000,sum=0,a;
	cin>>n;
	while(i<=n){
			cin>>a;
			if(a<min) min=a;
			if(a>max) max=a;
			sum+=a;
			i++;
		}
		cout<<min<<" "<<max<<" "<<sum<<endl;
		return 0;
		}
		
			