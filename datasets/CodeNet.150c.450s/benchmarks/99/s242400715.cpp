#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<stdlib.h>

using namespace std;

vector<string> ans;

int main(){
	int n;
	cin >> n;
	string mcxi = "mcxi";
	
	for(int t = 0;t < n;t++){
		string st1,st2;
		cin >> st1 >> st2;
		
		map<char,int> mcxi1;
		map<char,int> mcxi2;
		map<char,int> mcxians;
		
		for(int i = 0;i < 4;i++){
			mcxi1[mcxi[i]] = 0;
			mcxi2[mcxi[i]] = 0;
			mcxians[mcxi[i]] = 0;
		}
		
		for(int i = st1.size()-1;i >= 0;i--){
			if(i-1 >= 0){
				int tn = st1[i-1] - '0';
				if(tn >= 10)mcxi1[st1[i]] = 1;
				else{mcxi1[st1[i]] = tn; i--;}
			}else{
				mcxi1[st1[i]] = 1;
			}
		}
		
		for(int i = st2.size()-1;i >= 0;i--){
			if(i-1 >= 0){
				int tn = st2[i-1] - '0';
				if(tn >= 10)mcxi2[st2[i]] = 1;
				else{mcxi2[st2[i]] = tn; i--;}
			}else{
				mcxi2[st2[i]] = 1;
			}
		}
		
		for(int i = 3;i >= 0;i--){
			mcxians[mcxi[i]] += mcxi1[mcxi[i]] + mcxi2[mcxi[i]];
			if(i != 0){
				mcxians[mcxi[i-1]] += mcxians[mcxi[i]] / 10;
				mcxians[mcxi[i]] = mcxians[mcxi[i]] % 10;
			}else{
				mcxians[mcxi[i]] = mcxians[mcxi[i]] % 10;
			}
		}
		
		string tans = "";
		for(int i = 0;i < 4;i++){
			int tn = mcxians[mcxi[i]];
			if(tn > 0){
				char c = '0' + tn;
				string s(1,c);
				if(tn == 1){
					tans += mcxi[i];
				}else{
					tans += s + mcxi[i];
				}
			}
		}
		
		ans.push_back(tans);
	}
	for(int i = 0;i < ans.size();i++) cout << ans[i] << endl;
	return 0;
}