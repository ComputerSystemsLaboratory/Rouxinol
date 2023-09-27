#include <iostream>
#include <vector>
#define SIZE 1000039
using namespace std;

string hashTable[SIZE];

int hashValue(string str){
  int res = 0;
  int v = 1;
  for(int i = 0; i < str.length(); i++){
    res += v * (str[i] - '0');
    v *= 7;
  }
  return res;
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  for(int i = 0; i < SIZE; i++) hashTable[i] = "";

  int n; cin >> n;
  while(n--){
    string query, str;
    cin >> query >> str;
    if(query == "insert"){
      int hash = hashValue(str);
      int place = hash % SIZE;
      int v = 1;
      while(hashTable[place] != ""){
        place = (hash % SIZE + v * (1 + hash % (SIZE-1))) % SIZE;
        v++;
      }
      hashTable[place] = str;
    }
    if(query == "find"){
      int hash = hashValue(str);
      int place = hash % SIZE;
      int v = 1;
      bool yes = true;
      while(hashTable[place] != str){
        if(hashTable[place] == ""){
          yes = false; break;
        }
        place = (hash % SIZE + v * (1 + hash % (SIZE-1))) % SIZE;
        v++;
      }
      if(yes) cout << "yes" << endl;
      else cout << "no" << endl;
    }
  }
  return 0;
}