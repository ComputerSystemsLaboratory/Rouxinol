#include<iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){

  int m,f,r;


  while(true){

    cin >> m>>f>>r;
    if(m==-1&&f==-1&&r==-1) break;
    int sum = m+f;

    if(m==-1 || f==-1) cout << "F";
    else if(sum >= 80) cout << "A";
    else if(sum >= 65) cout << "B";
    else if(sum >= 50) cout << "C";
    else if(sum >= 30){
      if(r >= 50) cout << "C";
      else cout << "D";
    }
    else cout << "F";
    cout << endl;


  }
}


