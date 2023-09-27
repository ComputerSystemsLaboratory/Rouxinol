#include <iostream>
#include <vector>
#include <stdlib.h> //for exit
#include <algorithm> //for sort...etc
#include <numeric> //for accumulate
using namespace std;

int main()
{
    int m,nmin,nmax;
    while(1){
        int score_max=-10000, n_max=-1;
        
        vector<int> scores;
        cin >> m >> nmin >> nmax;
        if(m==0 && nmin==0 && nmax==0) exit(0);
        for(int i = 0 ; i < m; ++i)
        {
            int tpscore;
            cin >> tpscore;
            scores.push_back(tpscore);
        }

        sort(scores.rbegin(),scores.rend());

        for(int i = nmin-1; i < nmax; ++i)
        {
            //cout << "score is " << scores[i]-scores[i+1] << endl;
            if(scores[i]-scores[i+1] >= score_max) 
            {
                score_max = scores[i]-scores[i+1];
                n_max = i+1;
            }
            //cout << "I was compared " << scores[i] << " and " << scores[i+1] << endl;
            //cout << "i is " << i << ". nmax is " << n_max << ". scoremax is "<< score_max << endl;
        }
        if(n_max!=-10000) cout << n_max << endl;
    }

}
