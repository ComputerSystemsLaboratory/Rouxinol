#include<iostream>
#include<string>
using namespace std;

string days[7] = { "Wednesday", "Thursday", "Friday", "Saturday",
                   "Sunday", "Monday", "Tuesday" };

int md[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {

  int m,d;
  while(true) {
    cin>>m>>d;
    if(!m&&!d) break;

    int res=0;
    for(int i=0; i<m-1; i++)
      res += md[i];

    res += d;

    cout<<days[res%7]<<endl;
  }
}