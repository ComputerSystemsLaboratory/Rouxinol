#include<bits/stdc++.h>
using namespace std;

int parent(int i){return i / 2;};
int left(int i){return 2 * i;};
int right(int i){return 2 * i + 1;};

int upper = 2000000;
int n = 0;
vector<int> a(upper + 1);

void maxHeap(vector<int> &a, int i){
    int l = left(i);
    int r = right(i);
    int largest;
    if(l <= n && a[l] > a[i]){
        largest = l;
    }else{
        largest = i;
    }
    if(r <= n && a[r] > a[largest])largest = r;
    if(largest != i){
        swap(a[largest],a[i]);
        maxHeap(a,largest);
    }
}

void build(vector<int> &a){
    for(int i = n / 2;0 < i;i--){
        maxHeap(a,i);
    }
}


void heap_increase(vector<int> &a,int i,int key){
    if(key < a[i])return;
    a[i] = key;
    while(i > 1 && a[parent(i)] < a[i]){
        swap(a[i],a[parent(i)]);
        i = parent(i);
    }
}

void insert(int key){
    n++;
    a[n] = -2100000000;
    heap_increase(a,n,key);
}

int extract(){
    if(n < 1)return -2100000000;
    int maxi = a[1];
    a[1] = a[n];
    n--;
    maxHeap(a,1);
    return maxi;
}

int main(){
    int key;
    string s;
    
    while(1){
        cin >> s;
        if(s[0] == 'e' && s[1] == 'n')break;
        if(s[0] == 'i'){
            cin >> key;
            insert(key);
        }else cout << extract() << endl;
    }
}

