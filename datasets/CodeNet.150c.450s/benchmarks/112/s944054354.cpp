#include<iostream>
using namespace std;
char map[256];
int main(){
  while(true){
    for(int i = 0;i < 256;i++){
      map[i] = i;
    }
    int n;
    
    cin >> n;
    if(n==0)break;
    for(int i = 0; i < n;i ++){
      char c,d;
      cin >> c >> d;
      map[c] = d;
    }

    cin >> n;
    
    for(int i = 0;i < n;i++){
      char c;
      cin >> c;
      cout << map[c];
    }
    cout << endl;
  }
}