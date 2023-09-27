#include<iostream>
#include<cmath>
#include<iomanip>
#include<vector>
#include<string>

using namespace std;

class Dice {
public:
  int a[6];
  Dice(){
    for(int i = 0; i < 6; i++)
      cin >> a[i];
  }
  void Roll(string s){
    int temp;

    for(string::size_type i = 0; i < s.length(); i++){
      if(s[i] == 'E'){
        temp = a[3];
        a[3] = a[5];
        a[5] = a[2];
        a[2] = a[0];
        a[0] = temp;
      }else if(s[i] == 'W'){
        temp = a[2];
        a[2] = a[5];
        a[5] = a[3];
        a[3] = a[0];
        a[0] = temp;
      }
      else if(s[i] == 'S'){
        temp = a[4];
        a[4] = a[5];
        a[5] = a[1];
        a[1] = a[0];
        a[0] = temp;
        // printCurrent();
      }else if(s[i] == 'N'){
        temp = a[1];
        a[1] = a[5];
        a[5] = a[4];
        a[4] = a[0];
        a[0] = temp;
      }
    } 
  }
  int serchNum(int n){
    int i;
    for(i = 0 ; i < 6;i++){
      if(n == a[i]) break;
    }
    return i;
  }
  void set0(int n){
    int index = serchNum(n);
    if(index == 0) return;
    else if(index == 1){
      // index == 1を上面にする
      Roll("N");
    }
    else if(index == 2){
      // index == 2を上面にする
      Roll("W");
    }
    else if(index == 3){
      // index == 3を上面にする
      Roll("E");
    }
    else if(index == 4){
      // index == 4を上面にする
      Roll("S");
    }
    else if(index == 5){
      // index == 5を上面にする
      Roll("WW");
    }
  }
  void printCurrent(){
    cout << "現在の状態" << endl;
    for(int i = 0; i < 6; i++)
      cout << a[i] << endl;
    cout << endl;
  }
  int getRightNumber(int n){
    if(n == a[1]){
      return a[2];
    }else if(n == a[2]){
      return a[4];
    }
    else if(n == a[4]){
      return a[3];
    }
    else if(n == a[3]){
      return a[1];
    }
    return -1;
  }
};

int main(){
  Dice dice1;
  string s;
  int q, n, rightNumber;
  vector<int> ans;
  cin >> q;
  for(int i = 0; i < q; i++){
    // 上面の数字
    cin >> n;
    dice1.set0(n);
    // 前面の数字
    cin >> n;
    rightNumber = dice1.getRightNumber(n);
    if(rightNumber == -1){
      cout << "error" << endl;
      continue;
    }
    ans.push_back(rightNumber);
  }
  for(vector<int>::size_type i = 0; i < ans.size(); i++){
    cout << ans[i] << endl;
  }
}
