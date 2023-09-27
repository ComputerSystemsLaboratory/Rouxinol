#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  vector<int> array;
  int tmp;
  for(int i=0;i<5;i++){
    cin >> tmp;
    array.push_back(tmp);
  }

  sort(array.begin(), array.end(), std::greater<int>());

  for(int i=0;i<array.size();i++){
    cout << array[i] << ((i!=4)?' ':'\n');
  } 
}


  