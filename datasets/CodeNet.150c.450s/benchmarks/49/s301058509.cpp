#include<bits/stdc++.h>

using namespace std;

#define reps(i,f,n) for(int i=f;i<int(n);i++)
#define rep(i,n) reps(i,0,n)

vector<int> x;

void init(){
  x.clear();
}
bool input(){
  int n;
  cin>>n;
  if(n==0)return false; 
 rep(i,n){
    int a;
    cin>>a;
    x.push_back(a);
  }
  return true;
}

int solve(){
  sort(x.begin(),x.end());
  int sum = 0;
  reps(i,1,x.size()-1)sum+=x[i];
  return sum/(x.size()-2);
}
int main(){
  while(init(),input()){
    printf("%d\n",solve());
  }
}