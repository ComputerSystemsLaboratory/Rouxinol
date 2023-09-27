#include <iostream>
using namespace std;

int main(){
  int n, t, i, dr;

  cin>>n;
  int r[n];
  for (t = 0; t < n; t++) {
    cin>>r[t];
  }

  int mx = r[1] - r[0];
  int mx_el = 0;
  int min_el;


  for(t = n-1; t > 1; t--){
    if(r[t] > mx_el){
      mx_el = r[t];
      min_el = r[0];
      for(i = 0; (i < t); i++){
        if(r[i] <= min_el){
          min_el = r[i];
          dr = r[t] - r[i];
          if(dr > mx) mx = dr;
        }
      }
    }
  }

  cout<<mx<<endl;
}