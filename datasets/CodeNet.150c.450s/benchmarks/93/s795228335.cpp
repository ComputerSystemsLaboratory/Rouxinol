#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <climits>
#include <string>
#define rep(i,a) for(i=0;i<a;i++)
using namespace std;

typedef pair<string,int> card;
 
int partition(vector<card> &qs, int p, int r) {
    int i,j,x;
    x = qs[r].second;
    i = p-1;
 
    for(j=p; j <= r-1; j++) {
        if(qs[j].second <= x){
            i = i+1;
            swap(qs[i],qs[j]);
        }
    }
    swap(qs[i+1],qs[r]);
    return i+1;
}

void quicksort(vector<card> &qs, int p, int r) {
    if(p < r) {
        int q = partition(qs,p,r);
        quicksort(qs, p, q-1);
        quicksort(qs, q+1, r);
    }
}

void merge(vector<card> &ms, int l, int m, int r){
    int n1 = m-l;
    int n2 = r-m;
    int i,j;
    vector<card> L(n1+1);
    vector<card> R(n2+2);
    rep(i,n1){
        L[i] = ms[l+i];
    }
    rep(i,n2) {
        R[i] = ms[m+i];
    }
    L[n1].second = INT_MAX;
    R[n2].second = INT_MAX;
    i = 0;
    j = 0;
    for(int k = l; k < r; k++) {
        if(L[i].second <= R[j].second) {
            ms[k] = L[i];
            i++;
        } else {
            ms[k] = R[j];
            j++;
        }
    }
}

void mergesort(vector<card> &ms, int l, int r) {
    if (l+1 < r) {
        int m = (l+r)/2;
        mergesort(ms,l,m);
        mergesort(ms,m,r);
        merge(ms,l,m,r);
    }
}

bool check(vector<card> &qs, vector<card> &ms, int n)
{
    int i;
    rep(i,n){
        if(qs[i].first != ms[i].first || qs[i].second != ms[i].second){
            return false;
        }
    }
    return true;
}
 
int main(void) {
    int n,i;
    card c1;
    vector<card> qs;
     
    cin >> n;
    rep(i,n) {
        cin >> c1.first >> c1.second;
        qs.push_back(c1);
    }
    vector<card> ms(qs.begin(),qs.end());

    quicksort(qs,0,n-1);
    mergesort(ms,0,n);

    if(check(qs,ms,n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    rep(i,n) {
        cout << qs[i].first << " " << qs[i].second << endl;
    }
    return 0;
}