#include <iostream>
#include <vector>
using namespace std;
void swap(vector<int> &a,int m,int n)
{
    int t = a[m];
    a[m] = a[n];
    a[n] = t;
    return;
}
int main()
{
    vector<int> a;
    int n,m,i,j;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    m=0;
    for(i=0;i<n;i++)
        for(j=n-1;j>i;j--)
            if(a[j-1]>a[j])
            {
                swap(a,j-1,j);
                m++;
            }
    for(i=0;i<n-1;i++)
        cout<<a[i]<<' ';
    cout<<a[i]<<endl;
    cout<<m<<endl;
    return 0;
}