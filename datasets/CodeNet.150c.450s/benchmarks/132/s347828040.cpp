#include <bits/stdc++.h>
using namespace std;

int ppl[55]={0};
int n,p,now,num;

int main(){
  int i,j,k;
  while(1){
    cin >> n >> p;
    if(n+p==0)break;
    now = p;
    num = 0;
    while(1){
      if(now>0){
	ppl[num]++;
	now--;
      }
      else if(ppl[num]==p)break;
      else{
	now = ppl[num];
	ppl[num]=0;
      }
      num++;
      num%=n;
    }
    printf("%d\n",num);
    for(i=0;i<n;i++)ppl[i]=0;
  }
  return 0;
}

