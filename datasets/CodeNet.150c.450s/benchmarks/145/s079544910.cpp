#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, int> M;
    string s,slongest,smost;
    cin >> s;
    slongest = s;
    smost = s;
    M[s]++;

    while (cin >> s){
        M[s]++;
        if (s.size() >= slongest.size())
            slongest = s;
        if (M[s] > M[smost])
            smost = s;
    }
    cout << smost << " " << slongest << endl;
}