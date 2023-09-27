#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string str, order, re;
char tmp;
int q, a, b;

int main(){
  cin >> str >> q;
  for(int i = 0; i < q; i++){
    cin >> order >> a >> b;
    if(order == "print"){
      for(int j = a; j <= b; j++){
        cout << str[j];
      }
      cout << endl;
    }else if(order == "reverse"){
      reverse(str.begin()+a, str.begin()+b+1);
    }else if(order == "replace"){
      cin >> re;
      str.replace(a, b - a + 1, re);
    }
  }
}