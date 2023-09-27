#include <iostream>
using namespace std;
int main(){
  int n;
  char henkan[1000];
  char ch,t_ch;
  while( cin >> n,n){
    for(int i = 0 ; i < 1000 ; i++ )henkan[i] = '\0';
  while(n--){
    cin >> ch >> t_ch;
    henkan[ ch ] = t_ch; 
  }
  cin >> n;
  while(n--){
    cin >> ch;
    if(henkan[ ch ] != '\0'){
      cout << henkan[ ch ]; 
    }else cout << ch;
  }
  cout << endl;
  }
}