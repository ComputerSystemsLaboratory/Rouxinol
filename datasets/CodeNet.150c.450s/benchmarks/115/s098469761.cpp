#include <iostream>
#include <string>
#include <vector>


constexpr int MAXLENGTH = 1000;
int C[MAXLENGTH + 1][MAXLENGTH + 1];
int lcs(std::string lhs, std::string rhs) {
    int lnum = lhs.length();
    int rnum = rhs.length();
    for (int i = 0; i <= lnum; i++) {
        C[i][0] = 0;
    }
    for (int i = 0; i <= rnum; i++) {
        C[0][i] = 0;
    }
    for (int il = 1; il <= lnum; il++) {
        for (int ir = 1; ir <= rnum; ir++) {
            if (lhs[il-1] == rhs[ir-1]) {
                C[il][ir] = C[il - 1][ir - 1] + 1;
            }else if(C[il - 1][ir] >= C[il][ir - 1]) {
                C[il][ir] = C[il-1][ir];
            }else{
                C[il][ir] = C[il][ir - 1];
            }
        }
    }
    return C[lnum][rnum];
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string l, r;
        std::cin >> l;
        std::cin >> r;
        std::cout << lcs(l, r) << std::endl;
    }
}
