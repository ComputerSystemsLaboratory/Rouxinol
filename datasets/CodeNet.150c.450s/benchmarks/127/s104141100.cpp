#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main(){
  int number;
  string train;
  cin >> number;
  while(cin >> train){
    set<string> type;
    string front, back;
    int size = train.size();
    for (int i = 0; i < size-1; i++){
      front = train.substr(0, i+1);
      back = train.substr(i+1, size-1-i);
      type.insert(front + back);
      type.insert(back + front);
      reverse(front.begin(), front.end());
      type.insert(front + back);
      type.insert(back + front);
      reverse(back.begin(), back.end());
      type.insert(front + back);
      type.insert(back + front);
      reverse(front.begin(), front.end());
      type.insert(front + back);
      type.insert(back + front);
    }
    cout << type.size() << endl;
  }
}