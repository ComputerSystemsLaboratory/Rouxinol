#include<iostream>
#define MAX 1000001
using namespace std;
const int infty = 1<<25;
int main()
{
  int allnum = 0;
  int oddnum = 0;
  static int KAll[MAX];
  static int KOdd[MAX];
  static int Answer1[MAX];
  static int Answer2[MAX];
  Answer1[0]=0;
  Answer2[0]=0;

  int n = 1;
  while( true ){
    int t = n*(n+1)*(n+2) / 6;
    if( t >= MAX ) break;
    KAll[allnum++]=t;
    if( t % 2 == 1 ){
      KOdd[oddnum++]=t;
    }
    ++n;
  }
  
  for(int i = 1; i < MAX; ++i){
    Answer2[i] = Answer1[i] = infty;
    for(int j = 0; j < allnum && i - KAll[j] >= 0; ++j){
      Answer1[i] = min(Answer1[i], 1+Answer1[i-KAll[j]]);
    }
    for(int j = 0; j < oddnum && i - KOdd[j] >= 0; ++j){
      Answer2[i] = min(Answer2[i], 1+Answer2[i-KOdd[j]]);
    }
  }
  
  while(true){
    int N;
    scanf("%d", &N);
    if( N == 0 ) break;
    printf("%d %d\n", Answer1[N], Answer2[N]);
  }
  return 0;
}