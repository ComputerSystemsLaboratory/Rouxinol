#include<algorithm>
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
int main(){
	int debt=100000;
	int n;
	cin >> n;
	rep(i,n){
	   if(debt%20000==0)debt = debt*1.05;
	   else debt = (int)(debt*1.05/1000+1)*1000;
	}
	cout << debt << endl;
    return 0;
}