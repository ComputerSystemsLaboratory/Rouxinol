  #include <bits/stdc++.h>
    using namespace std;

    #define all(v) v.begin(), v.end()
    #define rep(i, n) for (int i = 0; i < (int)(n); i++)
    #define intll int long long
    const int INF = 1e9;
    const int MOD = 1e9 + 7;

    int main() {
      int n ;
      cin >> n ;
      int ac=0, wa=0, tle=0, re = 0 ;

      rep(i,n){
        string s ;
        cin >> s ;
        if(s == "AC" ) ac  ++ ;
        if(s == "WA" ) wa  ++ ;
        if(s == "TLE") tle ++ ;
        if(s == "RE" ) re  ++ ;
      }

      cout << "AC x " << ac << endl ;
      cout << "WA x " << wa << endl ;
      cout << "TLE x "<<tle << endl ;
      cout << "RE x " << re << endl ;

    }
