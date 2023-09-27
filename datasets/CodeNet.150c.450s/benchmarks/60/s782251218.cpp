#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>

using namespace std;
    
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <functional>
#include <cmath>
#include <iomanip>
#include <limits>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<vector<int>> vec(n);
    vector<int> SIZE;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int num;
        cin >> num;
        SIZE.push_back(num);
        for(int j = 0;j< num;j++){
            int y;
            cin >> y;
            vec[x-1].push_back(y-1) ;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            bool hantei=0;
            for(int k=0;k<SIZE[i];k++){
                
                if(vec[i][k]==j) {
                    if(j!=n-1){
                        cout << 1 <<" "; 
                        hantei = 1;
                    }else{
                        cout << 1;
                        hantei = 1;
                    }    
                }
            }
            if(hantei==0){ 
                if(j!=n-1){
                    cout <<0<<" ";
                }else{
                    cout << 0;
                }
                
            }
        }cout << endl;
    }
}



