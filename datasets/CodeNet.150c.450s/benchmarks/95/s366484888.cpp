#include<iostream>
using namespace std;

int main()
{
  int n,sum=0;
  char Step[1000][2];

  while(1){
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>Step[i];
    }

    for(int i=0;i<n-1;i++){
      if(Step[i][0] !=Step[i+1][0] &&Step[i][1] ==Step[i+1][1])sum++;
    }
    cout <<sum<< endl;
    sum=0;
  }
  
  return 0;
}