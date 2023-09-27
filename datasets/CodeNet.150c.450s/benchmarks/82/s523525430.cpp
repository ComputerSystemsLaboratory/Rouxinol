#include <iostream>
#include <vector>
using namespace std;

struct Dice{
  Dice(vector<int>& dice) : dice_(dice) {
    east_.push_back(4);    east_.push_back(2);
    east_.push_back(1);    east_.push_back(6);
    east_.push_back(5);    east_.push_back(3);
    north_.push_back(2);    north_.push_back(6);
    north_.push_back(3);    north_.push_back(4);
    north_.push_back(1);    north_.push_back(5);
    south_.push_back(5);    south_.push_back(1);
    south_.push_back(3);    south_.push_back(4);
    south_.push_back(6);    south_.push_back(2);
    west_.push_back(3);    west_.push_back(2);
    west_.push_back(6);    west_.push_back(1);
    west_.push_back(5);    west_.push_back(4);
  }

  void East(){
    vector<int> tmp(dice_);
    for(int i=0; i<6; i++)
      dice_[i] = tmp[east_[i]-1];
  }

  void North(){
    vector<int> tmp(dice_);
    for(int i=0; i<6; i++)
      dice_[i] = tmp[north_[i]-1];
  }

  void South(){
    vector<int> tmp(dice_);
    for(int i=0; i<6; i++)
      dice_[i] = tmp[south_[i]-1];
  }

  void West(){
    vector<int> tmp(dice_);
    for(int i=0; i<6; i++)
      dice_[i] = tmp[west_[i]-1];
  }

  void Ans(int x, int y){
    if(dice_[2]!=x && dice_[3]!=x){
      while(dice_[0] != x)
	North();
    }
    else{
      while(dice_[0] != x)
	East();
    }
    while(dice_[1] != y || dice_[0] != x){
      East();
      South();
      West();
    }
      cout << dice_[2] << endl;
  }

  vector<int> dice_;
  vector<int> east_;
  vector<int> north_;
  vector<int> south_;
  vector<int> west_;
};

int main(){
  vector<int> a(6);
  int q, x, y;
  cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> q;
  Dice dice(a);
  while(q--){
    cin >> x >> y;
    dice.Ans(x, y);
  }
  return 0;
}