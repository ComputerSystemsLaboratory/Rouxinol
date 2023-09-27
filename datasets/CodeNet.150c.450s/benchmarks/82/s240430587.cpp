#include <iostream>
#include <vector>
#include <map>
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
    if(s == "C"){
      swap(d[1],d[3]);
      swap(d[2],d[3]);
      swap(d[4],d[3]);
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

  map<pair<int,int>,int > cashe; // ????????? --> ???
  
  string s = "CCCCECCCCECCCCECCCCSCCCCSSCCCC";
  for(int i=0; i<s.size(); i++){
    cashe[make_pair(saikoro.d[0],saikoro.d[1])] = saikoro.d[2];
    //    cout <<saikoro.d[0] << " "  << saikoro.d[1] << " " <<  saikoro.d[2] << endl;
    saikoro.spin(s.substr(i,1));
  }  
  int q; cin >> q;
  for(int i=0; i<q; i++){
    int a,b; cin >> a >> b;
    cout << cashe[make_pair(a,b)] << "\n";
  }

}