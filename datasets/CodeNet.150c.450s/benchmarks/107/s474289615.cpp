#include <stdint.h>
#include <cstdlib>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <iostream>
#include <bitset>
#include <array>
#include <stdio.h>
using namespace std;

# define MAX 1000
uint64_t D0[MAX]={0}, HP[MAX]={0}, HN[MAX]={0}, VP[MAX]={0}, VN[MAX]={0};
uint64_t Cmap[MAX][20] = {};

int Mayer(size_t M, size_t N, string &a, string &b){
    unsigned int tmax = (M - 1) >> 6;
    unsigned int tlen = M - tmax * 64;
    // cout << "M:" << M << " " << "N:" << N << endl;
    // cout << "tmax:" << tmax << endl;
    // cout << "tlen:" << tlen << endl;

    for(size_t i = 0; i < tmax; ++i) {
        for(size_t j = 0; j < 64; ++j) Cmap[a[i * 64 + j]][i] |= (1L << j);
    }

    for(size_t i = 0; i < tlen; ++i){
        Cmap[a[tmax * 64 + i]][tmax] |= (1L << i);
        // printf("%c\n", a[tmax * 64 + i]);
    }

    int D = tmax * 64 + tlen;

    uint64_t top = (1L << (tlen - 1));  
    uint64_t lmb = (1L << 63);
    for(size_t i = 0; i < tmax; ++i) VP[i] = ~0;
    for(size_t i = 0; i < tlen; ++i) VP[tmax] |= (1L << i);

    for(size_t i = 0; i < N; ++i) {
        uint64_t *PM = Cmap[b[i]];
        for(int r = 0; r <= tmax; ++r) {
            uint64_t X = PM[r];
            if(r > 0 && (HN[r - 1] & lmb)) X |= 1L;
            D0[r] = (((X & VP[r]) + VP[r]) ^ VP[r]) | X | VN[r];
            HP[r] = VN[r] | ~(D0[r] | VP[r]);
            HN[r] = D0[r] & VP[r];
            X = (HP[r] << 1L);
            if(r == 0 || HP[r - 1] & lmb) X |= 1L;
            VP[r] = (HN[r] << 1L) | ~(D0[r] | X);
            if(r > 0 && (HN[r - 1] & lmb)) VP[r] |= 1L;
            VN[r] = D0[r] & X;
        }
        if(HP[tmax] & top) ++D;
        else if(HN[tmax] & top) --D;
    }

    // free(D0), free(HP), free(HN), free(VP), free(VN);
    return D;
}


int main() {
    string str1, str2;
    std::cin >> str1 >> str2;
    if(str1.length() > str2.length()){
        string tmp = str1;
        str1 = str2;
        str2 = tmp;
    }

    // int res = edit_distance_fixed_<1000, string, 1000>(str1,str2);
    int res = Mayer(str1.length(), str2.length(), str1, str2);
    std::cout << res << std::endl;
    return 0;
}



