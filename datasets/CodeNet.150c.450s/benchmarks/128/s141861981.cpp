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
#include <utility>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define sort(ss) sort(ss.begin(), ss.end())
#define rsort(ss) sort(ss.rbegin(), ss.rend())
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return acos(-1.0);
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	string ss;
	cin>>ss;
	int sr=size(ss);
	for(int i=sr-1;i>=0;i--){
		if(i==0) cout<<ss[i]<<endl;
		else cout<<ss[i];
	}
}