#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<cmath>
using namespace std;
#define pi 3.141592653589793283462   
int main(){
  int n;
  cin>>n;
  int max;
  int min;
  long sum;
  int a[10000];
  cin>>a[0];
  sum=a[0],max=a[0],min=a[0];
  for(int i=1;i<=n-1;i++){
	  cin>>a[i];
	  sum+=a[i];
	  if(a[i]>max)
		  max=a[i];
	  if(a[i]<min)
		  min=a[i];
  }
  cout<<min<<" "<<max<<" "<<sum<<endl;
  return 0;
}