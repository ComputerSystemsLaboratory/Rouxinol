#include<iostream>
using namespace std;

int main(){

  int a[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
  int n,m,d;

  while(cin >> n >> m, n, m){

    d = 0;

    for(int i=0;i<n-1;i++) d = a[i] + d;
 
    d = d + m;

    while(d > 6) d -= 7;
   
    if(d == 5) cout << "Monday" << endl;
    else if(d == 6) cout << "Tuesday" << endl;
    else if(d == 0) cout << "Wednesday" << endl;
    else if(d == 1) cout << "Thursday" << endl;
    else if(d == 2) cout << "Friday" << endl;
    else if(d == 3) cout << "Saturday" << endl;
    else if(d == 4) cout << "Sunday" << endl;

  }
}