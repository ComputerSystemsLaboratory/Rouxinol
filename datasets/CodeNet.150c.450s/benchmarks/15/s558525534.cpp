#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;


int main(){
	int n[10000],q[500],x,y,s=0;
	cin >> x;
	for(int i=0; i<x ; i++) cin >> n[i];
	cin >> y;
	for(int i=0; i<y; i++) cin >> q[i];
	

	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			if( q[i]==n[j] ){
				s++;
				break;
			}
		}
	}

	cout << s << "\n";
	return 0;
}