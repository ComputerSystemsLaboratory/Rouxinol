#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    while(cin >> n, n!=0){
        vector<int> score(n, 0);
        for(int i=0; i < n; i++) cin >> score[i];
        sort(score.begin(), score.end());
        int total = 0;
        for(int i=1; i < n-1; i++) total += score[i];
        cout << total/(n-2) << endl;
    }
}