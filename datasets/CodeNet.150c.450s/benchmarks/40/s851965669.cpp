#include <iostream>
#include <vector>
using namespace std;

class Dice{
public:
  vector<int> d;
  void spin(string s){
    if(s == "S"){
      swap(d[0],d[4]);
      swap(d[4],d[1]);
      swap(d[4],d[5]);
    }
    if(s == "E"){
      swap(d[0],d[3]);
      swap(d[2],d[3]);
      swap(d[3],d[5]);
    }
    if(s == "N"){
      swap(d[0],d[1]);
      swap(d[1],d[5]);
      swap(d[4],d[5]);
    }
    if(s == "W"){
      swap(d[0],d[2]);
      swap(d[2],d[5]);
      swap(d[3],d[5]);
    }
  }
};


int main(){

  Dice saikoro;
  vector<int> in(6);
  for(int i=0; i<6; i++){
    cin >> in[i];
  }
  saikoro.d = in;
  /*
  for(int i=0; i<6; i++){
    cout << saikoro.d[i] << " ";
  }
  cout << "\n";
  */
  string s; cin >> s;
  for(int i=0; i<s.size(); i++){
    saikoro.spin(s.substr(i,1));
    /*
    for(int i=0; i<6; i++){
      cout << saikoro.d[i] << " ";
    }
    cout << "\n";
    */
  }
  cout << saikoro.d[0] << endl;

}