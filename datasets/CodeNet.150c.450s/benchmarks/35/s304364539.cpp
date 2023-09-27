#include <iostream>
using namespace std;


int main(){
  int a[50000];
  int d; // d[i] : a[i]ツ暗按降ツづ勲SS ツづ個催妥・ツ値
  int n;

  while( cin>>n && n ){
    for( int i=0;i<n;cin>>a[i++] );

    int mx = a[0];
    for( int i=0;i<n;i++ ){
      int sum =a[i];
      d=sum;
      for( int j=i+1;j<n;j++ ){
	sum+=a[j];
	d = max( d,sum );
      }
      mx = max( mx,d );
    }
    cout << mx << endl;
  }

  return 0;
}