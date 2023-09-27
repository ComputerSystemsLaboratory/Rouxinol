#include <iostream>
#include <vector>
#include <tuple>
#include <array>

using namespace std;

int main()
{
    uint n;
    cin >> n;
    while(n--){
        uint y, m, d;
        cin >> y >> m >> d;
        int cnt = 0;
        while(!(y == 1000 && m == 1 && d == 1)){
            ++d;
            if(y % 3 == 0 && d == 21){
                ++m;
                d = 1;
            }else if(y % 3 != 0 && (m & 1) == 0 && d == 20){
                ++m;
                d = 1;
            }else if(y % 3 != 0 && d == 21){
                ++m;
                d = 1;
            }

            if(m == 11){
                ++y;
                m = 1;
            }

            ++cnt;
        }

        cout << cnt << endl;
    }

    return  0;
}