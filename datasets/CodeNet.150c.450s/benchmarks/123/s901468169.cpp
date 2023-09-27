#include<iostream>
#include<cmath>
using namespace std;
int n,x,c;
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		for(int j=2;j<=(int)pow(x,0.5);j++){
			if(x%j==0){
				c++;
				break;
			}
		}
	}
	cout<<n-c<<endl;
	return 0;
}