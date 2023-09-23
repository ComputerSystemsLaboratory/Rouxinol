#include<iostream>

using namespace std;

int main() {
  int n;
  while(cin>>n && n!=0) {
    int pointA = 0, pointB = 0;
    int tmpA, tmpB;
    for(int i=0; i<n; i++) {
      cin>>tmpA>>tmpB;
      if(tmpA > tmpB) {
        pointA += tmpA+tmpB;
      }
      else if(tmpA < tmpB) {
        pointB += tmpA+tmpB;
      }
      else {
        pointA += tmpA;
        pointB += tmpB;
      }
    }
    cout<<pointA<<" "<<pointB<<endl;
  }
}