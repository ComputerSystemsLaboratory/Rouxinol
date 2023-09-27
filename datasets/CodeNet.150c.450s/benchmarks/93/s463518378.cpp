#include<iostream>
#include<algorithm>
#define SENTINEL 1000000009
#define MAX 100000

using namespace std;
struct {char name; int value;} A[MAX], B[MAX];




void Merge(int left, int mid, int right){
    int n1 = mid-left;
    int n2 = right - mid;
    pair<char, int> L[n1], R[n2];
    for(int i=0;i<=n1-1; i++)L[i]=make_pair(B[left+i].name, B[left+i].value);
    for(int i=0;i<=n2-1; i++)R[i]=make_pair(B[mid+i].name, B[mid+i].value);
    L[n1].second=SENTINEL;
    R[n2].second=SENTINEL;
    int i=0;
    int j=0;
    for(int k=left;k<=right-1;k++){
        if(L[i].second<=R[j].second){
            B[k].name=L[i].first;
            B[k].value=L[i].second;
            i++;
        }
        else {
            B[k].name=R[j].first; 
            B[k].value=R[j].second;
            j++;
            }
    }
}

void MergeSort(int left, int right){
    if (left+1<right){
        int mid=(left+right)/2;
        MergeSort(left, mid);
        MergeSort(mid, right);
        Merge(left,mid,right);
    }
}


int Partition(int p, int r){
    int x=A[r].value;
    int i =p-1;
    pair<char, int> temp;
    for(int j=p; j<=r-1; j++){
        if(A[j].value<=x){
            i++;
            temp=make_pair(A[i].name, A[i].value);
            A[i].name=A[j].name;
            A[i].value=A[j].value;
            A[j].name=temp.first;
            A[j].value=temp.second;
        }
    }
    temp=make_pair(A[i+1].name, A[i+1].value);
    A[i+1].name=A[r].name;
    A[i+1].value=A[r].value;
    A[r].name=temp.first;
    A[r].value=temp.second;
    return i+1;
}

void QuickSort(int p, int r){
    if (p<r){
        int q=Partition(p,r);
        QuickSort(p,q-1);
        QuickSort(q+1,r);
    }
}


int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n-1;i++){
        cin >> A[i].name >> A[i].value;
        B[i].name=A[i].name;
        B[i].value=A[i].value;
    }
    MergeSort(0,n);
    QuickSort(0, n-1);

    for(int i=0; i<=n-1;i++){
        if(A[i].name != B[i].name){
            cout << "Not stable\n";
            break;
        }
        else if((i==n-1)&(A[i].name==B[i].name))cout << "Stable\n";
    }

    for(int i=0;i<=n-1;i++){
        cout << A[i].name << " " << A[i].value << "\n";
    }

}
