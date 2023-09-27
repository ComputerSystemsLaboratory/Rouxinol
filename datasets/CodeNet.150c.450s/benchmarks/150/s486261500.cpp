#include<iostream>
using namespace std;

#define VMAX 10001

int main()
{
    int i, n, val, max, C[VMAX];
    cin >> n;
    max = 0;

    for(val = 0; val < VMAX; val++) C[val] = 0;

    for(i = 0; i < n; i++){
        cin >> val;
        C[val] = C[val] + 1;
        if(max < val) max = val;
    }
    for(val = 0; C[val] == 0; val++);
    cout << val;
    C[val] = C[val] - 1;

    while(val <= max){
        if(C[val] > 0){
            cout << " " << val;
            C[val] = C[val] - 1;
        }else{
            val++;
        }
    };
    cout << endl;    

    return 0;
}