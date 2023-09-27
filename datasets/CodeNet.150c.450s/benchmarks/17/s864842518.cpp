#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
 int n[5];
 cin >> n[0] >> n[1] >> n[2] >> n[3] >> n[4];
 for (int i=4;i>=1;i--) for (int j=0;j<i;j++) if (n[j]<n[j+1]) swap(n[j],n[j+1]);
 cout << n[0] << " " << n[1] << " " << n[2] << " " << n[3] << " " << n[4] << endl;
 return 0;
}