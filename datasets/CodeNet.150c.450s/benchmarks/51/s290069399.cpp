#include <iostream>
using namespace std;
int main(){
  int s[30],b;

  for(int i = 0 ; i < 30 ; i++ )s[i] = 1;
  for(int i = 0 ; i < 28 ; i++ ){
    cin >> b;
    s[b-1] = 0;
}
  for(int i = 0 ; i < 30 ; i++ ){

       if(s[i] == 1)cout << i+1 << endl;
}

}