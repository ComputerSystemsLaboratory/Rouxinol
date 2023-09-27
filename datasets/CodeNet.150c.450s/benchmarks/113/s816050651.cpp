#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> X;
    int x;

    for(;;){
        cin >> x;
        if(x == 0) break;
        X.push_back(x);
    }

    for(int i = 0; i < X.size(); i++){
        cout << "Case " << (i+1) << ": " << X.at(i) << endl;
    }

}
