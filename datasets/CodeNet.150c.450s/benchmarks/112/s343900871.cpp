#include <iostream>
#include <map>
using namespace std;

int main(int argc, char* argv[]) {
  int n;
  char a, b;
  cin >> n;
  while(n != 0){
    map<char, char> m;

    for(int i=0 ; i<n ; i++){
      cin >> a >> b;
      m.insert(pair<char, char>(a, b));
    }

    cin >> n;
    for(int i=0 ; i<n ; i++){
      cin >> a;
      if(m.find(a) == m.end()){
        cout << a;
      }else{
        cout << m[a];
      }
    }
    cout << endl;

    cin >> n;
  }

  return 0;
}