#include <iostream>

using namespace std;

void bubbleSort(int a[], int n) 
{
    int count = 0;
    
    bool flag = 1;
    while (flag) {
        flag = 0;
        for (int j = n - 1; j > 0; j--) {
            if (a[j] < a[j-1]) {
                int s = a[j];
                a[j] = a[j-1];
                a[j-1] = s;
                flag = 1;
                count++;
                
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;

    cout << count << endl;
    
}

int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bubbleSort(a, n);
    return 0;
}