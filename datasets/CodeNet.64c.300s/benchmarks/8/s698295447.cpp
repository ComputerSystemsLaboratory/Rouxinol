#include<iostream>
using namespace std;

void call(int n){
	int i,x;
	for(i=1;i<=n;i++){
		x=i;
		if ( x % 3 == 0 ){
			cout << " " << i;
		}else if( x % 10 == 3 ){
			cout << " " << i;
		}else{
			while(x /= 10){
				if( x % 10 == 3 ){
					cout << " " << i;
					break;
				}
			}	
		}
	}
	cout << endl;
}

int main(){
	int n;
	cin>>n;
	call(n);
	return 0;
}