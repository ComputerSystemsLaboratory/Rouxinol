#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int n,x,ctr;
	cin >> n >> x;
	while(n!=0||x!=0){
		ctr = 0;
		for(int i=1;i<=n-2;i++){
			for(int j=i+1;j<=n-1;j++){
				if(x-i-j>j && x-i-j<=n){
					ctr++;
				}
			}
		}
		cout << ctr << endl;
		cin >> n >> x;
	}
}