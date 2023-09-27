#include<iostream>
using namespace std;

int main(){
  while(true){
    int njudge = 0;
    cin >> njudge;
    if(njudge == 0)return 0;
    int max=0;
    int min=10000;
    int ave=0;
    int sum=0;
    for(int i = 0 ; i<njudge ; i++){
      int input;
      cin >> input;
      if(max < input)max = input;
      if(min > input)min = input;
      sum += input;
    }
    sum -= min;
    sum -= max;
    njudge -= 2;
    ave = sum/njudge;
    cout << ave << endl;
  }
  return 0;
}