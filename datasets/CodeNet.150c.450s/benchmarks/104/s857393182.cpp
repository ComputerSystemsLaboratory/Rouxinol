#include<stdio.h>
#include<iostream>
using namespace std;

int main(void){
	int w; cin >> w;
	int n; cin >> n;

	int string[w];
	int i=0;
	for(i=0; i<w; i++){
		string[i]=i+1;
	}
	for(i=0;i<n;i++){
		int a,b;
		char c; cin >> a >> c >> b;
		swap(string[a-1],string[b-1]);
	}
	for(i=0;i<w;i++){
		cout << string[i] << endl;
	}
}
