//
//  main.cpp
//  Entrance Examination
//
//  Created by x15071xx on 2017/06/15.
//  Copyright ?? 2017??´ AIT. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    
    while(1){
        
        int m,nmin,nmax;
        vector<int> score;
        vector<int> gap;
        
        cin >> m >> nmin >> nmax;
        
        if (m == 0 && nmin == 0 && nmax == 0) {
            break;
        }
        int tmp;
        for (int i = 0; i < m; i++) {
            cin >> tmp;
            score.push_back(tmp);
        }
        
        
        for (int i = nmin-1; i < nmax; i++) {
            gap.push_back(abs(score[i]-score[i+1]));
        }
        
        nmax = -1;
        for (int i = 0; i < gap.size(); i++) {
            if (gap[nmax] <= gap[i]) {
                nmax = i;
            }
        }
        
        cout << nmin+nmax << endl;
        
    }
    return 0;
}