#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int* r=new int[n];
    for(int i=0; i<n; i++)
        cin>>r[i];

    int min=r[0], maxv=r[1]-r[0];


    for(int i=1; i<n; i++){
        maxv=(maxv < r[i]-min)? r[i]-min : maxv;
        min=(min>r[i])? r[i] : min;
        }
    cout<<maxv<<endl;
}