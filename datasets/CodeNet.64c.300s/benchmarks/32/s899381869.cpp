#include<iostream>
using namespace std;
int main(){
	int n,a;
	long long  sum=0;
	int max=-1000000;
	int min=1000000;
	cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a;
    	if(a>max){
    		max=a;
    	}
    	if(a<min){
    		min=a;
    	}
        sum+=a;
    }
	cout<<min<<" "<<max<<" "<<sum<<endl;
	return 0;
}