#include<bits/stdc++.h>
using namespace std;

int main(){
    
while(1){
    
    int n;
    cin >> n;
    if(n==0) break;
    vector<int> vec(n,0);
    vector<int> comp(n-1,0);
    for(int i=0;i<n;i++){
        cin >>vec.at(i);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++){
        comp.at(i)=vec.at(i+1)-vec.at(i);
    }
    sort(comp.begin(),comp.end());
    cout << comp.at(0) << endl;
}
}








