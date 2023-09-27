#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
  int num;
  cin >> num;
  for(int i= 0; i<num ; i++){
    float x[4];
    float y[4];
    cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3];
    float AB=0;
    float CD=0;
    AB =(y[1]-y[0]) / (x[1]-x[0]);
    CD =(y[3]-y[2]) / (x[3]-x[2]);
    if(CD == -0)CD = 0;
    if(AB == -0)AB = 0;
    if(AB == CD)cout << "YES" << endl;
    else cout << "NO" << endl;
  }
  return 0;
}