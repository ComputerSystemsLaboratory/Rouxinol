#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    int AC=0;
    int WA=0;
    int TLE=0;
    int RE=0;
    for (int i=0;i<N;i++){
        cin >> S.at(i);
        if (S.at(i)=="AC") {AC++;}
        if (S.at(i)=="WA") {WA++;}
        if (S.at(i)=="TLE") {TLE++;}
        if (S.at(i)=="RE") {RE++;}
    }// Your code here!
    cout << "AC x " << AC << endl;
    cout << "WA x " << WA << endl;
    cout << "TLE x " << TLE << endl;
    cout << "RE x " << RE << endl;
}
