#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    string input[1001];
    int i = 0;

    while (cin >> input[i]) {i++;};

    sort(input, input+i);

    int max = 0, pos = 0, add = 1, len = 0, lenp = 0;
    for (int j = 1; j < i; j++) {
        if (input[j-1] == input[j]) {
            add++;
            if (max < add) {
                max = add;
                pos = j;
            }
        } else {
            add = 1;
        }
        if (len < input[j].length()) {
            len = input[j].length();
            lenp = j;
        }
    }
    cout << input[pos] << " " << input[lenp] << endl;

    return 0;
}