#include<iostream>
#include<algorithm>

using namespace std;

int main(){
  int i, j, data[28];

  for(i=0; i<28; ++i)
    cin >> data[i];

  sort(data, data+28);

  for(i=1, j=0; i<=30; ++i, ++j){
    if(data[j] != i){
      cout << i << endl;
      --j;
    }
  }

  return 0;
}