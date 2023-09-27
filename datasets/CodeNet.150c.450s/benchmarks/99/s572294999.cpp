#include <string>
#include <cstdint>
#include <iostream>
#include <cmath>

using namespace std;


uint32_t mcxiToValue(const string& str)
{
    uint32_t dst = 0;
    int32_t v = -1;

    for(auto c : str){
        if('0' <= c && c <= '9'){
            v = c - '0';
        }else{
            if(v == -1)
                v = 1;

            switch(c){
              case 'm': dst += 1000 * v; break;
              case 'c': dst += 100 * v; break;
              case 'x': dst += 10 * v; break;
              case 'i': dst += v; break;
              // default: assert(0);
            }
            v = -1;
        }
    }

    return dst;
}


string toMCXI(uint32_t value)
{
    char cs[9], *bIter;
    bIter = cs;

    for(int32_t i = 3; i >= 0; --i){
        uint32_t m = value / pow(10, i);

        if(m == 0)
            continue;
        if(m != 1){
            *bIter = m + '0';
            ++bIter;
        }

        *bIter = (i == 3 ? 'm' :
                    (i == 2 ? 'c':
                        (i == 1 ? 'x' : 'i')));
        ++bIter;

        value -= m * pow(10, i);
    }

    return string(cs, bIter);
}


int main(void)
{
    const auto N = [](){ int a; cin >> a; return a; }();

    for(size_t i = 0; i < N; ++i){

        string str1, str2;
        cin >> str1 >> str2;
        const auto v = mcxiToValue(str1),
                   w = mcxiToValue(str2);

        cout << toMCXI(v + w) << endl;
    }

    return 0;
}