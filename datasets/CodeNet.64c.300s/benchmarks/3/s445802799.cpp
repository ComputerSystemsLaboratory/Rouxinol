#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[100],num;
	cin >> num;
	for(int i=0;i<num;i++){
	    cin >> a[i];
	}
	for(int i=0;i<num-1;i++){
    	cout << a[num-i-1] << " ";
	}
    cout << a[0]<<endl;
}