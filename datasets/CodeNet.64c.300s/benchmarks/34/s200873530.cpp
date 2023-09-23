#include <iostream>

using namespace std;

void output(int ar[], int sz){
    for (int i = 0; i < sz - 1; i++) {
        cout << ar[i];
        cout << " ";
    }
    cout << ar[sz - 1];
    cout << endl;
}

int main(int argc, char const* argv[])
{
    int sz, ar[100];
    cin >> sz;
    for (int i = 0; i < sz; i++) {
        cin >> ar[i];
    }

    for (int i = 1; i < sz; i++) {
        output(ar, sz);
        int v = ar[i];
        int j = i - 1;
        while (j >= 0 && ar[j] > v) {
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = v;
    }
    output(ar, sz);
    return 0;
}