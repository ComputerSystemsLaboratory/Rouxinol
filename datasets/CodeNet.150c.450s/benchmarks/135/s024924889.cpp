#include<iostream>
#include<algorithm>
using namespace std;
int h[1501];
int w[1501];

int widths[2000000];
int heights[2000000];

int main(){
  while(true){
    int n,m;
    cin >> n >> m;
    if(n == 0 && m == 0)break;
    fill(widths, widths+2000000,0);
    fill(heights,heights+2000000,0);
    fill(w,w+1501,0);
    fill(w,w+1501,0);
    for(int i = 0,acc = 0;i < n;i++){
      cin >> h[i+1];
      h[i+1] += h[i];
    }
    for(int j = 0,acc = 0;j < m;j++){
      cin >> w[j+1];
      w[j+1] += w[j];
    }

    for(int i = 0;i < n+1;i++){
      for(int j = i+1;j < n+1;j++){
        //cout << h[j] << ',' << h[i] << endl;
        heights[h[j] - h[i]] ++;
      }
    }
    for(int i = 0;i < m+1;i++){
      for(int j = i+1;j < m+1;j++){
        //cout << w[j] << ',' << w[i] << endl;
        widths[w[j] - w[i]]++;
      }
    }
    int ans = 0;
    int maxsize = min(n,m) * 1000;
    for(int i = 0;i < maxsize;i++){
      ans += widths[i] * heights[i];
    }
    cout << ans << endl;
  }
}