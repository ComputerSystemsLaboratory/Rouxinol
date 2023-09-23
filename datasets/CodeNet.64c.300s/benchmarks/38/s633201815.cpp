#include<iostream>

using namespace std;

int tama[10],n;

bool Haireruka(int i,int left,int right){
	if(i==10)return true;
	if(tama[i]>left){
		if(Haireruka(i+1,tama[i],right))return true;
	}
	if(tama[i]>right){
		if(Haireruka(i+1,left,tama[i]))return true;
	}
	return false;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		for(int i=0;i<10;i++){
			cin>>tama[i];
		}
		if(Haireruka(0,0,0))cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}return 0;
}