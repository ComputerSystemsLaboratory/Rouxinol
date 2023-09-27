#include <bits/stdc++.h>

using namespace std;

int main(){
  while(true){
    int n;
    cin>>n;
    if(n==0){
      break;
    }
    vector<int> score(n);
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      score[i]=x;
    }
    sort(score.begin(),score.end());
    int ans=1000000;
    for(int i=0;i<n-1;i++){
      ans=min(ans,score[i+1]-score[i]);
    }
    cout<<ans<<endl;
  }
}

