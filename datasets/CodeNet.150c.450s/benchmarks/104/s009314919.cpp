#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

void exchange(vector<int> &array, int w, vector<vector <int> > n){

  for(int i=0;i<n.size();i++){
    int a = n[i][0]-1;
    int b = n[i][1]-1;
    //    cout << "a: " << a << ", b: " << b << endl;
    int tmp = array[a];
    array[a] = array[b];
    array[b] = tmp;
  }  
}
  

int main(){

  int w, n;
  cin >> w;
  cin >> n;

  vector<vector <int> > Yoko;
  Yoko.resize(n);
  
  for(int i=0;i<n;i++){
    Yoko[i].resize(2);
    int a, b;
    char c;
    cin >> a >> c >> b;
    Yoko[i][0] = a;
    Yoko[i][1] = b;
  }

  vector<int> array;
  for(int i=0;i<w;i++){
    array.push_back(i+1);
  }
  
  exchange(array, w, Yoko);

  for(int i=0;i<array.size();i++){
    cout << array[i] << endl;
  }
  return 0;
}