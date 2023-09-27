#include<bits/stdc++.h>
using namespace std;
int main(){
  int m,mn,mx;
  while(cin>>m>>mn>>mx,m!=0||mn!=0||mx!=0){
    vector<int> p(m);
    for(int i=0;i<m;i++)
      cin>>p[i];
    int df=0,cnt=0;
    for(int i=mn-1;i<mx;i++){
      if(df<=p[i]-p[i+1]){
        df = p[i]-p[i+1];
        cnt=i+1;
      }
    }
    cout<<cnt<<endl;
  }
}
