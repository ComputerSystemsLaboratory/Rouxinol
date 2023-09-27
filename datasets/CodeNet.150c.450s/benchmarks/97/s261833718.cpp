#include<iostream>
#include<map>
#include<vector>
using namespace std;
typedef pair<int,int> pii;

int dy[4]={0,-1,0,1};
int dx[4]={-1,0,1,0};

int main(){
  int n;
  int houkou,num;
  while(cin>>n,n){
    vector<pii> ans(n);
    pii tmp;
    ans[0] = make_pair(0,0);
    for(int i=1;i<n;i++){
      cin>>num>>houkou;
      tmp=ans[num];
      ans[i] =  make_pair(tmp.first+dx[houkou],tmp.second+dy[houkou]) ;
    }
    int MaxX=0,MaxY=0,MinX=0,MinY=0;
    for(int i=0;i<n         ;i++){
      if(ans[i].first>MaxX) MaxX=ans[i].first;
      if(ans[i].first<MinX) MinX=ans[i].first;
      if(ans[i].second>MaxY) MaxY=ans[i].second;
      if(ans[i].second<MinY) MinY=ans[i].second;
      //cout << ans[i].first << " " << ans[i].second << endl;
    }
    cout<<MaxX-MinX+1<<" "<<MaxY-MinY+1<<endl;
  }
  return 0;
}