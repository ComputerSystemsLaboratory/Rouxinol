#include <bits/stdc++.h>
using namespace std;
int main(){
    while(true){
        int n,asscore=0,bsscore=0;
        cin >> n;
        if(n == 0){break;}
        vector<int> ascard(n);
        vector<int> bscard(n);
        for(int i = 0; i < n ; ++i){
            cin >> ascard.at(i) >>bscard.at(i);
            if(ascard.at(i) > bscard.at(i)){
                asscore = asscore + ascard.at(i) + bscard.at(i);
            }
            if(ascard.at(i) == bscard.at(i)){
                asscore = asscore + ascard.at(i);
                bsscore = bsscore + bscard.at(i);
            }
            if(ascard.at(i) < bscard.at(i)){
                bsscore = bsscore + ascard.at(i) + bscard.at(i);
            }
        }
        cout << asscore << " " << bsscore << endl;
    }
}
