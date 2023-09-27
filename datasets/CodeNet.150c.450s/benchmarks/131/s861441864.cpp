//Recurring Decimals
#include<bits/stdc++.h>
using namespace std;

int L;
int next(int x){
  vector<int> v1, v2;
  for(int i=0; i<L; i++){
    v1.push_back(x%10);
    v2.push_back(x%10);
    x/=10;
  }
  sort(v1.begin(), v1.end(), greater<int>());
  sort(v2.begin(), v2.end());
  int x1=0, x2=0;
  for(int i=0; i<L; i++){
    x1=x1*10+v1[i];
    x2=x2*10+v2[i];
  }
  return x1-x2;
}

int main(){
  while(true){
    int a;
    cin>>a>>L;
    if(a==0&&L==0)break;
    vector<int> v;
    while(true){
      v.push_back(a);
      a=next(a);
      bool flag=false;
      int i;
      for(i=0; i<v.size(); i++)
        if(a==v[i]){flag=true; break;}
      if(flag){cout<<i<<" "<<a<<" "<<v.size()-i<<endl; break;}
    }
  }
  return 0;
}