#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
    int n;
    cin >> n;
    
        if(n == 0)  break;
    vector<int> a(n);
    for(int i=0; i<n; i++)  cin >> a.at(i);
    
    sort(a.begin(),a.end());
    
    int min, d;
    min = 1000000;
    
    for(int i=0; i<n-1; i++){
        d = (a.at(i) - a.at(i+1) > 0 ? a.at(i)-a.at(i+1):a.at(i+1)-a.at(i));
        if(min > d) min = d;
    }
    
    cout << min << endl;
    }
}

