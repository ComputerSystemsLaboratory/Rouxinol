#include <iostream>
#include <cstring>
using namespace std;
int list[100];
int main()
{
  for(;;){
    int n,a,b,c,x;
    cin >> n >> a >> b >> c >> x;
    if(n==0 && a==0 && b==0 && c==0 && x==0) break;
    memset(list,0,sizeof(list));
    for(int i=0; i<n; i++){
      cin >> list[i];
    }
    int count=0,index=0;
    for(;;){
      if(count > 10000){
        cout << -1 << endl;
        break;
      }
      if(list[index] == x) index++;
      if(n == index){
        cout << count << endl;
        break;
      }
      x = (a * x + b) % c;
      count++;
    }
  }
  return 0;
}