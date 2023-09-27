#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  
  vector<string> vec(N);
  
  for (int i = 0; i < N; i++){
    cin >> vec.at(i);
  }
  
  int a = 0, b = 0, c = 0, d = 0;
  
  for(int i = 0; i < N; i++){
    if(vec.at(i) == "AC"){
      a++;
    }
    if(vec.at(i) == "WA"){
      b++;
    }
    if(vec.at(i) == "TLE"){
      c++;
    }
    if(vec.at(i) == "RE"){
      d++;
    }
  }
    cout << "AC x "<< a << endl;
    cout << "WA x "<< b << endl;
    cout << "TLE x "<< c << endl;
    cout << "RE x "<< d << endl;
  
}