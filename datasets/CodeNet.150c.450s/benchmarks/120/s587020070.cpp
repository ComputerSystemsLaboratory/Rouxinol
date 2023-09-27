#include <iostream>
#include <vector>

using namespace std;

int r, c;
vector<vector<int> > field;
 
int search()
{
    int counter;
    int max_num = 0;

    counter = 1 << r;
    for (int i = 0; i < counter; i++) {
        int num = 0;

        for (int j = 0; j < r; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < c; k++) {
                    field[j][k] ^= 1;
                }
            }
        }

        for (int j = 0; j < c; j++) {
            int co_num = 0;
            for (int k = 0; k < r; k++) {
                co_num += field[k][j];
            }

            if (co_num <= r / 2) {
                num += r - co_num;
            } else {
                num += co_num; /*reverse*/
            }
        }

        if (max_num < num) {
            max_num = num;
        }

        for (int j = 0; j < r; j++) {
            if ((i >> j) & 1) {
                for (int k = 0; k < c; k++) {
                    field[j][k] ^= 1;
                }
            }
        }
    }

    return max_num;
}

int main(int argc, char **argv)
{
    cin >> r >> c;

    while (r != 0 && c != 0) {
        field.clear();
        for (int i = 0; i < r; i++) {
            field.push_back(vector<int>(c));
            for (int j = 0; j < c; j++) {
                cin >> field[i][j];
            }
        }
        cout << search() << endl;
        cin >> r >> c;
    }
    return 0;
}