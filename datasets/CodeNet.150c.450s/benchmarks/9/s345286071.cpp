#include <iostream>
using namespace std;
int main() {
  string data;
  int index,n;
  while (cin>>data,data!="-"){
    cin >> n;
    for (int i=0;i<n;i++){
      cin >> index;
      data=data.substr(index)+data.substr(0,index);
    }
    cout<<data<<endl;
  }
  return 0;
}