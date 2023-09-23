#include <iostream>

int main()
{
    while(1) {
        int a1,a2,a3;

        int n = 0,x = 0;;
        int count = 0;

        std::cin >> n >> x;

        if (n == 0 && x == 0) {
            return 0;
        }


        for (int i = n; i > 2 ; i--) {
            a3 = i;
            for (int j = a3 - 1; j > 1; j--) {
                a2 = j;
                for (int k = a2 - 1; k > 0; k--) {
                    a1 = k;

                    if (a1 + a2 + a3 == x && a1 >= 1) {
                        count += 1;
                    }
                }
            }
        }


        std::cout << count << std::endl;
        }
}