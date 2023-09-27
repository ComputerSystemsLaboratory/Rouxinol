#include <iostream>
#include <cstdio>
using namespace std;

int main(void){
  int N;
  cin >> N;
  char s;
  int a;
  int S[14]={0},H[14]={0},C[14]={0},D[14]={0};
  for(int i=0;i<N;i++){
    cin >> s >> a;
    if(s=='S')S[a]=1;
    else if(s=='H')H[a]=1;
    else if(s=='D')D[a]=1;
    else if(s=='C')C[a]=1;
  }

  for(int i=1;i<=13;i++){
    if(S[i]!=1)cout << 'S' << ' ' << i << endl;
  }

  for(int i=1;i<=13;i++){
    if(H[i]!=1)cout << 'H' << ' ' << i << endl;
  }

  for(int i=1;i<=13;i++){
    if(C[i]!=1)cout << 'C' << ' ' << i << endl;
  }

  for(int i=1;i<=13;i++){
    if(D[i]!=1)cout << 'D' << ' ' << i << endl;
  }
  return 0;
}