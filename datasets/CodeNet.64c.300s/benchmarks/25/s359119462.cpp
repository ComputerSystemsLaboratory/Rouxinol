#include<iostream>
using namespace std;

int main(){

  int n, hit, blow, b[4];
  int a[10] = {0};

  while(cin >> b[0] >> b[1] >> b[2] >> b[3]){
    hit = 0;
    blow = 0;

    for(int i=1; i<=9; i++){
      a[i] = 0;
    }
    for(int i=1; i<=4; i++){
      a[b[i-1]] = i;
    }

    for(int i=1; i<=4; i++){
      cin >> n;
      if(a[n] == i) hit++;
      else if(a[n] != 0) blow++;
    }
    cout << hit << " " << blow << endl;    
  }

  return 0;

}