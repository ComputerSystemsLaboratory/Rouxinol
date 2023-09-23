#include<iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int money = 100000;
  for(int i=0;i<n;i++){
    money += (int)(money * 0.05);
    int cp = money;
    while(cp - 1000 >= 0){
      cp -= 1000;
    }
    money -= cp;
    if(cp != 0){
      money+=1000;
    }
  }
  cout << money << endl;;
}