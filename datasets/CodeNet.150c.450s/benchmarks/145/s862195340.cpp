#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)


string t;
vector < string> st;
int s[1000]={0};
int max1=0;
int max2=0;

int main(){
	while(cin >>t){
		bool flag=true;
		int tmp = t.size();
		max1 = max(max1,tmp );
		rep(i,st.size()){
			if(t == st[i]){
				s[i]++;
				max2 = max(max2,s[i]);
				flag = false;
				break;
			}
		}
		if(flag){
			st.push_back(t);
		}
	}
	rep(i,st.size()){
		if(s[i]==max2){
			cout<<st[i]<<" ";
			break;
		}
	}
	rep(i,st.size()){
		if(st[i].size()==max1){
			cout<<st[i]<<endl;
			break;
		}
	}
	return 0;
}