#include<iostream>
#include<algorithm>	
#include<vector>
using namespace std;
int main (){
  int h,w;
  while(cin >> h >> w,h){
    int min=h*h+w*w;
    vector<pair<int,int> > ans(1000);
    int k=0,judge=1,l=0;
    while(judge){ 
      for(int i=1;i<=150;i++){
        for(int j=i+1;j<=150;j++){
          if((min+l==i*i+j*j)&&(!((i==h)&&(j==w)))){
            if(!(l==0&&i<h)){
              ans[k].first=i;
              ans[k].second=j;
              k++;
              judge=0;
            }
          }
        }
      }
    l++;
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<1000;i++){
      if(ans[i].first!=0){
        cout << ans[i].first << " " << ans[i].second << endl;
        break;	
      }
    }
  }
}