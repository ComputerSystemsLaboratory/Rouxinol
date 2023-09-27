#include<bits/stdc++.h>
using namespace std;

char s[20010];
vector<int> ans;
stack<int> S1;
stack<pair<int, int> > S2;
int main(){
	int sum = 0, a;
	char c;
	for(int i = 0; cin >> c; i++){
		if(c == '\\'){
			S1.push(i); 
		} 
		else if(c == '/'){
			if(S1.size() > 0){
				int j = S1.top();
				S1.pop();
				sum += i - j;
				a = i - j;
				while(S2.size() > 0 && S2.top().first > j){
					a += S2.top().second;
					S2.pop();
				}
				S2.push(make_pair(i, a));
			}
		}
	}
	printf("%d\n", sum);
	while(S2.size() > 0){
		ans.push_back(S2.top().second);
		S2.pop();
	}
	reverse(ans.begin(), ans.end());
	printf("%d", ans.size());
	for(int i = 0; i < ans.size(); i++) printf(" %d", ans[i]);
	printf("\n");
	return 0;
}
