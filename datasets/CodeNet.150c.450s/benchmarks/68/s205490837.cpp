#include<iostream>
using namespace std;
#define INF 1000001

void quickSort(int* Array,int left,int right){
    if(left < right){
        int i=left,j=right;
        int pivot;

        pivot = Array[(left+right)/2];
        while(1){
            while(Array[i]<pivot)
                i++;
            while(Array[j]>pivot)
                j--;
            if(i>=j)break;
            swap(Array[i],Array[j]);
            i++;j--;
        }
        quickSort(Array,left,i-1);
        quickSort(Array,j+1,right);
    }
}
int absolute(int x){
    if(x>=0)return x;
    else return -1*x;
}
int main(){
    int n;
    while(true){
        cin>>n;
        if(n==0)break;
        int grades[n];
        int minimum = INF;
        for(int i=0;i<n;i++)
            cin>>grades[i];
        quickSort(grades,0,n-1);
        for(int i=0;i<n-1;i++){
            int sub = grades[i+1] - grades[i];
            if(minimum > absolute(sub))minimum = absolute(sub);
        }
        cout<<minimum<<endl;
    }
    return 0;
}
