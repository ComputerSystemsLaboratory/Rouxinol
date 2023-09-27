#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxHeapify(vector<int>& v, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;
    if(l < v.size() && v[l] > v[i]){
        largest = l;
    } else {
        largest = i;
    }
    if(r < v.size() && v[r] > v[largest]){
        largest = r;
    }
    if(largest != i){
        swap(v[i],v[largest]);
        maxHeapify(v, largest);
    }
}

void buildMaxHeap(vector<int>& v)
{
    for(int i = (v.size() - 1) / 2; i >= 0; --i){
        maxHeapify(v, i);
    }    
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i){
        cin >> v[i];
    }
    
    buildMaxHeap(v);
    
    for(int i = 0; i < n; ++i){
        cout << ' ' << v[i];
    }
    cout << endl;
}