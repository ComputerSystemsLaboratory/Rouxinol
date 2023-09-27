#include<iostream>

using namespace std;

int main(){

  int n, win, p;
  while(cin >> n >> win >> p){
    if(n == 0 && win == 0 && p == 0) break;
    double money = 0;
    int data[n];

    for(int i = 0; i < n; i++){
      cin >> data[i];
      money += data[i];
    }
    money *= (100-p);

    if(data[win-1] == 0){
      cout << "0" << endl;
    }else{
      cout <<  (int)money/ data[win-1]<< endl;
    }
  }

  return 0;
}