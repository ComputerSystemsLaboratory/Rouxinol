#include<iostream>
using namespace std;

int main(){
  int height[10];
  for(int i=0;i<10; i++){
    cin >> height[i];
  }
  for(int j=0;j<3;j++){
  int max=height[0];
  int number = 0;
    for(int i=0;i<10; i++){
      if(max < height[i]){
        max = height[i];
        number = i;
      }
    }
    cout << max << endl;
    height[number] = 0;
  }
}