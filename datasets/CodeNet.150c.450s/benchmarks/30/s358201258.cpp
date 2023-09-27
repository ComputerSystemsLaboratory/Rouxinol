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

    for (int i = 0; i < n - 1; i++) {
        int minj = i;
        for (int j = i + 1; j < n ; j++) {
            if(ar[j] < ar[minj]){
                minj = j;
            }
        }
        if(minj != i){
            swap(ar[i], ar[minj]);
            swapc++;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        cout << ar[i] << " ";
    }
    cout << ar[n - 1] << endl;
    cout << swapc << endl;

    return 0;
}