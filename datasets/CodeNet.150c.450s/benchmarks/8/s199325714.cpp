#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <typeinfo>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){


    int n, t_score, h_score;
    t_score = 0;
    h_score = 0;
    cin >> n;
    vector<string> taro(n);
    vector<string> hana(n);

    for(int i=0; i<n; i++){
        cin >> taro[i] >> hana[i];
    }

    for(int i=0; i<n; i++){
        string t = taro[i];
        string h = hana[i];
        transform(t.begin(), t.end(), t.begin(), ::tolower);
        transform(h.begin(), h.end(), h.begin(), ::tolower);
        int len = max(t.size(), h.size());
        if(t==h){
            t_score += 1;
            h_score += 1;
        }else{
            for(int j=0; j<len; j++){
                if(int(t[j]) < int(h[j])){
                    h_score += 3;
                    break;
                }else if(int(t[j]) > int(h[j])){
                    t_score += 3;
                    break;
                }
            }
        }

    }

    cout << t_score << " " << h_score << endl;


    return 0;
}

