#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int main(){
    int n,r,p,c;
    while(true){
        cin >> n >> r;
        if(n==0 && r==0){
            break;
        }
        vector<int> a(n);
        for (int i=0;i<n;i++){
            a[i]=n-i;
        }
        for(int i=0;i<r;i++){
            cin >> p >> c;
            rotate(a.begin(),a.begin()+p-1,a.begin()+p+c-1);
            for (int i=0;i<n;i++){
            }
        }
        cout << a[0] << endl;
    }
}