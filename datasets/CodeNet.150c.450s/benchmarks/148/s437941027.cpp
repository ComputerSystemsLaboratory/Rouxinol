#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <set>
#include <map>
#include <iterator>
#include <stack>
#include <string.h>
#include <cstdlib>
#include <queue>
#include <list>
#include <string>

using namespace std;

int main()
{
    int N;
    string s;
    int c[4] = {0};
    
    cin >> N;
    for (int i = 0;i < N;i++){
        cin >> s;
        if (s[0] == 'A'){
            c[0]++;
        }
        else if (s[0] == 'W'){
            c[1]++;
        }
        else if (s[0] == 'T'){
            c[2]++;
        }
        else{
            c[3]++;
        }
    }
    
    cout << "AC" << " " << "x" << " " << c[0] << endl;
    cout << "WA" << " " <<  "x" << " " << c[1] << endl;
    cout << "TLE" << " " <<  "x" << " " << c[2] << endl;
    cout << "RE" << " " <<  "x" << " " << c[3] << endl;
    
}
