#include <iostream>
using namespace std;

int main()
{
    int N, K, i, left, right, dropped;
    cin>>N>>K;
    left = 1;
    right = K;
    int* arr = new int[N+1];
    for(i=1;i<=N;i+=1)
    {
        cin>>arr[i];
    }
    while(right<N)
    {
        dropped = left;
        left = left+1;
        right = right+1;
        if(arr[dropped]<arr[right])
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
