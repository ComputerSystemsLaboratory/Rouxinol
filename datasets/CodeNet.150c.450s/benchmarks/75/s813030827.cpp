#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)
const long long mod = 1e9 + 7;

#define max 500000
int a[max];
int h;

int parent(int i){return i / 2;}
int left(int i){return 2 * i;}
int right(int i){return 2 * i + 1;}

void maxheap(int i){
    int l = left(i);
    int r = right(i);
    int largest;
    if(l <= h && a[l] > a[i]) largest = l;
    else largest = i;
    if(r <= h && a[r] > a[largest]) largest = r;
    if(largest != i){
        swap(a[i], a[largest]);
        maxheap(largest);
    }
}

int main(){
    cin >> h;
    rep(i, h) cin >> a[i + 1];
    for(int i = h / 2; i >= 1; i--) maxheap(i);
    rep(i, h) cout << " " << a[i + 1];
    cout << endl;
}
