#include <iostream>
#include <vector>

using std::cin;

int main()
{
    int vert_num;
    cin >> vert_num;
    std::vector<int> vert(vert_num);

    for (auto i = 0; i < vert_num; i++) {
        vert.at(i) =  i + 1;
    }

    int horiz;
    cin >> horiz;

    while (horiz--) {
        int swap1, swap2;
        char x;
        cin >> swap1 >> x >> swap2;

        int tmp = vert.at(swap1 - 1);
        vert.at(swap1 - 1) = vert.at(swap2 - 1);
        vert.at(swap2 - 1) = tmp;
    }

    for (auto i = 0; i < vert_num; i++) {
        std::cout << vert.at(i) << std::endl;
    }

    return 0;
}