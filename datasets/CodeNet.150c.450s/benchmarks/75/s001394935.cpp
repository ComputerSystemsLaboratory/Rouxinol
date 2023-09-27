#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    vector <int> v(arr,arr+n);
    make_heap(v.begin(),v.end());
    
    for (unsigned i=0; i<v.size(); i++)
        cout << ' ' << v[i];
        
    cout << '\n';
}
