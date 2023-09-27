#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i = 0; i < n; i++){
                cin >> vec[i];
        }
        for(int i = 1; i <= n; i++){
                if(i == n){
                        cout << vec[n - i] << endl;
                        return 0;
                }
                cout << vec[n - i] << " ";
        }
}