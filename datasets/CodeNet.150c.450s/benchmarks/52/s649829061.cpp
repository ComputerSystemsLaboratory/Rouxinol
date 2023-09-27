#include<iostream>
#include<string>
using namespace std;
int main(){
	int a[10];
	int k;
	for(int i=0;i<10;i++)
		a[i]=0;
	while(cin>>k){
		if(k==0){
			int i=9;
			while(true){
				if(a[i]!=0){
					cout<<a[i]<<endl;
					a[i]=0;
					break;
				}
				i--;
			}
		}
		else{
			int i=0;
			while(true){
				if(a[i]==0){
					a[i]=k;
					break;
				}
				i++;
			}
		}
	}
	return 0;
}