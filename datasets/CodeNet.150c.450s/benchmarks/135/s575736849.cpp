#include <iostream>
using namespace std;

int main()
{
  int m=0, n=0;
  while(cin >> m >> n && (m > 0 && n > 0)){
    int h[m];
    int w[n];
    int hcum[m];
    int wcum[n];

    cin >> h[0];
    hcum[0] = h[0];
    for(int i=1; i<m; i++){
      cin >> h[i];
      hcum[i] = hcum[i-1] + h[i];
    }
    cin >> w[0];
    wcum[0] = w[0];
    for(int i=1; i<n; i++){
      cin >> w[i];
      wcum[i] = wcum[i-1] + w[i];
    }

    int hend = hcum[m-1];
    int wend = wcum[n-1];
    int hcurs[hend];
    int wcurs[wend];
    for(int i=0; i<hend; i++) hcurs[i] = 0;
    for(int i=0; i<wend; i++) wcurs[i] = 0;

    for(int i=0; i<m; i++) hcurs[hcum[i]-1] += 1;
    for(int i=0; i<n; i++) wcurs[wcum[i]-1] += 1;

    for(int i=1; i<m; i++){
      for(int j=i; j<m; j++){
        int l = hcum[j] - hcum[i-1];
        hcurs[l-1] += 1;
      }
    }

    for(int i=1; i<n; i++){
      for(int j=i; j<n; j++){
        int l = wcum[j] - wcum[i-1];
        wcurs[l-1] += 1;
      }
    }

    int cnt = 0;
    int l = hend < wend ? hend : wend;
    for(int i=0; i<l; i++){
      cnt += hcurs[i] * wcurs[i];
    }
    cout << cnt << endl;
  }
}