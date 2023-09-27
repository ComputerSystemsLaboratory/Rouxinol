/*--iを++1で書き換えると？*/
#include <iostream>
using namespace std;
 
int main() {
    int n,flag,tmp, count;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    flag = 1;
    count = 0;
    while(flag){
        flag = 0;
        for (int i = 1; i < n; ++i)
        {
            if (A[n-i] < A[n-i-1])
            {
                tmp = A[n-i];
                A[n-i] = A[n-i-1];
                A[n-i-1] = tmp;
                count +=1;
                flag = 1;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        cout  << A[i];
        if(i < n-1) cout << " ";
    }
    cout << endl;
    cout << count << endl;
    return 0;
}