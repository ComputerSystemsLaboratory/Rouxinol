#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int in_num;
    cin >> in_num;

    if (in_num == 0) {
        cout << "Undefined." << endl;
    } else {
        int in_1;
        cin >> in_1;

        int min, max;
        long sum;
        min = max = sum = in_1;

        int i;
        for (i = 2; i <= in_num; i++) {
            int in_i;
            cin >> in_i;

            if (min > in_i) {
                min = in_i;
            }

            if (max < in_i) {
                max = in_i;
            }

            sum += in_i;
        }

        cout << min << " " << max << " " << sum << endl;
    }

    return 0;
}