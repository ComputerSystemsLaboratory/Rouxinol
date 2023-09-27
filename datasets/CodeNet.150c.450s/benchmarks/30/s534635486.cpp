#include <iostream>
#include <vector>
using namespace std;
int sellectionsort(vector<int> &a)
{
    int minj,t,count=0;
    unsigned int i,j;
    for(i=0;i<a.size();i++)
    {
        minj = i;
        for(j=i;j<a.size();j++)
        {
            if(a[j]<a[minj])
            {
                minj = j;
            }
        }
        if(minj!=i)
        {   t = a[i];
            a[i] = a[minj];
            a[minj] = t;
            count++;
        }
    }
    return count;
}
int main()
{
    int n,m;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m;
        a.push_back(m);
    }
    m = sellectionsort(a);
    for(int i=0;i<n;i++)
    {
        if(i)
            cout<<' ';
        cout<<a[i];
    }
    cout<<endl;
    cout<<m<<endl;
    return 0;
}