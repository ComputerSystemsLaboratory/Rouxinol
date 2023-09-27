#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>
#include<set>
#include<array>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i);
#define UNIQUE(a) a.erase(unique(ALL(a)), a.end())

using namespace std;

const int MAX_NUM=1000001;


vector<int> dp(MAX_NUM,MAX_NUM);//?§????????????£?????¢?????°????????°
vector<int> dp_odd(MAX_NUM,MAX_NUM);

int main(){

  vector<int> numbers;
  
  int cnt=1,sum=0;
  while (1) {
    sum=(cnt*(cnt+1)*(cnt+2))/6;
    if(sum>MAX_NUM) break;
    numbers.push_back(sum); 
    dp[sum]=1;
    if(sum%2==1)dp_odd[sum]=1;
    cnt++;  
  }

  for(int i=1;i<MAX_NUM;i++){
    rep(j,numbers.size()){
      if(i-numbers[j] <= 0) break;
      dp[i]=min(dp[i],dp[i-numbers[j]] + 1);
      if(numbers[j]%2==1) dp_odd[i]=min(dp_odd[i],dp_odd[i-numbers[j]] + 1);
    }
  }


  while(1){
    int n;
    cin >> n; if(n==0) break;
    cout << dp[n] << " " << dp_odd[n] << endl;
  }

}