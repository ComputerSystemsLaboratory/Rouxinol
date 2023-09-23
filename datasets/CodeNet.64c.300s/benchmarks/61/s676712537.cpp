#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cin >> r >> c;

    int array[128][128] = {0};
    int sum = 0;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> array[i][j];
            array[i][c] += array[i][j];
            array[r][j] += array[i][j];
            sum += array[i][j];
        }
    }
    array[r][c] = sum;
    for (int i = 0; i <= r; i++){
        for (int j = 0; j <= c; j++){
            cout << array[i][j] << "\n "[j < c];
        }
    }

    return 0;
}