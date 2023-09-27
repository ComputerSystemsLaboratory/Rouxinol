#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 105
struct in{
 char ch;
 int  val;
};
in a[maxn];
in b[maxn];
int n;
bool compareStable()
{
    for(int i=0;i<n;i++)
    {
        if(a[i].ch!=b[i].ch)
            return false;

    }
    return true;
}
void bubbleSort()
{
      bool flag=1;
      for(int i=0;flag;i++)
      {
          flag=0;
          for(int j=n-1;j>=i+1;j--)
          {
              if(a[j].val<a[j-1].val)
              {
                    swap(a[j],a[j-1]);
                    flag=1;
              }
          }
      }
    for(int i=0;i<n;i++)
    {
        if(i!=n-1)
            cout<<a[i].ch<<a[i].val<<" ";
        else
            cout<<a[i].ch<<a[i].val<<endl;
    }
    cout<<"Stable"<<endl;

}

void selectionSort()
{
    for(int i=0;i<n;i++)
    {
        int minj=i;
        for(int j=i;j<n;j++)
        {
            if(b[j].val<b[minj].val)
                minj=j;
        }
        swap(b[i],b[minj]);
    }
     for(int i=0;i<n;i++)
    {
         if(i!=n-1)
            cout<<b[i].ch<<b[i].val<<" ";
        else
            cout<<b[i].ch<<b[i].val<<endl;
    }
    if(compareStable())
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
}
int main()
{
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
            cin>>a[i].ch>>a[i].val;
        for(int i=0;i<n;i++)
        {
            b[i].ch=a[i].ch;
            b[i].val=a[i].val;
        }

        bubbleSort();
        selectionSort();
    }
    return 0;
}