#include <iostream>
using namespace std;
int mi(int Y, int M, int D){
    int ans = ((Y%3==0)?20:((M%2==0)?19:20)) - D + 1;
    if(M<10){
        for(int m = M+1 ; m <= 10 ; m++){
          ans += ((Y%3==0)?20:((m%2==0)?19:20));
        }
      }
    for(int y = Y+1 ; y < 1000 ; y++){
      for(int m = 1 ; m <= 10 ; m++ ){
        ans += ((y%3==0)?20:((m%2==0)?19:20));
      }
    }
    return ans;
}
int main(void){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int Y, M, D;
        cin >> Y >> M >> D;
        cout << mi(Y,M,D) << endl;
    }
}

