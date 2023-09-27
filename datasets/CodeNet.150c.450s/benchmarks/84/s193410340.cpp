#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int left, int mid, int right,long long &count){
    int n = mid - left;
    int m = right - mid;
    vector<int> right_array(m),left_array(n);
    for(int i=0;i<n;i++) left_array.at(i) = arr.at(left+i);
    for(int i=0;i<m;i++) right_array.at(i) = arr.at(mid + i);
    left_array.push_back(2147483647);
    right_array.push_back(2147483647);
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(left_array.at(i) > right_array.at(j)){
            arr.at(k) = right_array.at(j);
            j++;
            count += (n-i);
        }else{
            arr.at(k) = left_array.at(i);
            i++;
        }
    }
}

void mergesort(vector<int> &arr, int left,int right,long long &count){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergesort(arr,left,mid,count);
        mergesort(arr,mid,right,count);
        merge(arr,left,mid,right,count);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> array(n);
    for(int i=0; i<n; i++) cin >> array.at(i);
    long long c = 0;
    mergesort(array,0,n,c);
    cout << c << endl;
}
