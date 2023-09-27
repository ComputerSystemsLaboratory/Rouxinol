#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Dice{
// front right back left bottom top
private:
  int right_index[6][6] = {
    {-1, 5, -1, 4, 1, 3},
    {4, -1, 5, -1, 2, 0},
    {-1, 4, -1, 5, 3, 1},
    {5, -1, 4, -1, 0, 2},
    {3, 0, 1, 2, -1, -1},
    {1, 2, 3, 0, -1, -1}
  };

public: 
  vector<int> data;
  Dice(): data(6,0){}
  Dice(vector<int> input){
    data.resize(6);
    for(int i=0; i<6; i++)
      data[(i+5)%6] = input[i];
    swap(data[2],data[3]);
  } 

  void roll(int dir){
    int tmp = data[5];
    data[5] = data[dir];
    data[dir] = data[4];
    data[4] = data[(dir+2)%4];
    data[(dir+2)%4] = tmp;
  }

  int find_index(int n){
    return find(data.begin(), data.end(), n)-data.begin();
  }

  int right_from(int t, int f){
    int r = right_index[find_index(t)][find_index(f)];
    return r!=-1? data[r]: -1;
  }

};


int main(){
  vector<int> input(6);
  for(int i=0; i<6; i++){
    cin >> input[i];
  }
  Dice dice(input);

  // for(int i=0; i<6; i++){
  //   cout <<  dice.data[i] << " ";
  // }
  // cout << endl;

  string roll_d = "SENW";

  int n; cin >> n;
  for(int i=0; i<n; i++){
    int top, front; cin >> top >> front;
    //cout << top << " " << front << endl;
    //cout << dice.find_index(top) << endl;
    int right = dice.right_from(top, front);
    if(right!=-1)
      cout << right << endl;
  }

  return 0;
}