#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int solve(vector<int> v){
    sort(v.begin(),v.end(),greater<int>());
    
    int ma = 0;
    int mi = 0;
    int L = v.size();
    
    for(int i=0; i<L; i++){
        ma+= v[i]*pow(10,L-1-i);
        mi+= v[L-1-i]*pow(10,L-1-i);
    }
    
    return ma-mi;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    
    /////////
    //write//
    /////////
    
    while(1){
        
        int a,L; cin >> a >> L;
        if(a==0 && L==0)break;
        vector<int> v;
        vector<int> ans;
        ans.push_back(a);
        
        int foo = 10;
        while(1){
            int tmp = a/(foo/10)%10;
            if(a/(foo/10)==0)break;
            v.push_back(tmp);
            foo*=10;
        }
        
        for(int i=0; v.size()<L; i++){
            v.push_back(0);
        }
        
        bool end = false;
        while(1){
            ans.push_back(solve(v));
            for(int i=0; i<ans.size()-1; i++){
                if(ans.back() == ans[i]){
                    cout << i << " " << ans.back() << " " << ans.size()-1-i << endl;
                    end = true;
                    break;
                }
            }
            if(end)break;
            v.clear();
            
            a = ans.back();
            foo = 10;
            while(1){
                int tmp = a/(foo/10)%10;
                if(a/(foo/10)==0)break;
                v.push_back(tmp);
                foo*=10;
            }
            
            for(int i=0; v.size()<L; i++){
                v.push_back(0);
            }
        }
        
    }
    
    
    
    
    return 0;
}


