#include <bits/stdc++.h>

using namespace std;

int main(){

    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<string> users(n);

    for( auto &x : users )
        cin >> x;

    int m;
    cin >> m;

    int state = 0;

    for(int i = 0; i < m; i++){

        string t;
        cin >> t;

        if( find(users.begin(), users.end(), t) != users.end() ){

            state ^= 1;

            if(state)
                cout << "Opened by ";
            else
                cout << "Closed by ";

            cout << t << endl;

        } else {
            cout << "Unknown " << t << endl;
        }

    }

    return 0;

}
