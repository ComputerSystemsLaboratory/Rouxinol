#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
constexpr int di[] = { 0, 1, 0, -1 }, dj[] = { 1, 0, -1, 0 };
#define rep(i, n) for (int i = 0; i < n; i++)
#define repr(i, n) for (int i = n; i >= 0; i--)
#define sort(v) sort((v).begin(), (v).end())
#define sortr(v) sort((v).rbegin(), (v).rend())
#define all(v) (v).begin(), (v).end()
#define MAX 100000
#define SENTINEL 2000000000
constexpr int inf = 100000000;

struct card{
    char suit;
    int value;
};

struct card l[MAX/2+2],r[MAX/2+2];

void merge(struct card a[],int left,int mid,int right){
    int n1=mid-left;
    int n2=right-mid;
    for(int i=0;i<n1;i++){
        l[i]=a[left+i];
    }
     for(int i=0;i<n2;i++){
        r[i]=a[mid+i];
    }
    l[n1].value=SENTINEL;
    r[n2].value=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        if(l[i].value<=r[j].value){
            a[k]=l[i++];
        }else{
            a[k]=r[j++];
        }
    }
}

void mergesort(struct card a[],int left,int right){
    if(left+1<right){
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid,right);
        merge(a,left,mid,right);
    }
}

int partition(struct card a[],int p,int r){
    int i=p-1;
    for(int j=p;j<r;j++){
        if(a[j].value<=a[r].value){
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quicksort(struct card a[],int p,int r){
    int q;
    if(p<r){
        q=partition(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    struct card a[n],b[n];
    bool stable=true;
    rep(i,n){
        cin>>a[i].suit>>a[i].value;
        b[i]=a[i];
    }
    quicksort(a,0,n-1);
    mergesort(b,0,n);
    rep(i,n){
       if(a[i].suit!=b[i].suit){
           stable=false;
       }
    }
    if(stable){
        cout<<"Stable"<<endl;
    }else{
        cout<<"Not stable"<<endl;
    }
    rep(i,n){
        cout<<a[i].suit<<" "<<a[i].value<<endl;
    }
   return 0;
}










