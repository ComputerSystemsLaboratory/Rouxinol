#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>

using namespace std;



int main(){
    string comp;
    cin >> comp;
    string s;
    std::transform(comp.begin(), comp.end(), comp.begin(), ::toupper);
    int count= 0;
    while (1) {
        cin >> s;
        if (s == "END_OF_TEXT") break;
        std::transform(s.begin(), s.end(), s.begin(), ::toupper);
        if (comp == s) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}