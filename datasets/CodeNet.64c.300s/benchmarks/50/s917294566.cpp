#include<iostream>
using namespace std;

int main()
{
  int i,j,n,swap,count=0;
  int a[100];

  cin >> n;

  for (j=0;j<n;j++){
      cin >> a[j];
  }

  for (i=0;i<n;i++){
    for (j=n-1;j>0;j--){
      if (a[j]<a[j-1]){
	swap=a[j];a[j]=a[j-1];a[j-1]=swap;
	count++;
      }
    }
  }

  for (j=0;j<n;j++){
    cout << a[j];
    if (j<n-1){
      cout << " ";
    }
  }

  cout << endl << count << endl;

  return 0;

}