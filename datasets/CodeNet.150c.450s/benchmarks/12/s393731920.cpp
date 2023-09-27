#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

void printheap(int);

int arr[300];
int n,cnt=1;

int main(int argc,char* argv[]){
  int x;
  
  cin>>n;
  for(int i=0;i<n;i++)
    cin>>arr[i];

  printheap(0);
  return 0;
}

void printheap(int p){
  if(p!=n){
    double x= (static_cast<double>(p)-1)/2;
  
    printf("node %d: key = %d, ",cnt++,arr[p]);

    if(x >= 0)
      printf("parent key = %d, ",arr[static_cast<int>(x)]);

    if(p*2+1 < n)
      printf("left key = %d, ",arr[p*2+1]);

    if(p*2+2 < n)
      printf("right key = %d, ",arr[p*2+2]);

    printf("\n");

    printheap(p+1);
  }
}