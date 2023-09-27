#include <iostream>

#include <queue>

using namespace std;

int a[101][101];

int n=0;

int found[101];

int ended[101];

int aaa(int i, int time);

int main(){

  for(int i=0; i<101; i++)

    for(int j=0; j<101; j++)

      a[i][j]=0;

  int u, k, v;

  cin>>n;

  for(int i=0; i<n; i++){

    cin>>u>>k;

    for(int j=0; j<k; j++){

      cin>>v;

      a[u][v]=1;

    }

  }

  int time=0;

  for(int i=0; i<101; i++){

    found[i]=0;

    ended[i]=0;

  }

  for(int i=1; i<n+1; i++){

    if(found[i]>0)

      continue;

    time++;

    found[i]=time;

    time=aaa(i, time);

    ended[i]=time;

  } 

  for(int i=1; i<n+1; i++)

    cout<<i<<' '<<found[i]<<' '<<ended[i]<<endl;

}

int aaa(int i, int time){

  for(int k=1; k<n+1; k++){

    if(a[i][k]==1&&found[k]==0){

      time++;

      found[k]=time;

      time=aaa(k, time);

      ended[k]=time;

    } 

  }

  time++;

  return time;

}