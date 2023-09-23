#include <iostream>

using namespace std;

int solve(int n, int s, int t){
    if (n == 1) {
     if (s >= t && s < 10) return 1;
     else return 0;
    }
    int ret = 0;
    for(int i = t; i < 10 && i < s; i++)
        ret += solve(n - 1, s - i, i + 1);
    return ret;
}

int main(){
    int n,s;
    while(cin >> n >> s) {
      if (n == 0 && s == 0) break;
      cout << solve(n, s, 0) << endl;
    }
    return 0;
}