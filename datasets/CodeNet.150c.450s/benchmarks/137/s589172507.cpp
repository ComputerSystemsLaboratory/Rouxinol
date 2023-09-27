#include <bits/stdc++.h>
#define N 6700417
#define h2 1777771
using namespace std;
int H[N];

int CtoN(char c){
  if(c == 'A') return 1;
  if(c == 'C') return 2;
  if(c == 'G') return 3;
  return 4;
}

int StoN(char str[]){
  int n = strlen(str);
  int res = 0;
  for(int i=0;i<n;i++)
    res = res*5 + CtoN(str[i]);
  return res;
}



void Insert(char str[],int i){
  int k = StoN(str);
  int hash = k%N;
  while(H[hash] != 0) hash = (hash + k%h2)%N;
  H[hash] = i;
}

char S[1000001][11];
bool Find(char str[]){
  int k = StoN(str);
  int hash = k%N;
  while(H[hash]){
    if(strcmp(str,S[H[hash]]) == 0) return 1;
    hash = (hash+k%h2)%N;
  }
  return 0;
}

int main(){
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    char q[11]; 
    scanf("%s %s",q,S[i]);
    if(q[0] == 'i') Insert(S[i],i);
    else printf("%s\n",(Find(S[i])? "yes":"no"));
  }
  
  return 0;
}