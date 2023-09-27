#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <tuple>
#include <vector>
#include <numeric>

using namespace std;

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D

const int maxi = 20000;
const char UP = '/';
const char DOWN = '\\';
const char FLAT = '_';

vector<tuple<char, int>> altitudes;
vector<int> areas;

template<typename I, typename F>
void for_each2(I begin, I end, F fnc){
    if (begin == end) return;
    fnc(true, begin == end - 1, *begin);
    while(++begin <= end - 1) fnc(false, begin == end - 1, *begin);
}

template<typename T>
int calc_area(T start, T end){
    auto s_alti = get<1>(*start);
    int area = 0;
    while (start != end + 1) {
        int alti = get<1>(*start);
        switch (get<0>(*start)) {
            case DOWN:
            case UP:
                area += s_alti - alti + 1;
                break;
            case FLAT:
                area += s_alti - alti + 2;
                break;
        }
        start++;
    }

    return area / 2;
}

int main(int argc, char const* argv[])
{
    int alti = 0;
    vector<int> areas;

    int c;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case DOWN:
                alti -= 2;
                altitudes.emplace_back(c, alti);
                break;
            case FLAT:
                altitudes.emplace_back(c, alti);
                break;
            case UP:
                altitudes.emplace_back(c, alti);
                alti += 2;
                break;
        }
    }

    auto s = altitudes.begin(); // ????????¢?????§??????
    auto last = altitudes.end() - 1;

    while(s < last){
        auto c = get<0>(*s);
        if(c == DOWN){
            auto s_alti = get<1>(*s); // ??????????¬??????????
            auto e = s + 1; // ????????¢????????????
            while(e != altitudes.end()){
                auto e_alti = get<1>(*e);
                auto e_type = get<0>(*e);
                if(s_alti == e_alti && e_type == UP){
                    int area = calc_area(s, e);
                    areas.push_back(area);
                    s = e;
                    break;
                }
                e++;
            }
        }
        s++;
    }

    printf("%d\n", accumulate(areas.begin(), areas.end(),0));
    if(areas.size() > 0){
        printf("%d ", areas.size());
        for_each2(areas.begin(), areas.end(), [](bool is_first, bool is_last, int &v)
            { printf(!is_last ? "%d " : "%d\n", v); });
    }else{
        puts("0");
    }

    return 0;
}