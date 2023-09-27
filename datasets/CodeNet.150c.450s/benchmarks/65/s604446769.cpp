#include<iostream>
#include<cstdio>
using namespace std;
struct Node
{
    int value;
    char c;
};
void BubbleSort(Node a[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=n-1;j>=i+1;j--)
            if(a[j].value<a[j-1].value)
                swap(a[j],a[j-1]);
}
void SelectionSort(Node a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minj=i;
        for(int j=i+1;j<n;j++)
            if(a[j].value<a[minj].value)
                minj=j;
        swap(a[i],a[minj]);
    }
}
/*
bool func(Node temp[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            {
                if((temp[i].value==temp[j].value)&&(temp[i].c<temp[j].c))
                    return true;
                //else //if((temp[i].value==temp[j].value)&&(temp[i].c>temp[j].c))
                  //  return false;
            }
    return false;
}
*/

/*
void IsStable(Node a[],Node temp[],int n)
{
    for(int i=0;i<n-1;i++)
    {

        if((a[i].value==a[i+1].value)&&((a[i].c<a[i+1].c)==func(temp,n)))
            cout<<"Stable"<<endl;
        else if((a[i].value==a[i+1].value)&&((a[i].c<a[i+1].c)!=func(temp,n)))
            cout<<"Not stable"<<endl;


        if((a[i].value==a[i+1].value)&&((a[i].c<a[i+1].c)!=func(temp,n)))
        {
            cout<<"Not stable"<<endl;
            return ;
        }

    }
    cout<<"Stable"<<endl;
}
*/
void IsStable(Node a[],Node temp[],int n)
{
	int k=0;
	char str[36];
	for(int i=1;i<=9;i++)
		for(int j=0;j<n;j++)
			if(temp[j].value==i)
				{
					str[k]=temp[j].c;
					k++;
				}
	for(int i=0;i<n;i++)
	{
		if(a[i].c!=str[i])
		{
			cout<<"Not stable"<<endl;
			return ;
		}
	}
	cout<<"Stable"<<endl;
}

int main()
{
    int n;
    //scanf("%d",&n);
    cin>>n;
    Node C[n];
    for(int i=0;i<n;i++)
        cin>>C[i].c>>C[i].value;
    Node temp[n];
    for(int i=0;i<n;i++)
        temp[i].c=C[i].c,temp[i].value=C[i].value;
    Node b[n];
    for(int i=0;i<n;i++)
        b[i].c=C[i].c,b[i].value=C[i].value;
    BubbleSort(C,n);
    for(int i=0;i<n-1;i++)
        cout<<C[i].c<<C[i].value<<' ';
    cout<<C[n-1].c<<C[n-1].value<<endl;
    IsStable(C,temp,n);
    SelectionSort(b,n);
    for(int i=0;i<n-1;i++)
        cout<<b[i].c<<b[i].value<<' ';
    cout<<b[n-1].c<<b[n-1].value<<endl;
    IsStable(b,temp,n);
    return 0;
}