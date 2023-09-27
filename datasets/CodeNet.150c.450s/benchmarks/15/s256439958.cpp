#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int n;
int q;
int s[11111]={0};
int t;
int c=0;

int main(){

  scanf(" %d",&n);

  for(int i=0;i<n;i++){
    scanf(" %d",&s[i]);
  }

  scanf(" %d",&q);

  for(int i=0;i<q;i++){
    scanf(" %d",&t);
    for(int j=0;j<n;j++){
      if(s[j]==t){
        c++;
        break;
      }
    }
  }

  cout << c << endl;

  return 0;

}