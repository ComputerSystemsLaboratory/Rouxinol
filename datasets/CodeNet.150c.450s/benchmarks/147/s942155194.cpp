#include <iostream>

using namespace std;

int main()
{

    int n;  cin >> n;

    int x = 1, y = 1, z = 1, fn = 0;

    int* arr = new int[n+1];
    for (int i = 0; i <= n; i++){
        arr[i] = 0;
    }

    while (true){

        while (true){

            while (true){

                fn = x*x + y*y + z*z + x*y + y*z + x*z;
                z++;

                if (fn <= n){
                    arr[fn]++;
                } else {
                    break;
                }
            }

            y++; z = 1;
            fn = x*x + y*y + z*z + x*y + y*z + x*z;

            if (fn <= n){
                continue;
            } else {
                break;
            }
        }

        x++; y = 1; z = 1;
        fn = x*x + y*y + z*z + x*y + y*z + x*z;

        if (fn <= n){
            continue;
        } else {
            break;
        }
    }

    for (int i = 1; i <= n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}
