#include <iostream>
#include <cstdlib>


int MtoD(int Year, int Month) {
    if (Year % 3 == 0) {
        return 20;
    } else {
        if (Month % 2 == 1) {
            return 20;
        }
    }
    return 19;
}
int YtoD(int Year) {
    int total = 0;
    for (int i = 1; i <= 10; i++) {
        total += MtoD(Year, i);
    }
    return total;
}

void calc(int Year, int Month, int Day) {
   int y = 999 - Year;
   int q_y = y / 3;
   int r_y = y % 3;
   int total = q_y * 590;
   for (int i = 1; i <= r_y; i++) {
    total += YtoD(Year + i);
   }
   for (int i = Month + 1; i <= 10; i++) {
    total += MtoD(Year, i);
   }
   total += MtoD(Year, Month) - Day + 1;
   std::cout << total << std::endl;
}

int main(void) {
    int n;
    int Y;
    int M;
    int D;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> Y >> M >> D;
        calc(Y, M, D);
    }
    return EXIT_SUCCESS;
}