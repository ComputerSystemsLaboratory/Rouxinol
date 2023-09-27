// 177

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <queue>
#include <iomanip>
#include <climits>
#include <string>
#include <cmath>

using namespace std;
using ll = long long int;
#define NUM 1000000007

int main(){
    int n; 
    cin >> n;
    vector<int> v(4, 0);
    string str;
    for(int i=0; i<n; i++){
        cin >> str;
        if(str == "AC") v.at(0)++;
        if(str == "WA") v.at(1)++;
        if(str == "TLE") v.at(2)++;
        if(str == "RE") v.at(3)++;
    }
    cout << "AC x " << v.at(0) << endl;
    cout << "WA x " << v.at(1) << endl;
    cout << "TLE x " << v.at(2) << endl;
    cout << "RE x " << v.at(3) << endl;
    return 0;
}
