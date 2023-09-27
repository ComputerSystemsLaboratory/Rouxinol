#include<cstdio>
#include<iostream>
using namespace std;
char grade(int m, int f, int r) {
 if (m == -1 || f == -1 ){
  return 'F';
 }
 if (m + f >= 80) {
 return 'A';
 }
 if (m +f >= 65 ) {
  return 'B';
 }
 if (m + f  >= 50 ) {
  return 'C'; 
}
 if(m + f >= 30 && r >= 50) return 'C';
 if(m + f >= 30) return 'D';
  return 'F';
}

int main() {
 int m, f, r;
 while(cin >> m >> f >> r, m + f + r != -3) {
  cout << grade(m, f, r) << endl;
 }
}