#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n,i;
  int a[1001]={};
  while(1){
    int min = 1000001;
    cin >>n;
    if(n==0)break;
    for(i=0;i<n;++i){
      cin >>a[i];
    }
    sort(a,a+n);
    for(i=0;i<n-1;++i){
	if(a[i+1]-a[i]<min)
	  min = a[i+1]-a[i];
    }
    cout << min << endl;
  }
  return 0;
}