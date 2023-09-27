#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

//init
vector<pair<char, int>> A; //can later resize this vector u know
map<int, string> Q1, Q2; //for comparing 2 vecs for stability
int q, n;

int isStable()
{
    for(int i=0; i<n; i++)
    {
        if(Q1[A[i].second] != Q2[A[i].second]) return 0;
    }
    return 1;
}

int partition(int p, int r)
{
    int x = A[r].second;
    int i = p-1;
    for(int j=p; j <= r-1; j++)
    {
        if(A[j].second <=x)
        {
            i +=1;
            swap(A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}

void quickSort(int p, int r)
{
    if(p < r)
    {
        q = partition(p, r);
        quickSort(p, q-1);
        quickSort(q+1, r);
    }
}

int main()
{
    //input
    cin >> n;
    A.resize(n);
    for(auto &i: A) cin >> i.first >> i.second;
    //calc
    for(int i=0; i<n; i++)
    {
        Q1[A[i].second] += A[i].first;
    }
    quickSort(0, n-1);
    for(int i=0; i<n; i++)
    {
        Q2[A[i].second] += A[i].first;
    }
    //output
    if(isStable() == 1) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    for(int i=0; i<n; i++) 
        cout << A[i].first << " " << A[i].second << endl;
    return 0;
}
