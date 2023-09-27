#include<iostream>
#include<string>
using namespace std;

int main(){
  string taro,hanako;
  int p_taro = 0, p_hanako = 0;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++){
    cin >> taro >> hanako;

    if ( taro > hanako ){
      p_taro += 3;
    }
    else if ( taro == hanako ){
      p_taro += 1;
      p_hanako += 1;
    }
    else {
      p_hanako += 3;
    }
  }
  cout << p_taro << " " << p_hanako << endl;

  return 0;
}