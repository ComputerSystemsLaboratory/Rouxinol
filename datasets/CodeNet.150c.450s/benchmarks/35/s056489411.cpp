#include <iostream>
using namespace std;
int main(){
	while(1){
		int n ; cin >> n ; if(!n) break;
		int* a=new int[n];
		for(int i=0;i<n;i++) cin >> a[i];
		int MAX=a[0];
		for(int i=0;i<n;i++){
			int temp=0;
			for(int j=i;j<n;j++){
				temp+=a[j];
				if(temp>MAX) MAX=temp;
			};
		};
		cout << MAX << '\n' ;
		delete[] a;
	};
}