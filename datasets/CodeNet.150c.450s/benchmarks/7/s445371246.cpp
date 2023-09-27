#include <iostream>

using namespace std;

#define ARRAY_SIZE 10

void sort(int array[],int size){
    int tmp;
    for(int i=0;i<size;i++){
        for(int j=size-1;j>i;j--){
            if(array[j]>array[j-1]){
                tmp=array[j];
                array[j]=array[j-1];
                array[j-1]=tmp;
            }
        }
    }
}

int main() {
    int array[ARRAY_SIZE]={0};
    
    for(int i=0;i<10;i++) cin>>array[i];
    
    sort(array,ARRAY_SIZE);
    
    for(int i=0;i<3;i++){
        cout << array[i] << endl;
    }
    return 0;
}