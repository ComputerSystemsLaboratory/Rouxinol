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
	int a,b,ans[201]={},i=0;
	while(cin>>a>>b){
		int q;
		q=a+b;
		while(1){
			if(q/10!=0){
				ans[i]++;
				q=q/10;
			}
			else break;
		}
		cout<<ans[i]+1<<endl;
		i++;
	}
}