#include <iostream>
using namespace std;

int SelectSort(int elem[], int num)
{
    int i, j;
    int cnt = 0;
    int min;

    for (i = 0; i < num; i++) {
        min = i;
        for (j = i+1; j < num; j++) {
            if (elem[min] > elem[j]) {
                min = j;
            }
        }
        if (min != i) {
            swap(elem[i], elem[min]);
            ++cnt;
        }
    }

    return cnt;
}

int main(void)
{
    int i;
    int num;
    int elem[100];
    int cnt;

    cin >> num;
    for (i = 0; i < num; i++) {
        cin >> elem[i];
    }

    cnt = SelectSort(elem, num);

    cout << elem[0];
    for (i = 1; i < num; i++) {
        cout << " ";
        cout << elem[i];
    }
    cout << endl;
    cout << cnt;
    cout << endl;

    return 0;
}