//
//  main.cpp
//  Selection of Participants of an Experiment
//
//  Created by x15071xx on 2017/06/13.
//  Copyright ?? 2017??´ AIT. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
   
    while (1) {
        
        int n,i,min=10000000,tmp;
        vector<int> s;
        
        
        cin >> n;
        
        if (n == 0) {
            break;
        }
        
        for (i = 0; i < n; i++) {
            cin >> tmp;
            s.push_back(tmp);
        }
        
        sort(s.begin(), s.end());
        
        for (i = 0; i < s.size()-1; i++) {
            int ans = abs(s[i] - s[i+1]);
            
            if (ans < min) {
                min = ans;
            }
        }
        
        cout << min << endl;
        
    }
    return 0;
}