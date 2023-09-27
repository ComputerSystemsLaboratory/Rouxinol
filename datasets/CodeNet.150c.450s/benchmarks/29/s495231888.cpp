#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdio>
#include <queue>
using namespace std;

class Doublylist{
public:
  Doublylist(int size) : 
  front(0), back(0){
    allocate_array = new int[size];
  }
  ~Doublylist(){
    delete[] allocate_array;
  }
  void delite(int val);
  void print();
  void insert(int val){
    allocate_array[front++] = val;
  }
  void delite_first(){
    front--;
  }
  void delite_last(){
    back++;
  }

private:
  int front, back;
  int *allocate_array;
};

void Doublylist::delite(int val){
  for(int i=front-1;i>=back;i--){
    if(val == allocate_array[i]){
      for(int j=i;j<front;j++){
        allocate_array[j] = allocate_array[j+1];
      }
      front--;
      return;
    }
  }
}

void Doublylist::print(){
  for(int i=front-1;i>=back;i--){
    cout << allocate_array[i];
    if(i == back) cout << "\n";
    else cout << " ";
  }
}

int main(void){
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  Doublylist li(n);
  for(int i=0;i<n;i++){
    string str;
    int val;
    cin >> str;

    if(str == "insert"){
      cin >> val;
      li.insert(val);
    }else if(str == "delete"){
      cin >> val;
      li.delite(val);
    }else if(str == "deleteFirst"){
      li.delite_first();
    }else if(str == "deleteLast"){
      li.delite_last();
    }
  }

  li.print();
  return 0;
}