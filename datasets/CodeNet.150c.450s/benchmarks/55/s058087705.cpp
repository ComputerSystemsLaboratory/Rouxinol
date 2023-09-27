#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> X;
    for(;;){
        string s;
        cin >> s;
        if(s == "0") break;
        X.push_back(s);
    }

    for(int i = 0; i < X.size(); i++){
        int sum = 0;
        string x = X.at(i);
        for(int j = 0; j < x.size(); j++){
            sum += (int)(x.at(j) - '0');
        }
        cout << sum << endl;
    }

}
