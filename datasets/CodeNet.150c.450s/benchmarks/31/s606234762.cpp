#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main(){
  int n,buf,minv,maxv;
  cin >> n;

  cin >> minv;
  cin >> buf;
  maxv = buf-minv;
  minv = std::min(minv,buf);

  for(int i=0;i<n-2;i++){
    cin >> buf;
    maxv=std::max(maxv,buf-minv);
    minv=std::min(minv,buf);
  }
  cout << maxv << endl;
}