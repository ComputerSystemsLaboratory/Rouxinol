#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        if (n==0) {
            break;
        }
        int PlayerA=0;
        int PlayerB=0;
        while (n--) {
            int scoreA;
            int scoreB;
            cin >> scoreA >> scoreB;
            if (scoreA>scoreB) {
                PlayerA+=scoreA+scoreB;
            } else if (scoreA<scoreB) {
                PlayerB+=scoreA+scoreB;
            } else {
                PlayerA+=scoreA;
                PlayerB+=scoreB;
            }
        }
        printf("%d %d\n",PlayerA,PlayerB);
    }
    return 0;
    
}