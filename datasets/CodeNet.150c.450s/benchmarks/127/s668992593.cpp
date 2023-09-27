#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

vector<string> solve(string s,int st){
	vector<string> ans;
	
	string s1 = s.substr(0,st);
	string s2 = s.substr(st,s.size()-st);
	
	// 両方正
	ans.push_back(s1+s2);
	ans.push_back(s2+s1);

	reverse(s1.begin(),s1.end());

	//s1が逆
	ans.push_back(s1+s2);
	ans.push_back(s2+s1);

	reverse(s2.begin(),s2.end());

	//両方逆
	ans.push_back(s1+s2);
	ans.push_back(s2+s1);

	reverse(s1.begin(),s1.end());

	//s2が逆
	ans.push_back(s1+s2);
	ans.push_back(s2+s1);

	return ans;
}

int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		set<string> s;
		string buf;
		cin >> buf;
		for(int j=1;j<buf.size();j++){
			vector<string> buf2 = solve(buf,j);
			for(int k=0;k<buf2.size();k++){
				s.insert(buf2[k]);
			}
		}

		cout << s.size() << endl;
	}
}