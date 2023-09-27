#include<iostream>
using namespace std;


int main(){

  int n;
  int a[100];
  int tmp;
  int sum=0;
  bool flg=true;

  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];

  while(flg){
    flg = 0;
    for(int j=n-1; j>0; j--){
      if(a[j] < a[j-1]){
	tmp = a[j];
	a[j] = a[j-1];
	a[j-1]=tmp;

	sum ++;
	flg = true;
      }
    }
  }

  cout << a[0];
  for(int i=1; i<n; i++)
    cout << ' ' << a[i];

  cout << endl << sum << endl;

  return 0;
}