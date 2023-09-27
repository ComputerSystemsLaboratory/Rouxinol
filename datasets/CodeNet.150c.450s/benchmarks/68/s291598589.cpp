#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0) break;

        vector<int> grade(n);
        for(int i=0; i<n; i++){
            cin >> grade[i];
        }
        
        sort(grade.begin(), grade.end());
        int dmin=1e6;
        for(int i=0; i<n-1; i++){
            dmin = min(grade[i+1]-grade[i],dmin);
        }
        cout << dmin << endl;
    }
    return 0;
}