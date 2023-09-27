#include <iostream>
#include <string>
using namespace std;

int main(){
  int a,b,ans;
  string fig;
  while(cin >> a >> b){
    ans=a+b;
    fig=to_string(ans);
    cout << fig.size() << endl;
  }
}