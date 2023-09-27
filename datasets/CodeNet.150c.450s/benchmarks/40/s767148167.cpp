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

  void Ans(){
    cout << dice_[0] << endl;
  }

  vector<int> dice_;
  vector<int> east_;
  vector<int> north_;
  vector<int> south_;
  vector<int> west_;
};

int main(){
  vector<int> a(6);
  string str;
  while(cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> str){
    Dice dice(a);
    for(int i=0; i<str.length(); i++){
      if(str[i] == 'E')
	dice.East();
      else if(str[i] == 'N')
	dice.North();
      else if(str[i] == 'W')
	dice.West();
      else
	dice.South();
    }
    dice.Ans();
  }
  return 0;
}