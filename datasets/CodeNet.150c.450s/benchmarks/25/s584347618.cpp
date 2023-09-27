#include<cstdio>
#include<functional>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<cstdlib>
#include<cctype>
#define rep(i,a) for(i=0;i<a;i++)
#define kk 26
using namespace std;
typedef pair<char,int> P;
int main(void)
{
	FILE *fp;
	int i,j,k;
	P data[27];
	char cc[27]={"abcdefghijklmnopqrstuvwxyz"};
	char mozi;
	string ss;
	rep(i,kk){data[i].first=cc[i];data[i].second=0;}
	while(scanf("%c",&mozi)!=EOF) {
		rep(j,kk) {
			if(data[j].first==mozi || 
				data[j].first==tolower(mozi)) {
					data[j].second++;
					break;
			}
		}
	}
	rep(i,kk) cout<<data[i].first<<" : "<<data[i].second<<endl;
	return 0;
}