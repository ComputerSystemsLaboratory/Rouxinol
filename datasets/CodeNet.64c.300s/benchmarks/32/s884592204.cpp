#include <iostream>
using namespace std;
int main(void){
	int n;
	cin>>n;
	int min,max,input;
	long long int sum;
	cin>>min;
	max=min;
	sum=min;
	for(int i=1;i<n;i++){
		cin>>input;
		sum=sum+input;
		if(min>input){
			min=input;
		}
		if(max<input){
			max=input;
		}
	}
	cout<<min<<" "<<max<<" "<<sum<<endl;
	return 0;
}