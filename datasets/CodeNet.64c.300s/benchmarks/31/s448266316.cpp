#include<iostream>
using namespace std;
int main(){
	int n[28],a[30],x,d,e;
	for(int i=0;i<30;i++){
		a[i]=i+1;
	}
	for(int i=0;i<28;i++){
		cin >> n[i];
		x=n[i];
		for(int i=0;i<30;i++){
			if(x==a[i])a[i]=0;
		}
	}
	for(int i=0;i<30;i++){
		if(a[i]!=0){
			d=a[i];
			a[i]=0;
			for(int i=0;i<30;i++){
				if(a[i]!=0){
					e=a[i];
					if(d<e){
						cout << d <<endl;
						cout << e <<endl;
						return 0;
					}else if(d<e){
						cout << e <<endl;
						cout << d <<endl;
						return 0;
					}

				}
			}
		}
	}

	return 0;
}