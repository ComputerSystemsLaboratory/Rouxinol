#include<iostream>
using namespace std;

void trace(int arr[], int N)
{
    for(int i=0; i<N; i++){
        if(i>0) cout<<' '<<flush;
        cout<<arr[i]<<flush;
    }
    cout<<endl;
}

int main()
{
    int N;
    cin>>N;
    int* arr=new int[N];
    int comp;
    int j;
    for(int i=0; i<N; i++){
        cin>>arr[i];
    }
    trace(arr,N);



    for(int i=1; i<N; i++){
        comp=arr[i];
        j=i-1;
        while( arr[j] > comp && j>=0 ){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=comp;
        trace(arr,N);

    }
    delete[] arr;

}