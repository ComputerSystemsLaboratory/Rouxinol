#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>

using namespace std;

const int INF = (1<<30) - 1;


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    int N;
    while(cin>>N, N){
        int cnt = 0;
        for(int s=1; s<=N/2; s++){
            int i = s;
            int sum = 0;
            while(sum<N){
                sum += i++;
            }
            cnt += sum==N;
        }
        cout << cnt << endl;
    }
    
    return 0;
}