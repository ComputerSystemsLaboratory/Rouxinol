#include<iostream>
using namespace std;

void Output(int a[],int n){

  cout << a[0];
  for(int i=1; i<n; i++)
    cout << ' ' << a[i];

  cout << endl;

}

int main(){

  int a[100];
  int n;
  int v;
  int j;

  cin >> n;
  for(int i=0; i<n; i++)
    cin >> a[i];


  for(int i=1; i<n; i++){

    Output(a,n);

    v=a[i];
    j=i-1;
    while(j>=0 && a[j]>v){
      a[j+1] = a[j];
      j--;
    }
    a[j+1]=v;
  }

  Output(a,n);


  return 0;
}