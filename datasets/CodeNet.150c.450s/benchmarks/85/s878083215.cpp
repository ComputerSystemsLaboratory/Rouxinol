#include <iostream>
#define NMAX 100
#define MAX 100000000
using namespace std;

struct Matrix{
  long long r;
  long long c;
};

Matrix m[NMAX];
int n;

long long minmulti_[NMAX][NMAX];

long long minmulti(int begin,int end){
  if(begin==end){return 0;}
  if(begin+1==end){return m[begin].r*m[begin].c*m[end].c;}
  if(minmulti_[begin][end]!=0) return minmulti_[begin][end];
  long long min=MAX;
  long long num;
  for(int i=begin;i<end;i++){
     num = minmulti(begin,i) + minmulti(i+1,end);
     num += m[begin].r*m[i].c*m[end].c;
     if(num<min){min=num;}
  }
  minmulti_[begin][end]=min;
  return min;
}

int main(){
  for(int i=0;i<NMAX;i++){
    for(int j=0;j<NMAX;j++){
      minmulti_[i][j]=0;
    }
  }
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m[i].r>>m[i].c;
  }
  cout<<minmulti(0,n-1)<<endl;
}