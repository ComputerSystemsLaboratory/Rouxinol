#include <iostream>
using namespace std;
#define INFTY 1001001001

int S[500100]={0};
int n,cnt=0;

void merge(int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    int *L = new int[n1 + 1], *R = new int[n2 + 1];

    for (int i = 0; i < n1; ++i)
    {
        L[i] = S[left + i];
    }

    for (int i = 0; i < n2; ++i)
    {
        R[i] = S[mid + i];
    }

    L[n1] = INFTY;
    R[n2] = INFTY;
    int i = 0, j = 0;
    for (int k = left; k < right ; ++k)
    {
        if (L[i] <= R[j])
        {
            S[k] = L[i];
            ++i;
        }
        else
        {
            S[k] = R[j];
            ++j;
        }
        ++cnt;
    }
    delete[] L,R;
}

void mergeSort(int left, int right)
{
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        mergeSort(left,mid);
        mergeSort(mid,right);
        merge(left,mid,right);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>S[i];
    }

    mergeSort(0,n);
    for(int i=0;i<n;++i){
        cout<<S[i];
        if(i!=n-1){
            cout<<" ";
        }
        else{
            cout<<"\n";
        }
    }
    cout<<cnt<<"\n";
}
