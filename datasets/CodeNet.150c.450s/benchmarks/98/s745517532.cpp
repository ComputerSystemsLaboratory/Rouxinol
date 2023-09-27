#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main(void){
  while(1){
    int n, m;
    cin >> n;
    cin >> m;
    if(n == 0 && m == 0){return 0;}

    int t[n]; int sumt = 0;
    int h[m]; int sumh = 0;
    for(int i = 0 ; i < n ; i++){cin >> t[i]; sumt += t[i];}
    for(int i = 0 ; i < m ; i++){cin >> h[i]; sumh += h[i];}

    int diff = sumt - sumh;
//    cout << diff << endl;

    int tans, hans;
    int min = 99999;

    for(int i = 0 ; i < n ; i++){
      for(int j = 0 ; j < m ; j++){

//        cout << "> " << t[i] - h[j] << endl;

        if(diff == 2*(t[i] - h[j])){

          if(t[i] + h[j] < min){
            min = t[i] + h[j];
            tans = t[i];
            hans = h[j];
          }

        }

      }
    }

    if(min != 99999){
      cout << tans << " " << hans << endl;
    }else{
      cout << -1 << endl;
    }
  }
}