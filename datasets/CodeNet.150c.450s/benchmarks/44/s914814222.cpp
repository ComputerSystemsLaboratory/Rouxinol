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
int INF=1000000;
int main(){
	int a[5],b[5];
	int ssr,sr;
	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>b[0]>>b[1]>>b[2]>>b[3]){
		ssr=0;
		sr=0;
		fu(0,4){
			if(a[i]==b[i]){
				ssr++;
				a[i]=INF;
				b[i]=INF;
			}
		}
		fu(0,4){
			if(b[i]!=INF){
				for(int r=0;r<4;r++){
					if(b[i]==a[r]) sr++;
				}
			}
		}
		cout<<ssr<<" "<<sr<<endl;
	}
}