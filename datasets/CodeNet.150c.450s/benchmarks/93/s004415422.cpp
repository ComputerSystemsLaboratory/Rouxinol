#include<iostream>
#include<algorithm>
using namespace std;


int partition(int *a, char *s, int p, int r){
        int x = a[r];
        int i = p-1;
        for(int j=p;j<r;j++){
                if(a[j]<=x){
                        i++;
                        swap(a[i],a[j]);
                        swap(s[i],s[j]);
                }
        }
        swap(a[i+1],a[r]);
        swap(s[i+1],s[r]);
        return i+1;
}

void quicksort(int *a, char *s, int p, int r){
        if(p>=r) return;
        int q = partition(a,s,p,r);
        quicksort(a,s,p,q-1);
        quicksort(a,s,q+1,r);
}

static int *tmp;
static char *tmp_s;

long long  merge(int *a, char *s, int low, int mid, int high){
        for(int i=low;i<high;i++) tmp[i]=a[i];
        for(int i=low;i<high;i++) tmp_s[i]=s[i];
        int i=low, j=mid, k=low;
        long long c=0;
        while(i<mid||j<high){
                if(i==mid) {
                        a[k] = tmp[j];
                        s[k] = tmp_s[j];
                        k++;
                        j++;
                }else if(j==high) {
                        a[k] = tmp[i];
                        s[k] = tmp_s[i];
                        k++;
                        i++;
                }else{
                        if(tmp[i]<=tmp[j]) {
                                a[k] = tmp[i];
                                s[k] = tmp_s[i];
                                k++;
                                i++;
                        }else {
                                c += mid-i;
                                a[k] = tmp[j];
                                s[k] = tmp_s[j];
                                k++;
                                j++;
                        }
                }
        }
        return c;
}

long long  mergesort(int *a, char* s, int low, int high){
        if(low>=high-1) return 0;
        int mid = low+(high-low)/2;
        long long c1 = mergesort(a, s, low, mid);
        long long c2 = mergesort(a, s, mid, high);
        long long c3 = merge(a, s, low, mid, high);
        return c1+c2+c3;
}

int main(){
        int n;
        cin>>n;
        int *a = new int[n];
        int *b = new int[n];
        char *s = new char[n];
        char *t = new char[n];
        tmp = new int[n];
        tmp_s = new char[n];

        for(int i=0;i<n;i++) cin>>s[i]>>a[i];
        for(int i=0;i<n;i++) {
                b[i] = a[i];
                t[i] = s[i];
        }

        quicksort(a, s, 0, n-1);
        mergesort(b, t, 0, n);

        bool stability = true;
        for(int i=0;i<n;i++)
                if(s[i]!=t[i]) stability = false;

        if(stability)  cout<<"Stable"<<endl;
        else  cout<<"Not stable"<<endl;
        for(int i=0;i<n;i++) cout<<s[i]<<" "<<a[i]<<endl;

        delete a, b, tmp, s, t, tmp_s;
        return 0;
}




