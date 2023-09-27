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
  int mount[10];
  for(int i=0;i<10;i++){
    cin>> mount[i];
  }

  sort(mount,mount+10);
  printf("%d\n%d\n%d\n",mount[9],mount[8],mount[7]);
}