#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(void){
  vector<int> data(10);
  for(int i=0;i<10;i++){
    cin >> data[i];
  }

  sort(data.begin(),data.end());
  for(int i=9;i>=7;i--){
    cout << data[i] << endl;
  }
  return 0;
}

