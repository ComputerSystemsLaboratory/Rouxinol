//What day is today?
#include<bits/stdc++.h>
using namespace std;

int md[12]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
  int m, d;
  while(cin >> m >> d){
    int sumd=0;
    if(m==0)break;
    for(int i=0; i<m-1; i++){
      sumd+=md[i];
    }
    sumd+=d;
    switch(sumd%7){
    case 1 : cout << "Thursday" << endl; break;
    case 2 : cout << "Friday" << endl; break;
    case 3 : cout << "Saturday" << endl; break;
    case 4 : cout << "Sunday" << endl; break;
    case 5 : cout << "Monday" << endl; break;
    case 6 : cout << "Tuesday" << endl; break;
    case 0 : cout << "Wednesday" << endl; break;
    }
  }
  return 0;
}