#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	char ch;
	stack<int> S;
	stack< pair<int,int> > S2;
	int sum=0;
	
	for(int i=0;cin >> ch;i++){
		if(ch == '\\'){
			S.push(i);
		}else if(ch == '/' && S.size() > 0){
		
			//?????¨??£???????????????pop???????????????????????´????????§????????????????????£?????????pop?????????????????????
			int S_top = S.top(); S.pop();
			int tmpArea = i - S_top;
			sum += tmpArea;
			
			//?????????????????????S2??¨first?????????????????????first????°????????????°??????????????????
			while( !S2.empty() && S2.top().first > S_top ){
					tmpArea += S2.top().second;
					S2.pop();
			}
			
			S2.push(make_pair(S_top,tmpArea));
		}
	}
	
	vector<int> ans;
	
	while( S2.size() > 0 ){
		ans.push_back(S2.top().second);
		S2.pop();
	}
	
	reverse( ans.begin(),ans.end() );
	
	cout<<sum<<endl;
	cout<<ans.size();
	
	for(int i=0; i < ans.size() ;i++){
		cout<<" ";
		cout<<ans[i];		
	}
	cout<<endl;
}