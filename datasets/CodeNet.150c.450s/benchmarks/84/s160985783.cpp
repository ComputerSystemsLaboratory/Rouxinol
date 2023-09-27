#include <iostream>
using namespace std;

unsigned long long cnt = 0;
const int INF = 1001001001;

void step(int* array, int left, int mid, int right)
{
    int L[200000], R[200000], l=0, r=0;
    for(int i=left;i<mid;++i) L[i - left] = array[i];
    for(int i=mid;i<right;++i) R[i - mid] = array[i];
    L[mid - left] = R[right - mid] = INF;
    for(int i=left; i<right; ++i)
    {
        if(L[l] <= R[r])
        {
            array[i] = L[l++];
        }
        else{
            array[i] = R[r++];
            cnt += (mid - left - l);
        }
    }
}

void count_inversion(int* array, int left, int right)
{
    if(left < right - 1){
        int mid = (left + right) / 2;
        count_inversion(array, left, mid);
        count_inversion(array, mid, right);
        step(array, left, mid, right);
    }
}

int main()
{
    int n, array[200000];
    cin >> n;
    for(int i=0;i<n;++i) cin >> array[i];
    count_inversion(array, 0, n);
    cout << cnt << endl;
}

