#include<stdio.h>
#include<queue>
#include<vector>
#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

int main(){
	stack<int> s1;
	stack<pair<int,int> > s2;
	char ch;
	int sum=0,a;
	for(int i=0;(ch=getchar())!='\n';i++){
		if(ch=='\\')s1.push(i);
		else if(ch=='/'&&s1.size()>0){
			int j=s1.top();s1.pop();
			sum+=i-j;
			a=i-j;
			while(s2.size()>0&&s2.top().first>j){
				a+=s2.top().second;s2.pop();//计算每一处积水的面积和 
			}
			s2.push(make_pair(j,a)); 
		}
	}
	vector<int> ans;
	while(s2.size()>0){
		ans.push_back(s2.top().second);s2.pop();
	}
	reverse(ans.begin(),ans.end());//翻转，从前往后输出 
	cout<<sum<<endl;
	cout<<ans.size();
	for(int i=0;i<ans.size();i++){
		cout<<" "<<ans[i];
	}
	cout<<endl;
	return 0;
}

