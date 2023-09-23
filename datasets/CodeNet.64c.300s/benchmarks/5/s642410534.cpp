#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
  int a[10];
  for(int i=0; i<10; i++ )
  cin >> a[i] ;
  sort(a,a+10,greater<int>());
  for(int i=0; i<3; i++ )
  cout << a[i]<<endl;
return 0;
}

