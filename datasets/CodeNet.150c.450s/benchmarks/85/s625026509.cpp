#include<iostream>
#include<cstdio>
#define INT_MAX 100000000
using namespace std;
int index;
int mm[1000][1000];
int mine = INT_MAX;

void solve(int p[]){
  int n = index-1,j,q;
  for(int i=1;i<=n;i++)mm[i][i]=0;
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      j = i+l-1;
      mm[i][j] = INT_MAX;
      for(int k=i;k<=j-1;k++){
	q = mm[i][k] + mm[k+1][j] + p[i-1]*p[k]*p[j];
	if(q<mm[i][j]){
	  mm[i][j] = q;
       
	}

      }
    }
  }




}

int main(){
  int p[1000],a,b;
  scanf("%d",&index);
  //for(int i=0;i<=index;i++)for(int j=0;j<=n;j++)mm[i][j] = INT_MAX;
  for(int i=0;i<index;i++){
    scanf("%d %d",&a,&b);
    p[i] = a;
    if(i == index-1)p[i+1] = b;
  }

  index = index+1;
  solve(p);
 
  printf("%d\n",mm[1][index-1]);
  return 0;
}