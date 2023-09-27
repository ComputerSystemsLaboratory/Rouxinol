#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;


  for(int q=0; q<n;q++) {
    
    vector <int> ball;
    
    ball.resize(10);
    for(int i=0;i<10;i++) cin >> ball[i];
    reverse(ball.begin(),ball.end());
    
    int a[10] = {0},b[11] = {0};
    a[0] = ball.back();
    ball.pop_back();
   int ac = 1;
   int bc = 1;
   int t,flg = 0;
   
   //    cout << "t:a:b" << endl;
   for(int i=0;i<9;i++) {
     
     t = ball.back();
     ball.pop_back();
     // cout << t <<":"<< a[ac-1]<<":" << b[bc-1]<<endl;
     
     if(t > a[ac-1] && a[ac-1] >= b[bc-1]) {
       a[ac] = t;
       ac++;
     }
     else if(t > b[bc-1]) {
       b[bc] = t;
       bc++;
     } else {
       flg = 1;
	break;
     }
    }
   
   if(flg == 0) cout << "YES" <<  endl;
   else cout << "NO" << endl;
   
   ball.clear();
   
  }

  return 0;

}