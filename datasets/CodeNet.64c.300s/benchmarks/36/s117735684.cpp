#include <iostream>
using namespace std;
int main(){
		int a[3];
		bool b = true;
		for( int i=0;i<3;i++) cin >> a[i];
		while(b){
				b = false;
				for( int i=0;i<2;i++){
						if(a[i]>a[i+1]){
								int t = a[i];
								a[i] = a[i+1];
								a[i+1] = t;
								b = true;
						}
				}
		}
		cout << a[0] << " " <<  a[1] << " " <<  a[2] << endl;
		return 0;
}