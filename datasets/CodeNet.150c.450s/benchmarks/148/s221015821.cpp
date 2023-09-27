#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<string> S(N);
    int i;
    int ac=0;
    int wa=0;
    int tle=0;
    int re = 0;
    for(i=0;i<N;i++){
        cin >> S.at(i);
    }

    for(i=0;i<N;i++){
        if(S.at(i)=="AC")
            ac++;
        else if(S.at(i)=="WA")
            wa++;
        else if(S.at(i)=="TLE")
            tle++;
        else
            re++;
    }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;

}