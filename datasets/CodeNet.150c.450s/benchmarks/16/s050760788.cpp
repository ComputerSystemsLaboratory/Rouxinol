#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;
int main(){
	stack<int> s1;
	stack<pair<int,int> > s2;
	string str;	cin>>str;
	int sum=0;
	for(int i=0;i<(int)str.size();i++){
		if(str[i]=='\\')	s1.push(i);
		else if(str[i]=='/'&&s1.size()>0){
			int j=s1.top();	s1.pop();
			sum+=i-j;
			int a=i-j;
			while(s2.size()>0&&s2.top().first>j){
				a+=s2.top().second;
				s2.pop();
			}
			s2.push(make_pair(j,a));
		}
	}
	vector<int> ans;
	while(s2.size()>0){
		ans.push_back(s2.top().second);
		s2.pop();
	}
	reverse(ans.begin(),ans.end());
	cout<<sum<<endl;
	cout<<ans.size();
	for(vector<int>::iterator it=ans.begin();it!=ans.end();it++)	cout<<" "<<*it;
	cout<<endl;
	return 0;
}