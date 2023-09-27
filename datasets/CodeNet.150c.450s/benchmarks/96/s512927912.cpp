#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pll;

#define reps(i,f,n) for(int i = int(f); i <= int(n); i++)
#define rep(i,n) reps(i,0,int(n)-1)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)

#define all(x) (x).begin(),(x).end()
#define X first
#define Y second

#define sz size()
#define eb emplace_back

char str[12][6] ={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
int mod[12] = {0,5,3,3,3,3,3,4,3,4};

int main(void){
  int n;
  cin >> n;
  rep(test,n){
    string s;
    cin >> s;
    int num = -1;
    int cnt = -1;
    rep(i,s.sz){
      if(s[i] == '0'){
        if(num != -1){
          printf("%c", str[num][cnt%mod[num]]);
          num = -1;
          cnt = -1;
        }
      }else{
        num = s[i] - '0';
        cnt++;
      }
    }
    puts("");
  }
  return 0;
}