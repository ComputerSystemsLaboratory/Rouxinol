#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void sort(int *height, int num){
  int max=0;
  int tmpi;
  for(int i=0;i<num;i++){
    if(max<height[i]){
      max = height[i];
      tmpi = i;
    }
  }

  //  cout << "max: " << max << endl;
  
  //i??¨num?????????
  int tmp = height[num-1];
  height[num-1] = height[tmpi];
  height[tmpi] = tmp;
}

int main(){
  int height[10];
  for(int i=0;i<10;i++){
    cin >> height[i];
  }

  sort(height, 10);
  sort(height, 9);
  sort(height, 8);

  //  cout << endl;
  
  for(int i=9;i>6;i--){
    cout << height[i] << endl;
  }


  
}