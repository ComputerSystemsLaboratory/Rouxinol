#include<iostream>
using namespace std;

int table [ 1000000 ] = { 0 };
int isprime(int x) {
  return table[x-1];
}


int main() {

  int a,d,n;
  for(int i=2; i<1000000; i++) {
    if(table[i-1] == 0) {
      for(int j=2; i*j<1000000; j++)
	table[i*j-1] = 1;
    }
  }
  table[0] = 1;

  while(true) {

    cin>>a>>d>>n;
    if( a==0 && d==0 && n==0 ) break;
    int count = 0, i = 0;
    while(true) {
      if( isprime(a+i*d) == 0 )
	count++;
      if( n==count ) {
	cout<<(a+i*d)<<endl;
	break;
      }

      i++;
    }

  }

}