#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <set>

using namespace std;
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define loop(i,a,b) for(int i = 0 ; i < a ; i ++)
#define vi vector<int>

int main(void){
	int s,t,r=0;
	cin>>s;
	vi sv(s);
	rep(i,s)cin>>sv[i];
	cin>>t;
	vi tv(t);
	rep(i,t){
		cin>>tv[i];
		rep(j,s){
			if(sv[j] == tv[i]){
				r++;
				break;
			}
		}
	}
	cout<<r<<endl;
}	