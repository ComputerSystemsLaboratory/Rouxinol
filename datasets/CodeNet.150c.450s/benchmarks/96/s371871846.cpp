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
typedef long long ll;
typedef pair<int,int> Pii;
int main(){
	int n;
	cin >> n;
	string change[] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};	
	while(n--){
		string str;
		cin >> str;
		int len = str.size();
		string ans = "";
		rep(i,len){
			if(str[i] == '0')continue;
			int sub = i;
			while(str[i] == str[++sub]);
			ans += change[str[sub-1]-48][(sub-i-1)%change[str[sub-1]-48].size()];
			i = sub;
		}
		
		cout << ans << endl;
	}
	
	return 0;
}