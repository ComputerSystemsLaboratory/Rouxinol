#include <iostream>
#include <vector> 
#include <cmath>
#include <algorithm>
#include <set>
#include <map>
#include <cerrno>
#include <cfenv>
#include <math.h>
#include <iomanip>
#include <limits>
#define ll long long int

using namespace std;

int main(){

    int m,n_min,n_max;
    vector<int> data(200);

    while(true){

        cin >> m >> n_min >> n_max;

        if(m==0&&n_min==0&&n_max==0){
            break;
        }

        for(int i=0;i<m;i++){
            cin >> data[i];
        }

        vector<pair<int,int> > ans(200);

        int cnt=0;

        for(int i=n_min;i<=n_max;i++){
            ans[cnt] = make_pair(data[i-1]-data[i],i);;
            cnt++;
        }


        int max = ans[0].first;
        int max_num = ans[0].second;

        for(int i=1;i<n_max-n_min+1;i++){
            //cout << ans[i].first << " " << ans[i].second << endl;
            if(max<=ans[i].first){
                //cout << i << endl;
                max = ans[i].first;
                max_num = ans[i].second;
            }
        }

        cout << max_num << endl;

    }

    /*5 2 4
    100
    90
    80
    75
    65 */

    return 0;
}
