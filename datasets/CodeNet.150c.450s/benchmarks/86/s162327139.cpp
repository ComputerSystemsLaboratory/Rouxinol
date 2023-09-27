#include<iostream>
#include<vector>

using namespace std;

int main() {
  int n, m, p;
  while(cin>>n>>m>>p && !(n==0 && m==0 && p==0)) {
    vector<int> personal;
    //double percentage = (double)p/100.0;
    int total = 0;
    for(int i=0; i<n; i++) {
      int tmp;
      cin>>tmp;
      personal.push_back(tmp);
      total += tmp;
    }
    //cout<<personal[m-1]<<"!";
    //double payBackD = total*(1.0-percentage);
    //int payBackI = (int)payBackD;
    if(personal[m-1] > 0) {
      cout<<(100-p)*total/personal[m-1]<<endl;
    }
    else {
      cout<<"0"<<endl;
    }
  }
}