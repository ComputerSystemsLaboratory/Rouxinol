#include <iostream>
using namespace std;
int main(){
 int n, m, a[100][100], b[100], x[100];
 int y = 0;
 cin >> n >> m;
 for(int h=0; h<n; h++){
  for(int i=0; i<m; i++){
   cin >> a[h][i];
  }
 }
 for(int j=0; j<m; j++){
  cin >> b[j];
 }
 for(int k=0; k<n; k++){
  for(int l=0; l<m; l++){
   if(l == 0)
    x[k] = a[k][l]*b[l];
   else
    x[k] += a[k][l]*b[l];
  }
 cout << x[k] << endl;
 }
 return 0;
}