#include <algorithm>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include <map>

using namespace std;

int solve(int nmin, int nmax, vector<int> &score){
    vector<int> gp;
    for(int i = nmin-1; i < nmax; i++){
       gp.push_back(score[i] - score[i+1]);
    }
    int maxGp = gp[0];
    int index = 0;
    for(int i =1; i < gp.size(); i++){
        // cout<< gp[i] <<endl;
        if(maxGp <= gp[i] ){
            maxGp = gp[i];
            index = i;
        }
    }
    // cout<<index<<endl;
    return nmin + index;
}

int main(){
    int M,nmin,nmax;
    vector<int>ans;
    while(1){
        cin>>M>>nmin>>nmax;
        if(!M && !nmin && !nmax)break;
        vector<int> P;
        for(int i=0;i<M;i++){
            int keep;cin>>keep;
            P.push_back(keep);
        }
       ans.push_back(solve(nmin, nmax, P));
    }

    for(int i: ans)cout<<i<<endl;
}
