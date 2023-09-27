#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int h[31]={},w=0,hh,ww,a,b,i;
	cin >> hh;
	for(i=1;i<=hh;i++){
		h[i] = i;
	}
	cin >> ww;
	for(i=1;i<=ww;i++){
		scanf("%d,%d",&a,&b);
		swap(h[a],h[b]);
	}
	for(int i=1;i<=hh;i++){
		cout << h[i] << endl;
	}
	return 0;
}