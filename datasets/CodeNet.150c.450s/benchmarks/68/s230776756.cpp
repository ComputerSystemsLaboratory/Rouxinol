#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  while(cin>>n,n!=0){
    vector<int> a(n);
    for(int i=0;i<n;i++)
      cin>>a[i];
    sort(a.begin(), a.end(),greater<int>() );
    int df=1000001;
    for(int i=0;i<n-1;i++){
      if(df>=a[i]-a[i+1]){
        df = a[i]-a[i+1];
      }
    }
    cout<<df<<endl;
  }
}
