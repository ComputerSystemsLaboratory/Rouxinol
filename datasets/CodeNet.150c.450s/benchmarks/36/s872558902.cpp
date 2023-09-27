#include <iostream>
#include <vector>

using namespace std;

int main(){
  const int x = 600;
  int d,area=0,height=0,width;
  vector<int> data;
  while(cin >> width){
    data.push_back(width);
  }

  for(int j=0; j<data.size(); j++){
    width = data[j];
    area=0;
    d = x/width;

    for(int i=0; i<d; i++){
      height = (width*i)*(width*i);
      area+=height*width;
    }
    cout << area << endl;
  }
  return 0;
}