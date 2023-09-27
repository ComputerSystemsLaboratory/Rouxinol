#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s, p;
    cin >> s >> p;
    string ss = s + s;

    auto it = search(ss.begin(), ss.end(), p.begin(), p.end());
    if (it != ss.end()){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}