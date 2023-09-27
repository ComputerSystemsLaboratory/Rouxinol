#include<iostream>
using namespace std;

int main(){

  int n,a[100];
  int min,tmp,sum=0;

  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];


  for(int i=0; i<n; i++){
    min = i;
    for(int j=i; j<n; j++){
      if(a[j] < a[min])
	min = j;
    }

    if(min!=i){
      tmp = a[i];
      a[i] = a[min];
      a[min] = tmp;
      sum++;
    }

  }
   
  cout << a[0];
  for(int i=1; i<n; i++)
    cout << ' ' <<a[i];

  cout << endl << sum << endl;


  return 0;
}