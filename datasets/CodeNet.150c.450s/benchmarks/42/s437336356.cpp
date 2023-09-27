#include <string>
#include <queue>
#include <iostream>
#include <cassert>

using namespace std;

int main() {
    string word,wordk;
    int num;
    queue<int> S;
    queue<string> M;
    int n,q,k;
    int timeS = 0 ;
    int timeN = 0 ;
    cin >> n >> q ;
    for(int i=0; i<n; ++i){
        // S???time???M???name?????\???
        cin >> word;
        M.push(word);
        cin >> num;
        // time???????¨???????????????????
        timeS += num;
        S.push(num);
    }
    while(S.front() > 0 && ! S.empty()) {
        if(S.front() > q){
            k = S.front();
            S.pop();
            S.push(k-q);
            wordk = M.front();
            M.pop();
            M.push(wordk);
            timeN += q;
        }
        else{
            timeN += S.front();
            cout << M.front() << " " << timeN << endl;
            
            S.pop();
            M.pop();
        }
    }
}