#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<char> > data;

string parse(string msg){
  string res = "";
  int state = 0;
  int time = 0;
  for(auto c : msg){
    if(c == '0'){
      if(time == 0) continue;

      if(time % data[state-1].size() == 0){
        res += data[state-1][data[state-1].size() - 1];
      }else{
        res += data[state-1][time % data[state-1].size() - 1];
      }
      time = 0;
    }else{
      int num = c - '0';
      if(state != num){
        state = num;
        time = 1;
      }else{
        time++;
      }
    }
  }
  return res;
}

void init(){
  data.push_back({'.',',','!','?',' '});
  data.push_back({'a','b','c'});
  data.push_back({'d','e','f'});
  data.push_back({'g','h','i'});
  data.push_back({'j','k','l'});
  data.push_back({'m','n','o'});
  data.push_back({'p','q','r','s'});
  data.push_back({'t','u','v'});
  data.push_back({'w','x','y','z'});
}

int main(){
  int n;
  string msg;
  init();
  cin >> n;
  for(int i=0;i<n;i++){
    cin>> msg;
    cout << parse( msg ) << endl;
  }
  return 0;
}