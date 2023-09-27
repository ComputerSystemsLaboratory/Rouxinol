#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n,s;
    while (1) {
        cin >> n;
        if(n==0) break;
        int p = n;
        vector<int> score;
        cin >> s;
        n--;
        score.push_back(s);
        int mins=s,maxs=s,result=0;
        while(n--){
            cin >> s;
            maxs = max(maxs,s);
            mins = min(mins,s);
            score.push_back(s);
        }
        vector<int>::iterator it;
        it = score.begin();
        bool maxf=false,minf=false;
        while(it != score.end()){
            if (((*it)==mins) && (minf == false)) {
                minf = true;
            }
            else if(((*it)==maxs) && (maxf == false)){
                maxf = true;
            }
            else{
                result += (*it);
            }
            it++;
        }
        cout << result/(p-2) << endl;
    }
}