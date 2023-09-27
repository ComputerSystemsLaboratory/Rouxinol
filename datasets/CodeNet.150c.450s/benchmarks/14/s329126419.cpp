#include<iostream>
using namespace std;

int main(){
	int a,i,j;
	cin>>a;
	for(i=1;i<=a;i++){
		j=i;
		if(i%3==0){
			cout << " "<<i;
		}
		else if(i%10==3){
			cout << " "<<i;
		}
		else{
		while(j>0){
			j=j/10;
			if(j%10==3){
				cout << " "<<i;
				j=0;
			}
		}
		}
	}
	cout << endl;
}