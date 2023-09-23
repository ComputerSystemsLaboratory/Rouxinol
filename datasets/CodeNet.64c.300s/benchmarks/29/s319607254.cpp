#include <iostream>
#include<math.h>

using namespace std;
int smallest = 1000000;
int x, threez, N;
int main()
{
while (cin >> N && N != 0) {
    smallest = 1000000;
            for(int z = 0; pow(z, 3) <= N; z++) {
                threez = pow(z, 3);
                for(int y = 0; pow(y, 2) <= N - threez; y++) {
                    x = N - threez - pow(y, 2);
                    if (x + y + z < smallest) {
                        smallest = x + y + z;
                    }
                }
            }
            cout << smallest << endl;
}
}