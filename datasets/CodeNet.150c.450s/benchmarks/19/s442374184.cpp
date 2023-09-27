#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> X;
    vector<int> Y;
    for(;;){
        int x, y;
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        X.push_back(x);
        Y.push_back(y);
    }

    for(int i = 0; i < X.size(); i++){
        int x = X.at(i), y = Y.at(i);
        cout << min(x, y) << " " << max(x, y) << endl;
    }

}

