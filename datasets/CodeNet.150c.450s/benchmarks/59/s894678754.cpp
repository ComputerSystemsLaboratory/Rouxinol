#include <iostream>

using namespace std;

void insertionSort(int *a,int N);
void showArray(int *a,int N);

int main(){
    int N;
    cin>>N;
    int *array;
    array=new int [N];
    if (array==NULL){
        cout<<"Error!"<<endl;
        return 0;
    }
    for (int i=0;i<N;i++){
        cin>>array[i];
    }
    insertionSort(array,N);
    delete [] array;
    return 0;
}

void insertionSort(int *a,int N){
    showArray(a,N);
    for (int i=1;i<N;i++){
        int key=a[i];
        int j=i-1;
        while (j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        showArray(a,N);
    }
}

void showArray(int *a,int N){
    for (int i=0;i<N;i++){
        cout<<a[i];
        if (i!=N-1){
            cout<<" ";
        }
    }
    cout<<endl;
}