#include <bits/stdc++.h>
#define ll long long
#define INF INT_MAX 
#define mod 1000000007
using namespace std;
int main(){
    int N;
    cin >> N;
    int h,m,s;
    h = N/3600;
    N = N%3600;
    m = N/60;
    N = N%60;
    s = N;
    cout << h << ":" << m << ":" << s << endl;

}
