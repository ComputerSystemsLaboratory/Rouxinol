#include<bits/stdc++.h>

using namespace std;

//Shortcut
#define long long long
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define sz size
#define ft(i , a , b) for (long i = (long)a ; i <= (long)b ; i++)
#define fd(i , a , b) for (long i = (long)a ; i >= (long)b ; i--)
#define lt(i , a , b , c) for (long i = (long)a ; i <= (long)b ; i += (long)c)
#define ld(i , a , b , c) for (long i = (long)a ; i >= (long)b ; i -= (long)c)
#define pll pair <long , long>
#define pls pair <long , string>
#define vtl vector <long>
#define vts vector <string>
#define mll map <long , long>

//Variable
const long mxN = 1e5 + 5;
const long base = 311;
const long oo = 1e15;
const long MOD = 1e9 + 7;
const long d4i[4] = {-1 , 0 , 1 , 0} , d4j[4] = {0 , 1 , 0 , -1};
const long d8i[8] = {-1 , -1 , 0 , 1 , 1 , 1 , 0 , -1} , d8j[8] = {0 , 1 , 1 , 1 , 0 , -1 , -1 , -1};

long TestCase;
long n , s;
long ans[mxN];

void Solve() {
    ft(i , 1 , 100)
    ft(j , 1 , 100)
    ft(l , 1 , 100) {
        s = i * i + j * j + l * l + i * j + j * l + i * l;
        if (s <= 1e4) ans[s]++;
    }
    cin >> n;
    ft(i , 1 , n) cout << ans[i] << "\n";
}   

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen(".inp", "r", stdin);
    //freopen(".out", "w", stdout);
    //cin >> TestCase;
    TestCase = 1;
    while(TestCase--)
        Solve();
    return 0;
}