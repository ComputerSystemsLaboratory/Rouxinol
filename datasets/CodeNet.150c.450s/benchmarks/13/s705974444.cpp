#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s, p;
    cin >> s >> p;
    s += s;

    for(int i = 0; i < s.size()/2; i++){
        bool flag = true;
        for(int j = 0; j < p.size(); j++){
            if(s.at(i+j) != p.at(j)){
                flag = false;
                break;
            }
        }
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
