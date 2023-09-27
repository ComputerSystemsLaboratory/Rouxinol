#include<bits/stdc++.h>
using namespace std ;
const int N= 3e5;
int Mod = 1e9+7 ;
long long cum [N];


int main(){
    int N;
    int ac= 0, wa= 0, tle = 0, re = 0;
    string tmp;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        if (tmp == "AC") {
            ac++;
        } else if (tmp == "WA") {
            wa++;
        } else if (tmp == "TLE") {
            tle++;
        } else if (tmp == "RE") {
            re++;
        }
    }

    std::cout << "AC x "  << ac << std::endl;
    std::cout << "WA x "  << wa << std::endl;
    std::cout << "TLE x " << tle << std::endl;
    std::cout << "RE x "  << re << std::endl;
    return 0;
}
