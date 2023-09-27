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
	int n,ans=0;
	int ss[10000]={};
	while(cin>>n){
		ans=0;
		if(n>37) cout<<0<<endl;
		else{
			for(int a=0;a<10;a++){
				for(int b=0;b<10;b++){
					for(int c=0;c<10;c++){
						for(int d=0;d<10;d++){
							if(a+b+c+d==n) ans++;
						}
					}
				}
			}
			cout<<ans<<endl;
		}
	}
}