#include<iostream>
using namespace std;

inline void swap(int *a,int *b){
  int *tmp;
  tmp = a;
  a = b;
  b = tmp;
}

int main()
{
  int i,j,max;
  int a[5];

  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4]){
    for(i=0;i<4;i++){
      max = i;
      for(j=i+1;j<5;j++){
	if(a[max]<a[j])max = j;
      }
      swap(a[i],a[max]);
    }
    for(i=0;i<4;i++)cout << a[i] << " ";
    cout << a[4] << endl;
  }

  return 0;
}