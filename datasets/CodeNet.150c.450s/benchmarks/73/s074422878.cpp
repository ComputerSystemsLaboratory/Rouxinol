#include <iostream>


using namespace std;
int a[100000], b[100000];

int main()
{
    int n, k =0, q, com, x, y;
    long long s = 0;
    cin >> n >> q;

    for (int i = 0; i < n; i++){
        a[i] = 0;
    }

    for (int i = 0; i < q; i++){

        cin >> com >> x >> y;

        if (com == 0){
            a[x] += y;
        } else {
            for (int j = x; j < y + 1; j++)
                s += a[j];

            b[k] = s;
            k++;
            s = 0;
        }
    }
       for (int i = 0; i <k; i++)
            cout << b[i] << endl;

    return 0;
}