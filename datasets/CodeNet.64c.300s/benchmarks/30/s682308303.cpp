#include<iostream>
using namespace std;
int main(){
	int n,sum,box[]={500,100,50,10,5,1};
	while(cin>>n,n){
		n=1000-n;
		sum=0;
		for(int i=0;i<6;i++){
			sum+=n/box[i];
			n=n-n/box[i]*box[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}