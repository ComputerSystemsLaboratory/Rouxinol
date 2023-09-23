#include <iostream>
using namespace std;
int main(){
	int a[4],b[4];
	for(int i=0;i<4;i++) cin >> a[i] ;
	for(int i=0;i<4;i++) cin >> b[i] ;
	int sa=0; int sb=0;
	for(int i=0;i<4;i++) sa+=a[i] ,sb+=b[i] ;
	if(sa>sb) cout << sa ;
	else cout << sb ;
	cout << '\n' ;
}