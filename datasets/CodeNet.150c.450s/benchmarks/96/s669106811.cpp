#include <iostream>
#define REP(i, n) for(int (i) = 0; (i) < (n); (i)++)

using namespace std;

int main()
{
  char keitai[10][6] = {{'*', '*', '*', '*', '*', '*'},
                        {'.', ',', '!', '?', ' ', '*'},
                        {'a', 'b', 'c', '*', '*', '*'},
                        {'d', 'e', 'f', '*', '*', '*'},
                        {'g', 'h', 'i', '*', '*', '*'},
                        {'j', 'k', 'l', '*', '*', '*'},
                        {'m', 'n', 'o', '*', '*', '*'},
                        {'p', 'q', 'r', 's', '*', '*'},
                        {'t', 'u', 'v', '*', '*', '*'},
                        {'w', 'x', 'y', 'z', '*', '*'},
  };
  string s;
  int x , c;
  char p;
  int n;
  cin >> n;
  cin.ignore();
  REP(k, n){
    getline(cin, s);
    x = c = 0;
    p = '\0';
    REP(i, s.size()){
      int j;
      j = s[i] - '0';
      if(j){
        if(x == j){
          if(keitai[j][c + 1] == '*'){
            c = 0;
            p = keitai[j][c];
          }else{
            c++;
            p = keitai[j][c];
          }
        }else{
          c = 0;
          p = keitai[j][c];
        }
      }else{
        if(p != '\0')
          cout << p;
        p = '\0';
      }
      x = j;
    }
    cout << endl;
  }
}