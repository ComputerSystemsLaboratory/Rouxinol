#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <cstdio>
#include <utility>
#include <climits>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int cnt = 0;
vector<int> BubbleSort(vector<int> a){
    for(int i=0;i<a.size()-1;i++){
        for(int j=a.size()-1;j>=i+1;j--){
            if(a[j] < a[j-1]){
                swap(a[j],a[j-1]);
                cnt++;
            }
        }
    }
    return a;
}

int main(void){
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    a = BubbleSort(a);
    for(int i=0;i<n;i++){
        cout << a[i];
        if(i!=n-1)cout << " ";
    }
    cout << endl;
    cout << cnt << endl;
    
    
    return 0;
}