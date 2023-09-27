#include<cstdio>
#include<algorithm>
#include<string>
#include<set>
#include<iostream>
#include<vector>
#include <map>
#include <utility>
#include <cmath>
#include<cstdlib>
#include<sstream>

using namespace std;

int main(){
  int n,count,i=1,sum;
  while(true){
    cin >> n;
    if (!n)
      break;
    int i=1;
    int j=0;
    sum = 1;
    count = 0;
    while(true){
      for(;sum<n;i++,sum+=i);
      if (i==n)
	break;
      while(sum>n){
	j++;
	sum-=j;
      }
      if (n == sum){
	count++;
	j++;
	sum-=j;
      }
    }
    cout << count << endl;
  }
  return 0;
}