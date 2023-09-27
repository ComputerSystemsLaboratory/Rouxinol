#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<bitset>
using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+8
#define EPS 1e-8
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = j; i < k; i++)
//typedef long long ll;
typedef pair<int,int> Pii;
int main(){
	int n;
	cin >> n;
	
	vector < string > change;
	change.push_back("");
	change.push_back(".,!? ");
	change.push_back("abc");
	change.push_back("def");
	change.push_back("ghi");
	change.push_back("jkl");
	change.push_back("mno");
	change.push_back("pqrs");
	change.push_back("tuv");
	change.push_back("wxyz");
	
	while(n--){
		string str;
		cin >> str;
		int len = str.size();
		string ans = "";
		rep(i,len){
			if(str[i] == '0')continue;
			int sub = i;
			while(str[i] == str[++sub]);
			if(str[sub-1]-48 == 1)ans += change[str[sub-1]-48][(sub-i-1)%5];
			else if(str[sub-1]-48 == 7 || str[sub-1]-48 == 9)ans += change[str[sub-1]-48][(sub-i-1)%4];
			else ans += change[str[sub-1]-48][(sub-i-1)%3];
			i = sub;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}