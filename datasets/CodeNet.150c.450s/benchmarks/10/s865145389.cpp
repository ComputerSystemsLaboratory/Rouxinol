#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    constexpr int BLDG_NUM = 4;
    constexpr int FLOOR_NUM = 3;
    constexpr int ROOM_NUM = 10;
    int people_cnt[BLDG_NUM][FLOOR_NUM][ROOM_NUM] = {{{0}}};

    int data_num;
    cin >> data_num;
    for (int i = 1; i <= data_num; i++) {
        int bldg, floor, room, people;
        cin >> bldg >> floor >> room >> people;
        people_cnt[bldg - 1][floor - 1][room - 1] += people;
    }

    for (int i = 0; i < BLDG_NUM; i++) {
        if (i != 0) {
            cout << "####################" << endl;
        }
        for (int j = 0; j < FLOOR_NUM; j++) {
            for (int k = 0; k < ROOM_NUM; k++) {
                cout << " " << people_cnt[i][j][k];
            }
            cout << endl;
        }
    }

    return 0;
}