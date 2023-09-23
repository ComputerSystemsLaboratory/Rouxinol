#include<iostream>

using namespace std;

int main(){
	int n,a[10],f,s;
	bool flg=true;
	
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<10;j++){
			cin>>a[j];
		}
		f=0;s=0;flg=true;
		for(int j=0;j<10;j++){
			if(a[j]<f){
				if(a[j]<s)flg=false;
				else s=a[j];
			}else f=a[j];
		}
		if(flg)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}

}