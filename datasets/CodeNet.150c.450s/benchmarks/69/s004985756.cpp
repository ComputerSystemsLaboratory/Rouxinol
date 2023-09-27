#include<iostream>

using namespace std;

int main(void){
	int a[11],fir,n;
	int i;
	cin>>n;
	while(n--){
		int sec = 0;
		for(i=0;i<10;i++){
			cin>>a[i];
		}
		fir=a[0];
		for(i=1;i<10;i++){
			if(fir<a[i])fir=a[i];
			else if(sec<a[i])sec=a[i];
			else break;
		}
		if(i==10)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;

}