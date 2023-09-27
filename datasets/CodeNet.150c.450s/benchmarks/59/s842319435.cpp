#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& array);
void dump(vector<int>& array);

int main()
{
    int size;
    vector<int> array;

    cin >> size;
    for (int i = 0; i < size; i++) {
        int tmp;
        cin >> tmp;
        array.push_back(tmp);
    }
    insertionSort(array);
    return 0;
}

void insertionSort(vector<int>& array)
{
    dump(array);
    for (int i = 1; i < array.size(); i++) {
        int tmp = array[i];
        int j;
        for (j = i - 1; j >= 0; j--) {
            if (tmp < array[j]) {
                array[j + 1] = array[j];
            } else {
                break;
            }
        }
        array[j + 1] = tmp;
        dump(array);
    }
}

void dump(vector<int>& array)
{
    for (int i = 0; i < array.size(); i++) {
        cout << array[i];
        if (i < array.size() - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }
}