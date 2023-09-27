#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define fi first
#define se second
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int main(){
	int n;
	cin>>n;
	fu(0,n){
		vi a(3,0);
		cin>>a[0]>>a[1]>>a[2];
		sort(a.rbegin(), a.rend());
		if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2]) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}