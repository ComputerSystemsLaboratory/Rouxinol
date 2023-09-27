#include <bits/stdc++.h>
using namespace std;


string maxi(string s){

	  vector<string> tmp;
	  for(int i=0; i<s.size(); i++)
			tmp.push_back(s.substr(i,1));
	  sort(tmp.begin(),tmp.end());
	  reverse(tmp.begin(),tmp.end());
	  string ans = "";
	  for(int i=0; i<s.size(); i++)
			ans += tmp[i];
	  return ans;
}

string mini(string s){
	  vector<string> tmp;
	  for(int i=0; i<s.size(); i++)
			tmp.push_back(s.substr(i,1));
	  sort(tmp.begin(),tmp.end());
//	  reverse(tmp.begin(),tmp.end());
	  string ans = "";
	  for(int i=0; i<s.size(); i++)
			ans += tmp[i];
	  return ans;
}

int main(){
	  while(1){
			string a;
			int L;
			cin >> a >> L;
			if(!L) break;
			while( a.size() < L )  a = "0" + a;
			
			vector<string> list(1,a);

			while(1){
				  a = to_string(stoi(maxi(a)) - stoi(mini(a)));
				  while( a.size() < L )	a = "0" + a;
				  for(int i=0; i<list.size(); i++)
						if(a == list[i]){
							  cout << i << " " << stoi(a) << " " << list.size() - i << endl;
							  goto L1;
						}
				  list.push_back(a);
								  
			}
	  L1:;
	  }
	  return 0;
}