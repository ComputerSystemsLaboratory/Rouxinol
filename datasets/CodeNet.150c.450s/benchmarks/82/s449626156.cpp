#include <iostream> // cout, endl, cin
#include <iomanip>
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <math.h>
using namespace std;

struct Dice{
  vector<int> D;
  string dir;
  int roll(int a, int b){
    int top = D.at(0);
    int front = D.at(1);
    for(auto c : dir){
      if(c == 'N'){
        top = D.at(1);
        D.at(1) = D.at(5);
        D.at(5) = D.at(4);
        D.at(4) = D.at(0);
        D.at(0) = top;
      }
      else if(c == 'E'){
        top = D.at(3);
        D.at(3) = D.at(5);
        D.at(5) = D.at(2);
        D.at(2) = D.at(0);
        D.at(0) = top;
      }
      else if(c == 'W'){
        top = D.at(2);
        D.at(2) = D.at(5);
        D.at(5) = D.at(3);
        D.at(3) = D.at(0);
        D.at(0) = top;
      }
      else if(c == 'S'){
        top = D.at(4);
        D.at(4) = D.at(5);
        D.at(5) = D.at(1);
        D.at(1) = D.at(0);
        D.at(0) = top;
      }
      else if(c == 'L'){
        front = D.at(2);
        D.at(2) = D.at(4);
        D.at(4) = D.at(3);
        D.at(3) = D.at(1);
        D.at(1) = front;
      }
      else if(c == 'R'){
        front = D.at(3);
        D.at(3) = D.at(4);
        D.at(2) = D.at(1);
        D.at(4) = D.at(2);
        D.at(1) = front;
      }
      if(D.at(0) == a && D.at(1) == b) return D.at(2);
    }
    return 0;
  }
};

int main(){
  Dice x;
  for(int i = 0; i < 6; i++){
    int a;
    cin >> a;
    x.D.push_back(a);
  }
  int q;
  cin >> q;
  x.dir = "LLLLNLLLLSWLLLLEELLLLWSLLLLNNNLLLL";
  for(int i = 0; i < q; i++){
    int a, b, c;
    cin >> a >> b;
    c = x.roll(a, b);
    cout << c << endl;
  }
}
