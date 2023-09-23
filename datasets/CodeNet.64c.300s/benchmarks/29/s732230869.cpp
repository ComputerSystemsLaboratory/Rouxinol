#include <iostream>
#include <algorithm>

using namespace std;

int Energy;

int main()
{
        while(cin >> Energy) {
                if (Energy == 0) {
                        break;
                }

                int temp_min;
                int min = -1;

                for (int i = 0; i * i * i <= Energy; ++i) {
                        for (int j = 0; j * j <= Energy - i * i * i; ++j) {
                                temp_min = i + j + Energy - i * i * i - j * j;
                                if(min < 0) min = temp_min;
                                else if(min > temp_min) min = temp_min;
                        }
                }

                cout << min << endl;
        }
        return 0;
}