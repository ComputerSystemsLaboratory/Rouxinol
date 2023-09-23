#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<iomanip>
using namespace std;
#define fr first
#define sc second
typedef pair<int,int> P;
int main(){
  int h,w;
  int mas[10][10000];
  while( cin >> h >> w , h ){
    for(int i = 0 ; i < h ; i++ ){
      for(int j = 0 ; j < w ; j++ ){
        cin >> mas[i][j];
      }
    }
    int ans = 0;
    for(int i = 0 ; i < (1 << h) ; i++ ){
      int sum = 0;
      for(int j = 0 ; j < w ; j++ ){
        int cnt = 0;
        for(int k = 0 ; k < h ; k++ ){
          cnt += mas[k][j]^(i>>k&1);
        }
        sum += max( h - cnt , cnt );
      }
      ans = max( sum , ans );
    }
    cout << ans << endl;
  }
}