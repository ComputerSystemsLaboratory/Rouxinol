#include <iostream>

using namespace std;

int main()
{
    bool stu[31] = {0};

    for (int i = 0; i < 28; i++) {
        int a;
        cin >> a;
        stu[a] = 1;
    }

    for (int i = 1; i <= 30; i++) {
        if (!stu[i]) cout << i << endl;
    }
}

