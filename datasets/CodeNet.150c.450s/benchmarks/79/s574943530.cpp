#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int card[50];
struct CUT{
  int p;
  int c;
};

CUT cut[51];
int swap_p[50];
int swap_c[50];
int n,r;
void solve(){
  for(int i = 0; i < n; i++){
    card[i] = n - i;
  }

  for(int i = 0; i < r ; i++){
   /* for(int x = 0; x < n; x++){
      cout << card[x] << " ";
    }
    cout << endl;
    */
    for(int j = 0; j < cut[i].p; j++) swap_p[j] = card[j];
    for(int k = 0; k < cut[i].c; k++) swap_c[k] = card[cut[i].p + k - 1];
    for(int l = 0; l < cut[i].p + cut[i].c - 1;l++){
      if(cut[i].c > l)  card[l] = swap_c[l] ;
      else              card[l] = swap_p[ l - cut[i].c ];
    }
  }
  cout << card[0] << endl;
  return ;
}



int main(){
  while(true){
    cin >> n >> r;
    if(n == 0 && r == 0) break;
    for(int input = 0; input < r; input++){
      cin >> cut[input].p >> cut[input].c ;
    }
    solve();
  }
  return 0;
}

