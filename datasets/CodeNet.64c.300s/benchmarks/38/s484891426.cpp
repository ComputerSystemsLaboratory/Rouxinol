#include<cstdio>
#include<algorithm>

using namespace std;

int N;
int l[15];
int b,c;
//int res[1000000000000];


void solve(int k){
  for(int i=0;i<10;i++){
    if(b<l[i] && c<l[i]){
      if(l[i]-b < l[i]-c) b=l[i];
      else c=l[i];
    }
    else if(b<l[i] && c>l[i]) b=l[i];
    else if(b>l[i] && c<l[i]) c=l[i];
    else{
  //    res[k]=0;
      printf("NO\n");
      return;
    }
  }
  printf("YES\n");
  return;
}


int main(){
  scanf("%d",&N);

  for(int i=0;i<N;i++){
    b=0;
    c=0;
    scanf("%d%d%d%d%d%d%d%d%d%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9]);
    solve(i);
  }

  /*for(int i=0;i<N;i++){
    if(res[i]==0) printf("NO\n");
    else printf("YES\n");
  }
*/

  return 0;
}