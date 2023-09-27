#include<iostream>
#include<vector>
using namespace std;

void countsort(vector<int> &a,vector<int> &b,int maxi){
    vector<int> c(maxi + 1,0);
    int i;
    for(i = 0;i < (int)a.size();i++){
        c[a[i]]++;
    }
    for(i = 1;i <= maxi;i++){
        c[i] = c[i] + c[i - 1];
    }
    for(i = a.size() - 1;0<= i;i--){
        b[c[a[i]] - 1] = a[i];
        c[a[i]]--;
    }
}

int main(){
    int n,maxi = 0;
    cin >> n;
    vector<int>a(n),b(n);
    
    for(int i= 0;i < n;i++){
        cin >> a[i];
        maxi = max(maxi,a[i]);
    }
    
    countsort(a,b,maxi);
    
    for(int i= 0;i < n;i++){
        if(i > 0)cout << " ";
        cout << b[i];
    }
    cout << endl;
}
