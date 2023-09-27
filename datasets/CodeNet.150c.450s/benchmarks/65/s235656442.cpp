#include <iostream>
#include <cstdlib>

using namespace std;


class element{
    public:
        int key;
        char org[2];
        int postition;
};

void bubble(element *arr, int n);
void select(element *arr, int n);


int main()
{
    int n;
    cin>>n;

    element arr[n];
    element arr2[n];
    for(int i = 0;i < n;i++)
    {
        cin>>arr[i].org;
        arr[i].key = atoi(&arr[i].org[1]);
        arr[i].postition = i;
        arr2[i] = arr[i];
    }

    bubble(arr, n);
    select(arr2, n);    
}

void bubble(element *arr, int n)
{

    bool stable = true;
    for(int i = 0;i < n;i++)
    {
        //for(int j = 0;j < n - i -1;j++)
        for(int j = 1;j < n;j++)
        {
            //if(arr[j].key > arr[j+1].key)
            if(arr[j].key < arr[j-1].key)
                swap(arr[j], arr[j-1]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(i != n && arr[i].key == arr[i+1].key && arr[i].postition > arr[i+1].postition)
            stable = false;
        if(i != n-1) 
            cout<<arr[i].org<<" ";
        else
            cout<<arr[i].org<<endl;
    }
    if(stable)
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
}

void select(element *arr, int n)
{
    bool stable = true;
    for(int i = 0;i < n;i++)
    {
        int temp = i;
        //for(int j = i + 1;j < n;j++)
        for(int j = i;j < n;j++)
        {
            if(arr[temp].key > arr[j].key)
                temp = j;
        }
        swap(arr[i], arr[temp]);
    }
    for(int i = 0; i < n; i++)
    {
        if(i != n && arr[i].key == arr[i+1].key && arr[i].postition > arr[i+1].postition)
            stable = false;
        if(i != n-1)
            cout<<arr[i].org<<" ";
        else
            cout<<arr[i].org<<endl;
    }

    if(stable)
        cout<<"Stable"<<endl;
    else
        cout<<"Not stable"<<endl;
}