#include <string>
#include <cstdint>
#include <sstream>
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;


string readln()
{
    string str;
    getline(cin, str);
    return str;
}


template<typename T>
vector<T> splitConvTo(const string& str, const char c = ' ')
{
    vector<T> vec;
    auto bIter = str.begin(),
         eIter = str.end();


    while(bIter != eIter)
    {
        T elem;
        stringstream(string(bIter, find(bIter, eIter, c))) >> elem;
        vec.push_back(move(elem));

        bIter = find(bIter, eIter, ' ');
        if(bIter != eIter)
            ++bIter;
    }

    return vec;
}



uint32_t mcxiToValue(string str)
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
    stringstream dst;
    for(int32_t i = 3; i >= 0; --i){
        uint32_t m = value / pow(10, i);

        if(m == 0)
            continue;
        if(m != 1)
            dst << m;

        dst << (i == 3 ? 'm' :
                    (i == 2 ? 'c':
                        (i == 1 ? 'x' : 'i')));

        value -= m * pow(10, i);
    }

    string s;
    dst >> s;
    return s;
}


int main(void)
{
    const auto N = splitConvTo<uint32_t>(readln()).at(0);

    for(size_t i = 0; i < N; ++i){
        auto ss = splitConvTo<string>(readln());
        const auto v = mcxiToValue(ss.at(0)),
                   w = mcxiToValue(ss.at(1));

        cout << toMCXI(v + w) << endl;
    }

    return 0;
}