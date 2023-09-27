#include<iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a;
	for(int i=3;i<=a;i++){
		b=0;
		if(i%3==0 || i%10==3){
			cout<<" "<<i;
			b=1;
		}
		if(i>=30 && b==0){
			for(int j=i;j>=9;){
			j=j/10;
			if(j%10==3){
				cout<<" "<<i;
				break;
				}
			}
		}
	}
	cout<<endl;
}