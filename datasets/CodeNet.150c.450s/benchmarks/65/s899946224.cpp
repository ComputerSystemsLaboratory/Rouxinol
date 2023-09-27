#include<iostream>
#include<algorithm>
using namespace std;
struct puke
{
    char Suit;
    int Value;
};
void selectionSort(puke a[],int N)
{
    for(int i=0;i<N;i++)
    {
        int s=i;
        for(int j=i;j<N;j++)
        {
            if(a[j].Value<a[s].Value)
               {
                   s=j;
               }


        }
          swap(a[i].Value,a[s].Value);
             char k;
             k=a[i].Suit;
             a[i].Suit=a[s].Suit;
             a[s].Suit=k;
    }
}
void BubbleSort(puke a[],int N)
{
    for(int i=0;i<N-1;i++)
        for(int j=0;j<N-i-1;j++)
    {
        if(a[j].Value>a[j+1].Value){
             swap(a[j].Value,a[j+1].Value);
             char s;
             s=a[j].Suit;
             a[j].Suit=a[j+1].Suit;
             a[j+1].Suit=s;
        }

    }
}
bool isStable(puke a1[],puke a2[],int N)
{
    for(int i=0;i<N;i++)
    {
         if(a1[i].Suit!=a2[i].Suit)
        return false;
    }

    return true;
}
int main()
{
    puke a1[36],a2[36];
    int N;
    cin>>N;
    for(int i=0;i<N;i++)
     {
         cin>>a1[i].Suit>>a1[i].Value;

     }
     for(int i=0;i<N;i++)
        a2[i]=a1[i];

     BubbleSort(a1,N);
     for(int i=0;i<N;i++)
     {
         if(i)
            cout<<" ";
         cout<<a1[i].Suit<<a1[i].Value;
     }
     cout<<endl;
     cout<<"Stable"<<endl;

        selectionSort( a2,N);
         for(int i=0;i<N;i++)
     {
         if(i)
            cout<<" ";
         cout<<a2[i].Suit<<a2[i].Value;
     }
     cout<<endl;
     if( isStable( a1,a2, N))
        cout<<"Stable"<<endl;
     else
        cout<<"Not stable"<<endl;


     return 0;


}