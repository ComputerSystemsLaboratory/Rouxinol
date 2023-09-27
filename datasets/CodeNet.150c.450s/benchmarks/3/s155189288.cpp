#include<iostream>
#include<string>
using namespace std;
int main() {
  string str;
  cin >> str;
  int n;
  cin >> n;
  for(int i = 0 ; i < n ; i++ ){
    string op;
    cin >> op;

    if(op == "replace") {

        int a, b;
        string repstr;
        cin >> a >> b >> repstr;
        auto it = str.begin() + a;
        for (int j = 0; j <= b-a; j++){
          *it++ = repstr[j];
        }

    } else if (op == "reverse") {

        int a, b;
        cin >> a >> b;
        string str2 = str;
        auto it = str.begin() + a;
        auto it2 = str2.begin() + b;
        for (int j = 0; j <= b-a; j ++) {
          *it++ = *it2--;
        }


    } else if (op == "print") {
        int a, b;
        cin >> a >> b;
        auto it = str.begin() + a;
        for (int j = 0; j <= b-a; j++){
          cout <<  *it++;
        }
        cout << endl;

    }
  }

}