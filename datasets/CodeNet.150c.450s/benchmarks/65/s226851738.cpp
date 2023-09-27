#include <iostream>
#include <algorithm>
 
using namespace std;
 
struct card {
    int num;
    char ch;
};
 
void show(card cd[], int n) {
    for (int i = 0; i < n - 1; i++)
        cout << cd[i].ch<<cd[i].num << " ";
    cout << cd[n - 1].ch<< cd[n - 1].num << endl;
}
 
void isStable(card cd_1[], card cd_2[], int n) {
    int j = 0;
    for (int i = 0; i < n - 1; i++) {
        while (cd_1[i].num != cd_2[j].num) j++;
        if (cd_1[i].ch != cd_2[j].ch) {
            cout << "Not stable" << endl;
            return;
        }
        j++;
        if (cd_1[i].num != cd_1[i + 1].num) j = 0;
    }
    cout << "Stable" << endl;
 
}
 
void bubbleSort(card cd[], int n) {
    bool f = true;
    while (f) {
        f = false;
        for (int i = n - 1; i >= 1; i--)
            if (cd[i].num < cd[i - 1].num) {
                swap(cd[i],cd[i-1]);
                f = true;
            }
    }
}
 
void selsctionSort(card cd[], int n) {
    int minj;
    for (int i = 0; i < n - 1; i++) {
        minj = i;
        for (int j = i + 1; j < n; j++) {
            if (cd[j].num < cd[minj].num)
                minj = j;
        }
        if (i != minj) {
            swap(cd[i], cd[minj]);
        }
    }
}
 
int main() {
    card cd[100];
    card cd_m[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cd[i].ch >> cd[i].num;
        cd_m[i] = cd[i];
    }
 
    bubbleSort(cd, n);
    show(cd, n);
    isStable(cd, cd_m, n);
 
    for (int i = 0; i < n; i++)
        cd[i] = cd_m[i];
 
    selsctionSort(cd, n);
    show(cd, n);
    isStable(cd, cd_m, n);
    return 0;
}