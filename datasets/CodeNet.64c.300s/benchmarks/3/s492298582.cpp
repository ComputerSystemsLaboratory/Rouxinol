#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x[n];
    for(int i = 0;i < n;i++){
      cin >> x[i];
      }
    cout << x[n - 1];
    for(int j = 1;j < n;j++){
      cout << " " << x[n - 1 - j];
      }
     cout << endl;
     return 0;
    }