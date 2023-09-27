#include <bits/stdc++.h>
using namespace std;

#define MAX 500000
#define SENTINEL 2000000000

vector<pair<char,int>> L(MAX/2+2),R(MAX/2+2);
int cnt;

void merge(vector<pair<char,int>> *A,int n, int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    for(int i = 0; i < n1; i++) L.at(i) = (*A).at(left + i);
    for(int i = 0; i < n2; i++) R.at(i) = (*A).at(mid + i);
    L.at(n1).second = R.at(n2).second = SENTINEL;
    int i = 0, j = 0;
    for(int k = left; k < right; k++){
        cnt++;
        if(L.at(i).second <= R.at(j).second){
            (*A).at(k) = L.at(i);
            i++;
            
        }else{
            (*A).at(k) = R.at(j);
            j++;
            
        }
    }
}

void mergeSort(vector<pair<char,int>> *A, int n, int left, int right){
    if(left + 1 < right){
        int mid = (left + right)/2;
        mergeSort(A,n,left,mid);
        mergeSort(A,n,mid,right);
        merge(A,n,left,mid,right);
    }
}

int partition(vector<pair<char,int>> *a,int p,int r){
    int x = (*a).at(r).second;
    int i = p-1;
    for(int j = p;j<r;j++){
        if((*a).at(j).second <= x){
            i++;
            swap((*a).at(i),(*a).at(j));
        }
    }

    swap((*a).at(i+1),(*a).at(r));
    return i + 1;
}

void quickSort(vector<pair<char,int>> *a,int p,int r){
    if(p<r){
        int q = partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}

int main(){
    int n;
    cin >> n;
    vector<pair<char,int>> c(n);
    vector<pair<char,int>> b(n);
    bool stable = true;
    for(int i = 0;i < n;i++){
        cin >> c.at(i).first >> c.at(i).second;
        b.at(i) = c.at(i);
    }

    quickSort(&c,0,n-1);
    mergeSort(&b,n,0,n);
    for(int i = 0;i < n;i++){
        if(c.at(i) != b.at(i)){
            stable = false;
            break;
        }
    }
    if(stable) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    for(int i = 0;i<n;i++){
        cout << c.at(i).first << " " << c.at(i).second << endl;
    }

    return 0;

}
