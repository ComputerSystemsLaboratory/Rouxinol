#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int main(){
  int n,j,knum;
  string s;
  string c[10] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
  cin >> n;
  while(n){
    cin >> s;
    for(int i = 0;i<s.size();i++){
      if(s[i] == '0')continue;
      for(j=0;j<s.size();j++)
	if(s[i+j+1] == '0')break;
      knum = j%c[s[i]-'0'].size();
      cout << c[s[i]-'0'][knum];
      i += j;
    }
    cout << "\n";
    n--;
  }

  return 0;
}