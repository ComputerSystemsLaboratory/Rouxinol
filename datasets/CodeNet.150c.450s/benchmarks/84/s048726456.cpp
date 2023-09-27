#include<iostream>
using namespace std;

int *tmp;

long long  merge(int *a, int low, int mid, int high){
        for(int i=low;i<high;i++) tmp[i]=a[i];
        int i=low, j=mid, k=low;
        long long c=0;
        while(i<mid||j<high){
                if(i==mid) a[k++] = tmp[j++];
                else if(j==high) a[k++] = tmp[i++];
                else{
                        if(tmp[i]<=tmp[j]) a[k++] = tmp[i++];
                        else {
                                c += mid-i;
                                a[k++] = tmp[j++];
                        }
                }
        }
        return c;
}

long long  mergesort(int *a, int low, int high){
        if(low>=high-1) return 0;
        int mid = low+(high-low)/2;
        long long c1 = mergesort(a, low, mid);
        long long c2 = mergesort(a, mid, high);
        long long c3 = merge(a, low, mid, high);
        return c1+c2+c3;
}

int main(){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        tmp = new int[n];
        long long c = mergesort(a,0,n);
        cout<<c<<endl;
        delete tmp;
        return 0;
}
