#include<iostream>
#include<string>
using namespace std;
int main(){
	bool a[30];
	int b[28];
	for(int i=0;i<30;i++)
		a[i]=false;
	for(int i=0;i<28;i++)
		cin>>b[i];
	 for(int i=0;i<27;i++){
         for(int j=27;j>i;j--){
	        if(b[j]<b[j-1]){
	        int t=b[j];
	        b[j]=b[j-1];
	        b[j-1]=t;
	        }
         }
    }
	for(int i=0;i<28;i++)
		a[b[i]]=true;
	for(int i=1;i<=30;i++){
		if(a[i]==false)
			cout<<i<<endl;
	}
	return 0;
}