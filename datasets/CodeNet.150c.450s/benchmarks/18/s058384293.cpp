#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<string>
#include<set>
#include<map>
#include<queue>
#include<vector>
using namespace std;

int main() {
	int a=100000,n;
	cin>>n;
	while(n-->0){
		a*=1.05;
		a=(a+999)/1000;
		a*=1000;
	}
	cout<<a<<endl;
	return 0;
}