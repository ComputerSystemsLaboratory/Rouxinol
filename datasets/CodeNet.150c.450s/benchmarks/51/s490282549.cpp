#include <iostream>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<stack>
#include<map>
#include<cstdio>
#include<fstream>
using namespace std;
#define rep(i,a) for(int i=0;i<a;i++)

#define mp make_pair
#define P pair<int,int>
#define ll __int64
int t[1000],a;
int main(){
	rep(i,28){
		cin>>a;
		t[a]=1;
	}
	for(int i=1;i<=30;i++)if(t[i]==0)cout<<i<<endl;
	return 0;
}
