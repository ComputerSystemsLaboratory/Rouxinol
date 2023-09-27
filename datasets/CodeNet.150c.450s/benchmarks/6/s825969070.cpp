#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define forn(i , n) for(int i=0;i<n;i++)


int main(){
    int a;
    int b;
    int c;
    
    cin >> a >> b >> c;
    
    string str = (a < b && b < c) ? "Yes" : "No";
    cout << str << endl;
    return 0;
}