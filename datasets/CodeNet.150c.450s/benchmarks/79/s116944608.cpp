#include<iostream>
#include<algorithm>
#include<string>
#include<fstream>

#define SIZE 50

using namespace std;

int main(){
	int kard[SIZE]	= {0};
	int n,k,p,c;

	while(cin>>n>>k,n){
		for(int i=0;i<n ;i++){
			kard[i]	=n-i;
		}
		for(int i=0; i<k; i++){
			cin>>p>>c;
			rotate(kard,kard+p-1,kard+p-1+c);
		}
		cout<<kard[0]<<endl;
	}
	return 0;
}