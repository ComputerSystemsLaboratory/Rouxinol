#include  <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
 
vector<pii> ans;
 
int main(){
      while(1){
       
            int N,M; cin >> N >> M;
            if(!N) break;
            ans.clear();
            for(int i=0; i<N; i++){
                  int d,p; cin >> d >> p;
                  ans.push_back(pii(p,d));
            }
            sort(ans.begin(),ans.end());
            reverse(ans.begin(),ans.end());
            long long sum=0;
            for(int i=0; i<ans.size(); i++){
                  if(M >= ans[i].second){
                        M -= ans[i].second;
						continue;
                  }
                  else{
                        ans[i].second -= M;
                        M = 0;
                        sum += ans[i].first * ans[i].second;
                  }
 
            }
 
            cout << sum << endl;
       
       
      }
}