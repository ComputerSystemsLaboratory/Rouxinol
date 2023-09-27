#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
    size_t in_num;
    cin >> in_num;

    vector<int> in(in_num);
    for (auto i = 0; i < in_num; i++) {
        cin >> in.at(i);
    }

    for (auto i = 0; i < in_num; i++) {
        if (i != 0) {
            cout << " ";
        }
        cout << in.back();
        in.pop_back();
    }
    cout << endl;

    return 0;
}