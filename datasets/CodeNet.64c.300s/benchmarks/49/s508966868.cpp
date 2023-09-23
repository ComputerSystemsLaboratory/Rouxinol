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
  int a,b;
  while(scanf("%d %d",&a,&b) != EOF){
    int c=a+b;
    int cnt=0;
    while(c/10>0){
      c/=10;
      cnt++;
    }
    cout<< cnt+1<< endl;
  }
}