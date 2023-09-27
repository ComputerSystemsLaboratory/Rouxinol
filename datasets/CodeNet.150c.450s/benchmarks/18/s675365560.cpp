#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main(){
  int n;
  cin>>n;
  double m = 100000;
  for(int i = 0; i < n; i++){
    m*=1.05;
    m/=1000;
    m=ceil(m);
    m*=1000;
   // cout<<i<<','<<m<<endl;
	//printf("%.0lf\n",m);  
}
  cout<<(int)m<<endl;
}

    