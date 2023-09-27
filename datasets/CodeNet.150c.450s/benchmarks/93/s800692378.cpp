#include <bits/stdc++.h>
using namespace std;

int partition(vector<pair<string,int>> &arr, int p, int r){
    int x = arr.at(r).second;
    int i = p - 1;
    for(int j=p;j<r;j++){
        if(arr.at(j).second <= x){
            i++;
            swap(arr.at(i),arr.at(j));
        }
    }
    swap(arr.at(i+1),arr.at(r));
    return i+1;
}

void quicksort(vector<pair<string,int>> &arr,int p,int r){
    if(p < r){
        int idx = partition(arr,p,r);
        quicksort(arr,p,idx-1);
        quicksort(arr,idx+1,r);
    }
}

void merge(vector<pair<string,int>> &arr,int left,int right,int mid){
    int n = mid - left;
    int m = right - mid;
    vector<pair<string,int>> left_array(n),right_array(m);
    for(int i=0; i<n; i++){
        left_array.at(i) = arr.at(left+i);
    }
    for(int i=0;i<m;i++){
        right_array.at(i) = arr.at(mid+i);
    }
    pair<string,int> last_pair = make_pair("a",2147483647);
    left_array.push_back(last_pair);
    right_array.push_back(last_pair);
    int i=0,j=0;
    for(int k=0; k<right-left;k++){
        if(left_array.at(i).second <= right_array.at(j).second){
            arr.at(left+k) = left_array.at(i);
            i++; 
        }else{
            arr.at(left+k) = right_array.at(j);
            j++;
        }
    }
}

void mergesort(vector<pair<string,int>> &arr,int left,int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        mergesort(arr,left,mid);
        mergesort(arr,mid,right);
        merge(arr,left,right,mid);
    }
    
}

int main(){
    int n;
    cin >> n;
    vector<pair<string,int>> array(n),copy(n);

    for(int i=0;i<n;i++) cin >> array.at(i).first >> array.at(i).second ;
    copy = array;
    mergesort(copy,0,n);
    quicksort(array,0,n-1);
    if(copy == array){
        cout << "Stable" << endl;
    }else{
        cout << "Not stable" << endl;
    }
    for(int i=0;i<n;i++){
        cout << array.at(i).first << " " << array.at(i).second << endl; 
    }
}
