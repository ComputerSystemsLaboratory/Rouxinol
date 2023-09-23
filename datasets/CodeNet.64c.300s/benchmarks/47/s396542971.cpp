#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a[100];
	for(int i=0;i<100;i++) a[i] = 0;
	int b;
	while(cin >> b) {a[b]++;}
	int max = 0;
	for(int i=0;i<100;i++) if(max<a[i]) max = a[i];
	for(int i=0;i<100;i++) if(a[i]==max) cout << i << endl;
}