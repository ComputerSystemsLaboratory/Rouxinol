#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(vector<int>& vec) {
    for (int i = 0; i <= vec.size() - 2; i++)
        for (int j = vec.size() - 2; j >= i; j--)
            if (vec[j] > vec[j+1])
                swap(vec[j], vec[j+1]);
}

int main() {
    vector<int> vec(3);

    for (int i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }

    bubble_sort(vec);

    for (int i = 0; i < vec.size(); i++) {
        if (i != 0) cout << ' ';
        cout << vec[i];
    }
    cout << endl;
}