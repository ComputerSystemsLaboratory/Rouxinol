#include<iostream>
using namespace std;

int main(){
  int cs, ts;

  cin >> cs;

  int *c = new int[cs + 1];

  for(int i = 0; i < cs; i++){
    cin >> c[i];
  }


  cin >> ts;
  int t , cnt = 0;

  for(int i = 0; i < ts; i++){
    cin >> t;
    c[cs] = t;
    int j = 0;
    while(t != c[j]){
      j++;
      if(j == cs){
        cnt--;
      }
    }
    cnt++;
  }

  cout << cnt << endl;
  return 0;
}
