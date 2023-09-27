#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(3);
    cin >> vec[0] >> vec[1] >> vec[2];
    bool isFinished = false;
    while (!isFinished) {
        bool isSorted = true;
        for (int i = 0; i < vec.size(); i++) {
            if (i == vec.size() - 1)
                continue;

            if (vec[i] > vec[i + 1]) {
                int tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
                isSorted = false;
            }

        }
        isFinished = isSorted;
    }
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i];
        if (i != vec.size() - 1)
            cout << ' ';
    }
    cout << endl;
    return 0;
}

