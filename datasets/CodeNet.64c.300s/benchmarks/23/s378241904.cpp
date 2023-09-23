#include<iostream>
using namespace std;

int main(){

  int height, breadth, length, area;

  cin >> height >> breadth;

  length = (height + breadth) * 2;

  area = height * breadth;

  cout << area << " " << length << endl;

  return 0;


}

