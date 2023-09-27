#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

int main()
{
    vector<vector<int> > tetra(2);
    for(int i = 1; (i * (i + 1) * (i + 2)) / 6 < 1000001; i++){
        tetra[0].push_back((i * (i + 1) * (i + 2)) / 6);
        tetra[((i * (i + 1) * (i + 2)) / 6) % 2].push_back((i * (i + 1) * (i + 2)) / 6);
    }
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < tetra[i].size(); j++){
    //         cout << tetra[i][j] << endl;
    //     }
    //     cout << endl;
    // }
    int result[1000001][2];
    for(int i = 0; i < 1000001; i++){
        for(int j = 0; j < 2; j++){
            result[i][j] = 1000001;
        }
    }
    result[0][0] = 0;
    result[0][1] = 0;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < tetra[i].size(); j++){
            for(int k = 0; k + tetra[i][j] < 1000001; k++){
                result[k + tetra[i][j]][i] = min(result[k + tetra[i][j]][i], result[k][i] + 1);
            }
        }
    }
    int n;
    while(1){
        cin >> n;
        if(n == 0)break;
        cout << result[n][0] << " " << result[n][1] << endl;
    }
    return 0;
}