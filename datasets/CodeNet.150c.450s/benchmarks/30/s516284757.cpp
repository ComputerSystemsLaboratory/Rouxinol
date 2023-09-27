/*選択ソート*/
#include <iostream>
using namespace std;
 
int main() {
    int n,tmp,min;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        min = i;
        for (int j = i; j < n; ++j)
        {
            if (A[j]<A[min])    min = j;
        }
        if (A[i] != A[min]) {
            count +=1;
            tmp = A[i];
            A[i] = A[min];
            A[min] = tmp;
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