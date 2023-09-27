#include<bits/stdc++.h>

using namespace std;

int x[1000];
int temp[1000];
void MargeSort(int x[],int left,int right){
    int i,j,mid,k;
    if(left>=right)return;
    mid=(left+right)/2;
    MargeSort(x,left,mid);
    MargeSort(x,mid+1,right);
    for(i=left;i<=mid;i++){
        temp[i]=x[i];
    }
    for(i=mid+1,j=right;i<=right;i++,j--){
        temp[i]=x[j];
    }
    i=left; j=right;
    for(k=left;k<=right;k++){
        if(temp[i]>=temp[j])x[k]=temp[i++];
        else x[k]=temp[j--];
    }
}

int main(){
    int num=10;
    for(int i=0;i<num;i++){
        cin>>x[i];
    }
    MargeSort(x,0,num-1);
    for(int i=0;i<3;i++){
        cout<<x[i]<<endl;
    }
    return 0;
}