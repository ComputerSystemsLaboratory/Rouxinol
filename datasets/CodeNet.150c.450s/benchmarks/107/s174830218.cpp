#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int dp[1010][1010];
/*dp[i][j]:=a1...aiとb1...bjの編集距離*/
inline int edit_distance(string a,string b){
   for(int i =0;i <=a.size();i++) dp[i][0] = i;

   for(int j =0;j <=b.size();j++) dp[0][j] = j;

      for(int i =1;i <=a.size();i++){
         for(int j =1;j <=b.size();j++){
            int cost =(a[i-1]==b[j-1]?0:1);
            /*d[ i1, i2 ] = minimum(
                               d[ i1 - 1, i2     ] + 1,     // 文字の挿入
                                    d[ i1    , i2 - 1 ] + 1,     // 文字の削除
                                    d[ i1 - 1, i2 - 1 ] + cost   // 文字の置換
                                     )
 */
            dp[i][j] =min(dp[i-1][j-1]+cost,min(dp[i][j-1]+1,dp[i-1][j]+1));
         }
      }
      return dp[a.size()][b.size()];
   }
int main(){
   string str1,str2;
   cin>>str1>>str2;
   cout <<edit_distance(str1, str2)<<endl;
   return 0;
}