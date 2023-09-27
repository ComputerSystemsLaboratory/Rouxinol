#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



using namespace std;
int n;
int p;
int member[50];
void solve(){
  int stone = p;
  long i = 0;
  while(true){
    //cout << "tarn" << i << "stone,0,1,2 ="<< stone <<"," <<member[0] << ","<< member[1]<< "," <<member[2] <<endl;

    if(stone == 1 && member[i%n] == p-1){
      cout << i%n << endl;
      member[i%n] = 0;
      break;
    }else if(stone > 0){
      member[i%n] ++;
      stone --;
      i++;
    }else{
      stone += member[i%n] ;
      member[i%n] = 0;
      i++;
    }
  }
}

int main(){

  while(true){
    cin >> n >> p;
    if(n == 0 && p == 0) break;
    solve();
  }

  return 0;
}

