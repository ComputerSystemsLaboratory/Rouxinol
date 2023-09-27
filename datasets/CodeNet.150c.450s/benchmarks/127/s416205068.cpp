#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

typedef pair<string,string> P;
int ans;
map<string,bool> M;


void solve(string a, string b){
  vector<string> v1,v2;

  v1.push_back(a);
  v2.push_back(b);
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  v1.push_back(a);
  v2.push_back(b);

  for(int i = 0; i < v1.size(); i++)
    for(int j = 0; j < v2.size(); j++)
      if(M[v1[i]+v2[j]] == false){
	//	cout << v1[i] << " " << v2[j] << endl;
	M[v1[i]+v2[j]] = true;
	ans++;
      }
  
  
  for(int i = 0; i < v2.size(); i++)
    for(int j = 0; j < v1.size(); j++)
	if(M[v2[i]+v1[j]] == false){
	  //cout << v2[i] << " " << v1[j] << endl;
	  M[v2[i]+v1[j]] = true;
	  ans++;
	}

}

void init(){
  ans = 0;
  M.clear();
}

int main(){

  int n;
  cin >> n;
  while(n--){
    init();
    string s;
    cin >> s;
    for(int i = 1; i < s.length(); i++){
      solve(s.substr(0,i),s.substr(i));
    }
    cout << ans << endl;
  }
  return 0;
}