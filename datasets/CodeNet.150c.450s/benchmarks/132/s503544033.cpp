#include <iostream>

#include <vector>
using namespace std;
int main(){
  int n,p;
  for(;;){
    cin >>n >> p;
    if(n == 0 && p == 0)break;
    vector<int> human;
    for(int i = 0;i < n;i++){
      human.push_back(0);
    }
    int stone = p;
    int turn = 0;
    for(;;){
      if(!stone){
        stone += human[turn];
        human[turn] = 0;

      } else if(stone > 0){
        stone--;
        human[turn]++;
        if(!stone && human[turn] == p){
          cout << turn << endl;
          break;
        }
      }

      turn++;
      if(turn >= n) turn = 0;
    }

  }
}