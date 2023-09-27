#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int nextA(int a, int l){
  int d[l];
  for( int i=0;i<l;i++ ){
    d[i] = a%10;
    a /= 10;
  }
  sort(d,d+l);
  int min=0,max=0;
  for( int i=0,b=1;i<l;i++, b*=10 ){
    min += b * d[l-i-1];
    max += b * d[i];
  }
  return max - min;
}

int main(){
  int a,l;

  while( cin>> a>> l,l){
    vector<int> v;
    int k=0;
    v.push_back(a);
    bool f=true;
    while( f ){
      a = nextA(a, l);
      for( int i=0;i<(int)v.size();i++ ){
	if( v[i] == a ){
	  cout << i << " " << a << " " << (k-i+1) << endl;
	  f=false;
	  break;
	}
      }
      if( f )
	v.push_back(a);
      k++;

    }
  }
  return 0;
}