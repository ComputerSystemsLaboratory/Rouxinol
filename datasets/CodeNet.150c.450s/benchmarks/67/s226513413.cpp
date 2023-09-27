#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
 
using namespace std;
 
#define P(p) cout<<(p)<<endl
#define rep(i,m,n) for(int i = (m); i < (int)(n); i++)
#define vsort(v) sort(v.begin(), v.end());
#define rvsort(v) sort(v.begin(), v.end(),greater<int>());
#define YES cout<<"YES"<< endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl  
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ret return
#define C(i) cin>>i
////////////////////////////////////////////////////////////

int main(){
  while(1){
    int N;
    
    C(N);

    if(N == 0)
      break;
    
    int ans = 0;
    
    for(int i = 1 ; i <= N/2 + 1 ; i++ ){
      int sum = i;
      for(int j = i+1 ; j <= N/2 + 5 ; j++){
        sum += j;
        //P(sum);
        if(sum > N)
          break;
        else if(sum == N){
          ans++;
          break;
        }
        else
          continue;
      }
    }
    P(ans);
  }
  ret 0;
}