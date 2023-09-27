#include<iostream>
#include<stack>
#include<vector>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	char str[20000];
	scanf("%s",str);
	stack<int> S;
	stack< pair<int,int> > S2;
	vector<int> L;
	int sum=0,k=0;
	for(int i=0;i<strlen(str);i++){
		char t = str[i];
		if(t == '\\'){
			S.push(i);
		}else if(t == '/'){
			if(!S.empty()){
			int tmpArea = i - S.top();
			sum += tmpArea;
			//?????????????????????S2??¨first?????????????????????first????°????????????°??????????????????
			while(!S2.empty()){
				if(S2.top().first > S.top()){
					tmpArea += S2.top().second;
					S2.pop();
				}else if(S2.top().first < S.top()){
					break;
				}
			}
			S2.push(make_pair(S.top(),tmpArea));
			S.pop();
			}
		}
	}
	stack<int> ans;
	int size = S2.size();
	for(int i=0;i<size;i++){
		ans.push(S2.top().second);
		S2.pop();
	}
	
	cout<<sum<<endl;
	cout<<size;
	size = ans.size();
	for(int i=0;i<size;i++){
		cout<<" ";
		cout<<ans.top();
		ans.pop();
	}
	cout<<endl;
}