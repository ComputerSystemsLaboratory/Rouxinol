#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int length;
    cin >> length;

    std::vector<int> line(length);

    for (auto i = 0; i < length; i++) {
        cin >> line.at(i);
    }

    int min;
    int swap_cnt = 0;
    for (auto i = 0; i < length; i++) {
        min = i;
        for (auto j = i; j < length; j++) {
            if (line.at(j) < line.at(min)) {
                min = j;
            }
        }
        if (min != i) {
            int tmp = line.at(i);
            line.at(i) = line.at(min);
            line.at(min) = tmp;
            swap_cnt++;
        }
    }

    for (auto i = 0; i < length; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << line.at(i);
    }
    cout << endl;

    cout << swap_cnt << endl;

    return 0;
}

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}