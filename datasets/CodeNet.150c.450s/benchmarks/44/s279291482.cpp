#include <bits/stdc++.h>
using namespace std;

typedef complex<double> P;

int main(){
	while(true){
		map<int,int> A;
		for(int i = 0 ; i < 4 ; i++){
			int x;
			if(!(cin >> x))exit(0);
			A[x] = i;
		}
		int h=0,b=0;
		for(int i = 0 ; i < 4 ; i++){
			int x;
			cin >> x;
			if( A.count(x) ){
				if( A[x] == i ) h++;
				else b++;
			}
		}
		cout << h << " " << b << endl;
			

		
	}
}