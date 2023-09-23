#include <iostream>
using namespace std;

int partition(int* array, int p, int r)
{
    int i = p, v = array[r-1];
    for(int j=p;j<r-1;++j)
    {
        if(array[j] <= v)
        {
            swap(array[i++], array[j]);
        }
    }
    swap(array[i], array[r-1]);
    return i;
}

int main()
{
    int array[100000];
    int n, ans;
    cin >> n;
    for(int i=0;i<n;++i) cin >> array[i];
    ans = partition(array, 0, n);
    for(int i=0;i<n;++i)
    {
        if(i) cout << " ";
        if(i == ans) cout << "[";
        cout << array[i];
        if(i == ans) cout << "]";
    }
    cout << endl;
}
