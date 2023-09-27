#include <iostream>
using namespace std;
int main() {
  char str[1000];
  int count;
  cin >> str >> count;
  for(int d = 0;d < count;d++){
    char prc[8];
    cin >> prc;
    if(prc[2] == 'p'){
      int a,b;
      char rep[100];
      cin >> a >> b >> rep;
      for(int c = 0;c<b-a+1;c++)str[c+a] = rep[c];
    }
    else if(prc[2] == 'v'){
      int a,b;
      char temp[1000];
      cin >> a >> b;
      for(int c = 0;c<b-a+1;c++)temp[c] = str[c+a];
      for(int c = 0;c<b-a+1;c++)str[c+a] = temp[b-a-c];
    }
    else{
      int a,b;
      cin >> a >> b;
      for(int c = a;c<=b;c++)cout << str[c];
      cout << endl;
    }
  }
  return 0;
}
