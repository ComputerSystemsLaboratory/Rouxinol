#include <iostream>
#include <utility>

using namespace std;

int main(int argc, char const* argv[])
{
    int n, ar[100], swapc = 0;

    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    bool next = true;
    while (next) {
        next = false;
        for (int i = 0; i < n - 1; i++) {
            if(ar[i] > ar[i+1]){
                swap(ar[i], ar[i+1]);
                swapc++;
                next = true;
            }
        }
    }

    for (int i = 0; i < n - 1; i++) {
        cout << ar[i] << " ";
    }
    cout << ar[n - 1] << endl;
    cout << swapc << endl;

    return 0;
}