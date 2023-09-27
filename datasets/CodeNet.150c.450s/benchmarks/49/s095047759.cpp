#include <iostream>
using namespace std;
int main(){
  int a[2020];
  int x,i = 0;
  while (cin >> x){
    a[i++] = x;
  }
  void saiten(int* a,int b);
  saiten(a,0);
}
void saiten(int* a,int j){
  int max = 0, min = 1000, ave = 0; 
  if (a[j] != 0){
    for (int k = j+1; k <= j+a[j]; k++){
      if (max < a[k])
	max = a[k];
      if (min > a[k])
	min = a[k];
      ave += a[k];
    }
    ave = (ave - max - min)/(a[j]-2);
    cout << ave << endl;
    saiten(a, j+a[j]+1);
  }
}