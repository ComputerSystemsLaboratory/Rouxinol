#include <cstdio>
#include <string>
#include <vector>

using namespace std;
int r, c;

string ConvertDecToBinString(int dec_num) {
    if (dec_num == 0) { return string("0"); }
    string bin_num_str;
    while (dec_num) {
        if ((dec_num & 1) == 0) { bin_num_str.insert(bin_num_str.begin(), '0'); }
        else { bin_num_str.insert(bin_num_str.begin(), '1'); }
        dec_num >>= 1;
    }

    return bin_num_str;
}

int GetTurnOverMaxGoodNum(vector<vector<int> >& senbeis, int raw) {
    string bin_raw_string = ConvertDecToBinString(raw);
    for (size_t i = 0; i < r; i++) {
        if (bin_raw_string[i] == '1') {
            for (size_t j = 0; j < c; j++) {
                senbeis[i][j] = 1 - senbeis[i][j];
            }
        }
    }

    int max_good_senbei_num = 0;
    for (size_t j = 0; j < c; j++) {
        int zero_num = 0;
        for (size_t i = 0; i < r; i++) {
            if (senbeis[i][j] == 0) { zero_num++; }
        }
        max_good_senbei_num += max(zero_num, r - zero_num);
    }

    for (size_t i = 0; i < r; i++) {
        if (bin_raw_string[i] == '1') {
            for (size_t j = 0; j < c; j++) {
                senbeis[i][j] = 1 - senbeis[i][j];
            }
        }
    }

    return max_good_senbei_num;
}

int main() {
    scanf("%d %d", &r, &c);
    while (r * c != 0) {
        auto senbeis = vector<vector<int> >(r, vector<int>(c));
        int max_good_senbei_num = 0;
        for (size_t i = 0; i < r; i++) {
            for (size_t j = 0; j < c; j++) {
                scanf("%d", &senbeis[i][j]);
            }
        }
        for (size_t i = 0; i < 2 << (r - 1); i++) {
            int good_num = GetTurnOverMaxGoodNum(senbeis, i);
            if (max_good_senbei_num < good_num) { max_good_senbei_num = good_num; }
        }
        printf("%d\n", max_good_senbei_num);
        scanf("%d %d", &r, &c);
    }

    return 0;
}