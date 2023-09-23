#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define fr first
#define sc second
typedef pair<int,int> pii;
typedef vector<int> vi;
const int INF = (1<<25);
const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};

int main(){
  int a[4],b[4];
  int asum=0,bsum=0;
  for(int i=0;i<4;i++){
    cin>> a[i];
    asum+=a[i];
  }

  for(int i=0;i<4;i++){
    cin>> b[i];
    bsum+=b[i];
  }

  if(asum>bsum) cout<< asum<< endl;
  else cout<< bsum<< endl;
}