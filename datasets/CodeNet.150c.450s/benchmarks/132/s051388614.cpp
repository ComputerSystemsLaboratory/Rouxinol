#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n,p;
    while(cin >> n >> p,n){
        vector<int> ca;
        for(int i=0;i<n;i++) ca.push_back(0);
        int s=p;
        for(int i=0;;i++){
            if(i>=n) i=0;
            if(p){
                p--;
                ca[i]++;
            } else {
                vector<int>::iterator it = find(ca.begin(),ca.end(),s);
                if(it != ca.end()){
                    cout << distance(ca.begin(), it) << endl;
                    break;
                }
                p = ca[i];
                ca[i] = 0;
            }
        }
    }
}