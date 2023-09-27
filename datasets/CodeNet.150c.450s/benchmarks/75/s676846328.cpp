#include<bits/stdc++.h>
using namespace std;

int left(int i){return 2 * i;};
int right(int i){return 2 * i + 1;};

int n;
vector<int> a(500001);

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

int main(){
    cin >> n;
  
    for(int i = 1;i <= n;i++){
        cin >> a[i];
    }
    build(a);
    for(int i = 1;i <= n;i++){
        cout <<" "<< a[i];
    }
    cout << endl;
}
