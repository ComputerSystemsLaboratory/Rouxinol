#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, temp;
const int max1 = (10e+5) + 1;
pair<int,int> way[max1];
int ans = 0;


int main() {
  while(cin >> N >> M && N != 0) {
    ans = 0;
    for(int i = 0;i < max1 ; i++) way[i] = make_pair(0,0);
    for(int i = 0;i < N ; i++) cin >> way[i].second >> way[i].first;
    sort(way, way+N);
    reverse(way, way+N);
    //for(int i = 0;i < N ; i++) cout <<  way[i].second << ' ' << way[i].first;
    int i = 0;
    while(way[i].first != 0){
      if(M >= way[i].second){
        M -= way[i].second;
        i++;
        continue;
      }
      if(M >= 0){
        ans += (way[i].second - M)*way[i].first;
        M = 0;
        i++;
        continue;
      }
      ans += way[i].second * way[i].first;
      i++;
    }
    cout << ans << endl;
  }
}

