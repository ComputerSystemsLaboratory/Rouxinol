#include <iostream>
#include <vector>
using namespace std;
struct A{
    char ch;
    int num;
};
bool is_stable(const vector<A> &a,const vector<A> &b)
{
    vector<A> t=a;
    unsigned int i,j;
    for(i=0;i<b.size();i++)
    {
        for(j=0;j<t.size();j++)
        {
            if(t[j].num == b[i].num)
            {
                if(t[j].ch!=b[i].ch)
                {
                    return false;
                }
                t[j].num = 0;
                break;
            }
        }
    }
    return true;
}
void bubblesort(vector<A> &a)
{
    unsigned int i,j;
    A t;
    bool flag = true;
    for(i=0;flag&&i<a.size();i++)
    {
        flag = false;
        for(j=a.size()-1;j>i;j--)
        {
            if(a[j].num<a[j-1].num)
            {
                t = a[j];
                a[j] = a[j-1];
                a[j-1] = t;
                flag = true;
            }
        }
    }
}
void selectionsort(vector<A> &a)
{
    A t;
    unsigned int i,j,min;
    for(i=0;i<a.size();i++)
    {
        min = i;
        for(j=i+1;j<a.size();j++)
        {
            if(a[j].num<a[min].num)
            {
                min = j;
            }
        }
        if(min != i)
        {
            t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
}
void show(const vector<A> &a)
{
    unsigned int i;
    for(i=0;i<a.size();i++)
    {
        if(i)
            cout<<' ';
        cout<<a[i].ch<<a[i].num;
    }
    cout<<endl;
}
int main()
{
    vector<A> a,b,c;
    A m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m.ch>>m.num;
        a.push_back(m);
    }
    b=a;
    c=a;
    bubblesort(b);
    show(b);
    if(is_stable(a,b))
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
    selectionsort(c);
    show(c);
    if(is_stable(a,c))
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
    return 0;
}