#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++){ cin >> a[i]; }
        
    int min=0, max=0;
    long long sum=0;
    min = *min_element(a.begin(), a.end());
    max = *max_element(a.begin(), a.end());
    for(int i=0; i<a.size(); i++){ sum += a[i]; }
    
    cout << min << " " << max << " " << sum << endl;
    return 0;
}