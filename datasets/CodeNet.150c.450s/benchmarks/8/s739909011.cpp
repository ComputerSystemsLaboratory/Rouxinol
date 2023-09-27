#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    string taro, hanako;
    int count, taro_point = 0, hanako_point = 0;
    cin >> count;
    while (count--)
    {
        cin >> taro >> hanako;
        if (taro > hanako)
            taro_point += 3;
        else if (taro < hanako)
            hanako_point += 3;
        else if (taro == hanako)
        {
            taro_point++;
            hanako_point++;
        }
    }
    cout << taro_point << " " << hanako_point << endl;

    return 0;
}
