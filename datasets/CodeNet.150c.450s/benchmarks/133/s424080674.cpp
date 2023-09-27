#include<bits/stdc++.h>
using namespace std;


int main(){
    int score = 0;
    int N = 26;
    int D;
    cin>> D;

    vector<int> c(N+1);
    vector<vector<int>> s(D+1, vector<int>(N+1));
    vector<int> t(D+1);
    vector<int> last(N+1, 0);

    for(int i=1; i<=N; i++){
        cin>>c[i];
    }
 
    for(int i=1; i<=D; i++){
        for(int j=1; j<=N; j++){
            cin>>s[i][j];
        }
    }
    for(int i=1; i<=D; i++){
        cin>>t[i];
    }

    for(int d = 1; d <= D; d++){
        score += s[d][t[d]];
        last[t[d]] = d;

        int penalty = 0;
        for(int i = 1; i <= N; i++){
            penalty += c[i]*(d-last[i]);    
        }
        //cout<<"ペナルティ : "<<penalty<<endl;
        score -= penalty;        
 
        cout<< score <<endl;
    }
    return 0;
}
