#include <iostream>
#include <utility>
#include <cstring>
using namespace std;

void swap(int*,int*,int);
int main()
{
  int w,n,i;
  cin>>w>>n;
  int *numline = new int[w];
  for(i=0;i<w;++i){
    numline[i]=i+1;
  }
  int *swapline = new int[2*n];
  for(i=0;i<2*n;i+=2){
    char innum[10];
    cin >>innum;
    int m=0;
    while(innum[m]!=',') ++m;
    if(m==1){
      swapline[i]=innum[0]-48;
      if(strlen(innum)-m-1==1) swapline[i+1]=innum[2]-48;
      else swapline[i+1]=10*(innum[2]-48)+(innum[3]-48);
    }
    else{
      swapline[i]=10*(innum[0]-48)+(innum[1]-48);
      if(strlen(innum)-m-1==1) swapline[i+1]=innum[3]-48;
      else swapline[i+1]=10*(innum[3]-48)+(innum[4]-48);
    }
  }
  swap(numline,swapline,n);
  for(i=0;i<w;++i){
  cout<<numline[i]<<endl;
  }
  delete[] numline;
  delete[] swapline;
  return 0;
}

void swap(int numline[],int swapline[],int n)
{
  for(int i=0;i<2*n;i+=2){
    swap(numline[swapline[i]-1],numline[swapline[i+1]-1]);
  }
}
