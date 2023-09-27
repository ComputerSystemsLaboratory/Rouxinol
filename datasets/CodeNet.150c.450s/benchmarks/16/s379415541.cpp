#include<iostream>
#include<cstdio>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

	stack<int> bsli;
	stack<pair<int, int> > provs;
	char t;
	int area=0;

	for( int i=0; cin>>t; i++ ){

		if( t=='\\' ){
			bsli.push(i);

		}else if( t=='/' && bsli.size() >0 ){
			int tp=bsli.top();bsli.pop();

			area += i -tp;
			int a= i -tp;

			


			while( provs.size() && provs.top().first >tp ){
				a+= provs.top().second; provs.pop();

			}
			provs.push(make_pair(tp, a)); //????????????\???????????¨??????????????§????????????????±?
			
		}
	}

	vector<int> ans;
	int temp=0;
	while( provs.size() ){
		ans.push_back(provs.top().second); provs.pop();
	}

	reverse(ans.begin(), ans.end());
	cout<<area<<endl;
	cout<<ans.size()<<flush;
	for( unsigned int i=0; i<ans.size(); i++ ){
		cout<<' '<<flush;
		temp +=ans[i];
		cout<<ans[i];
	}
	cout<<endl;
}

		