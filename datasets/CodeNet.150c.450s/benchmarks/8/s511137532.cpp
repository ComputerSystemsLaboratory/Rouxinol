#include<iostream>
#include<string>
using namespace std;
int main(){
  string t,h;
  int n,pt=0,ph=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> t >> h;
    if(t==h)pt++,ph++;
    else if(t>h) pt+=3;
    else ph+=3;
  }
  cout << pt << " " << ph << endl;
}
