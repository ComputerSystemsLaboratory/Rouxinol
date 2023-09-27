#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<stdlib.h>
#include<vector>
#include<queue>
#define rep(index,num) for(int index=0;index<num;index++)
#define scan(argument) cin>>argument
#define prin(argument) cout<<argument<<endl
#define kaigyo cout<<endl
#define eps 1e-15
typedef long long ll;
using namespace std;
int main(){
	int n,q;
	queue<string> name;
	queue<int> jikan;
	int nowtime=0;
	scan(n);scan(q);
	rep(i,n){
		string str;
		scan(str);
		int t;
		scan(t);
		name.push(str);
		jikan.push(t);
	}
	while(name.empty()==0){
		nowtime+=min(jikan.front(),q);
		jikan.front()-=q;
		if(jikan.front()<=0){
			printf("%s %d\n",name.front().c_str(),nowtime);
			name.pop();
			jikan.pop();
		}
		else{
			name.push(name.front());
			jikan.push(jikan.front());
			name.pop();
			jikan.pop();
		}
	}
	return 0;
}

