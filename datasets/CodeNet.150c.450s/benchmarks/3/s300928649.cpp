#include<iostream>
#include<string>
using namespace std;

int main(){
  int a, b, q;
  string str, str1, str2, str3, g, p;

  cin >> str >> q;

  for( int i = 0; i < q; i++){
    cin >> g;
    if(g == "print"){
      cin >> a >> b;
      cout << str.substr(a, b - a + 1) << endl;
    } else if(g == "reverse"){
      cin >> a >> b;
      str1 = str.substr(a, b - a + 1);
      int n;
      n = str1.size();
      for( int j = 0; j < n; j++){
        str[j + a] = str1[n - 1 - j];
      }
      str.insert(a, str2);
    } else if(g == "replace"){
      cin >> a >> b >> p;
      str.erase(a, b - a + 1);
      str.insert(a, p);
    }
  }

  return 0;
}