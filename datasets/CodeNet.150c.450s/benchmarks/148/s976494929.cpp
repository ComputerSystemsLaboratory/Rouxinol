#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array

int n, k, tmp;
string s;


int AC = 0;
int WA = 0;
int TLE = 0;
int RE = 0;

void solve(){
    

    cin >> n;





    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if(s == "AC") AC++;
        if(s == "WA") WA++;
        if(s == "TLE") TLE++;
        if(s == "RE") RE++;

    }

    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;

}





int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);

    solve();

}