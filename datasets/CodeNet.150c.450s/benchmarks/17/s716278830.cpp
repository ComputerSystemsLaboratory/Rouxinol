#include<bits/stdc++.h>
using namespace std;


int main(){
int a[5];
cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
sort(a,a+5);
for (int i = 4; i >= 1; --i) {
	cout<<a[i]<<" ";
}
cout<<a[0]<<endl;
	return 0;
}