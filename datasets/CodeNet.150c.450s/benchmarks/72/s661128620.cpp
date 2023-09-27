#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int j=0;
  for(;;){
    string n = "";
    cin >> n;
	if (n == "") break;
    string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string o = "";
	if (j) cout << " "; 
    for (int i=0; i<n.size(); i++){
      if (a.find(n[i]) != -1) {
        o += b[a.find(n[i])];
      } else {
        o += n[i];
      }
    }
	 cout << o;
	 j++;
  }
  cout << endl;
}