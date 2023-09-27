#include <bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(i,s,n) for(int i=s;i<n;i++)
const int inf = pow(2, 31) - 1;
void merge(pair<char, int> a[], int left, int mid, int right){
    int n1 = mid - left;
    int n2 = right - mid;
    pair<char, int> l[n1+1], r[n2+1];
    rep(i,n1)l[i] = a[left + i];
    rep(i,n2)r[i] = a[mid + i];
    l[n1] = make_pair('0', inf);
    r[n2] = make_pair('0', inf);
    int i = 0, j = 0;
    REP(k,left, right){
        if(l[i].second <= r[j].second){
            a[k] = l[i];
            i++;
        }else {
            a[k] = r[j];
            j++;
        }
    }
}
void merge_sort(pair<char, int> a[], int left, int right){
    if(left + 1 < right){
        int mid = (left + right) / 2;
        merge_sort(a, left, mid);
        merge_sort(a, mid, right);
        merge(a, left, mid, right);
    }
}

int partition(pair<char, int> a[], int p, int r){
    int x = a[r].second;
    int i = p - 1;
    REP(j,p,r){
        if(a[j].second <= x){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}
void quick_sort(pair<char, int> a[], int p, int r){
    if(p < r){
        int q = partition(a, p, r);
        quick_sort(a, p, q-1);
        quick_sort(a, q+1, r);
    }
}

int main(){
    int n;
    cin >> n;
    pair<char, int> a[n], b[n];
    rep(i,n){
        char pic;
        int num;
        cin >> pic >> num;
        a[i] = make_pair(pic, num);
        b[i] = a[i];
    }
    merge_sort(a, 0, n);
    quick_sort(b, 0, n-1);

    bool same = true;
    rep(i,n)if(a[i] != b[i]){
        same = false;
        break;
    }

    if(!same)printf("Not stable\n");
    else printf("Stable\n");

    rep(i,n){
        //printf("%c %d   ", a[i].first, a[i].second);
        printf("%c %d\n", b[i].first, b[i].second);
    }

    return 0;
}
