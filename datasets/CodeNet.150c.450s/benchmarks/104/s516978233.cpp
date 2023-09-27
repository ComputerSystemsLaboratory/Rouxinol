#include<iostream>
using namespace std;
int main(){
	int w,n,a,b,num[30];
	char ch;
	cin >> w >> n;
	for(int i=0;i<w;i++){
		num[i] = i+1;
	}
	for(int i=0;i<n;i++){
		cin >> a >> ch >> b;
		swap(num[a-1],num[b-1]);
	}
	for(int i=0;i<w;i++){
		cout << num[i] << endl;
	}
	return 0;
}