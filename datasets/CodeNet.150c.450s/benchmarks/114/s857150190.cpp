#include <iostream>
#define NMAX 100
#define AMAX 2001

using namespace std;

enum state{
  WHITE,
  BLACK
};

int main(){
  int A[NMAX][NMAX];
  int n; cin>>n;
  state s[NMAX];
  
  for(int r=0;r<n;r++){
    for(int c=0;c<n;c++){
      cin>>A[r][c];
      if(A[r][c]==-1) A[r][c]=AMAX;
    }
  }

  for(int i=0;i<n;i++) s[i]=WHITE;
  s[0]=BLACK;
  
  int sum=0;

  while(1){
    bool flag=true;
    for(int i=0;i<n;i++){
      if(s[i]!=BLACK) flag=false;
    }
    if(flag) break;

    int min=AMAX;
    int minr,minc;
    for(int r=0;r<n;r++){
      for(int c=0;c<n;c++){
        if(s[r]==BLACK && s[c]!=BLACK && A[r][c]<min){
          min=A[r][c];
          minr=r;minc=c;
        }
      }
    }
    s[minr]=BLACK;s[minc]=BLACK; 
    sum+=min;
  }
  cout<<sum<<endl;
}