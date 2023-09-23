#include<iostream>
#include<cmath>
#include<iomanip>
#define ll long long int
using namespace std;

void solve();

int main() {

   solve();

   return 0;
}

void solve() {

   int a,b,c;

   cin >>a >>b >>c;

   if (a < b && b < c) {

      cout << "Yes" << endl;

   }
   else {

      cout << "No" << endl;

   }
}