#include<stdio.h>
#include<iostream>
using namespace std;

struct card{char suit,value;};
void bu(struct card a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=i+1;j--)
        {
            if(a[j].value<a[j-1].value)
            {
                card t=a[j];a[j]=a[j-1];a[j-1]=t;
            }
        }
    }
}
void se(struct card a[],int n)
{
    int minj;
    for(int i=0;i<n;i++)
    {
         minj=i;
        for(int j=i;j<n;j++)
        {
            if(a[j].value<a[minj].value)
                minj=j;
        }
        card t=a[i];a[i]=a[minj];a[minj]=t;
    }
}
void pr(struct card a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(i>0) cout<<" ";
        //printf("%c%d",a[i].suit,a[i].value);
        cout<<a[i].suit<<a[i].value;
    }
    cout<<endl;
}
bool is(struct card c1[],struct card c2[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(c1[i].suit!=c2[i].suit)  return false;
    }
    return true ;
}
int main()
{
    card c1[100];
    card c2[100];
    char ch;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c1[i].suit>>c1[i].value;
    }
    for(int i=0;i<n;i++)
    {
        c2[i]=c1[i];
    }
    bu(c1,n);
    se(c2,n);
    pr(c1,n);
   cout<<"Stable"<<endl;
    pr(c2,n);
    if(is(c1,c2,n))
    {
      cout<<"Stable"<<endl;
       }
      else
      {
          cout<<"Not stable"<<endl;
      }
      return 0;

}