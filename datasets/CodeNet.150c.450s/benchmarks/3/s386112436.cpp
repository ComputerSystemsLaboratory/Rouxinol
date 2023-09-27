#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
  string data;
  int n;
  cin>>data>>n;
  while (n--){
    string order,p; int a,b;
    cin>>order>>a>>b;
    if (order=="replace"){
      cin>>p;
      data.replace(a,b-a+1,p);
    }
    else if(order=="reverse") reverse(begin(data)+a,begin(data)+b+1);
    else if  (order=="print") cout<<data.substr(a,b-a+1)<<endl;
  }
    return 0;
}