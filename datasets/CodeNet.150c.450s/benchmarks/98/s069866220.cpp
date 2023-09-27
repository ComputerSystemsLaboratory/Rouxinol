#include <iostream>
using namespace std;
int main () {
  int n;
  int m;
  cin >> n;
  cin >> m;
  while (n>0){
    int sn[n];
    int sm[m];
    int sumn = 0;
    int summ = 0;
    int min = 200;
    int x = 200;
    int y = 200;
    for (int i=0; i < n; i++){
      cin >> sn[i];
      sumn += sn[i];
    }
    for (int i=0; i < m; i++){
      cin >> sm[i];
      summ += sm[i];
    }
    for (int i=0; i < n; i++){
      for (int j=0; j < m; j++){
	int a = sumn - sn[i] + sm[j];
	int b = summ - sm[j] + sn[i];
	if (a==b && sn[i]+sm[j] < min){
	  min = sn[i]+sm[j];
	  x = i;
	  y = j;
	}
      }
    }
    if (x==200)
      cout << "-1" << endl;
    else{
      cout << sn[x] << " " << sm[y] << endl;
    }
    cin >> n;
    cin >> m;
  }
}