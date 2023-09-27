#include <bits/stdc++.h>

using namespace std;

int main(){
    int p[100010];
    int n;
    while(cin >> n, n){
        fill(p, p+100010, 0);
        int h1, m1, s1, h2, m2, s2;;
        for(int j=0; j < n; j++){
            scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
            for(int i=h1*60*60+m1*60+s1; i < h2*60*60+m2*60+s2; i++) p[i]++;
        }
        int ret = 0;
        for(int i=0; i < 24*60*60+59*60+59; i++) ret = max(ret, p[i]);
        cout << ret << endl;
    }
}