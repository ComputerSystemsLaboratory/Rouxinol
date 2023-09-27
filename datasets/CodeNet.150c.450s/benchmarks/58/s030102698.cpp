#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<vector>
#define rep(index,num) for(int index=0;index<num;index++)
#define scan(argument) cin>>argument
#define prin(argument) cout<<argument<<endl
#define kaigyo cout<<endl
#define eps 1e-15
typedef long long ll;
using namespace std;
int main(){
	vector<int> moji;
	char str[100];
	while(scanf("%s", str) != EOF){
		if(str[0]=='+'||str[0]=='-'||str[0]=='*'){
			int kazu2=moji.back();
			moji.pop_back();
			int kazu1=moji.back();
			moji.pop_back();
			int kazukekka;
			if(str[0]=='+'){
				kazukekka=kazu1+kazu2;
			}
			if(str[0]=='-'){
				kazukekka=kazu1-kazu2;
			}
			if(str[0]=='*'){
				kazukekka=kazu1*kazu2;
			}
			moji.push_back(kazukekka);
		}
		else{
			moji.push_back(atoi(str));
		}
	}
	prin(moji[0]);
	return 0;
}

