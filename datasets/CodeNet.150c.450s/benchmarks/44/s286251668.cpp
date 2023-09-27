#include <iostream>

using namespace std;

int main()
{
  int a[4], b[4];
  int blow, hit;
  
  while(cin >> a[0]){
    cin >> a[1] >> a[2] >> a[3];
    cin >> b[0] >> b[1] >> b[2] >> b[3];
    hit = blow = 0;
    for(int i = 0; i < 4; i++){
      if(a[i] == b[i]){
        hit += 1;
      }
    }
    for(int i = 0; i < 4; i++){
      for(int n = 0; n < 4; n++){
        if(a[i] != b[i] && a[i] == b[n]){
          blow++;
        }
      }
    }
    cout << hit << " " << blow << endl;
  }
  return 0;
}