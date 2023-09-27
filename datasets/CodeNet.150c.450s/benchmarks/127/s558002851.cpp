#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

vector<int> ans;

int main(){
	int n;
	cin >> n;
	for(int dum = 0;dum < n; dum++){
		map<string,bool> mp;
		string train;
		cin >> train;
		for(int i = 1;i < train.size();i++){
			string front;
			string rfront;
			string back;
			string rback;
			
			front = train.substr(0,i);
			rfront = front;
			reverse(rfront.begin(),rfront.end());
			
			back = train.substr(i);
			rback = back;
			reverse(rback.begin(),rback.end());
			
			mp[front+back] = true;
			mp[back+front] = true;
			
			mp[rfront+back] = true;
			mp[back+rfront] = true;
			
			mp[front+rback] = true;
			mp[rback+front] = true;
			
			mp[rfront+rback] = true;
			mp[rback+rfront] = true;
		}
		
		ans.push_back(mp.size());
	}
	for(int i = 0;i < ans.size();i++)cout << ans[i] << endl;
	
	return 0;
}