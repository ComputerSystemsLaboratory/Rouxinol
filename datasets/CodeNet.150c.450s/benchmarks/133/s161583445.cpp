#include <iostream>
using namespace std;

int main(void){
    // Your code here!
    int D;
    cin >> D;
    
    int c[27];
    int i=0;
    int j=0;
    for (i = 0; i<26; i++){
        cin >> c[i];
    }
    
    int s[D][26];
    for (i = 0; i<D;i++){
        for (j=0; j<26; j++){
            cin >> s[i][j] ;
        }
    }
    
    int t[D];
    for (i = 0; i<D; i++){
        cin >> t[i];
        t[i]--;
    }
    
    int day=0;
    int last[365][26] = {};
    long long int sat = 0;
    
    day = 0;
    last[day][t[day]] = day + 1;
    sat += s[day][t[day]];
    for (i= 0; i < 26; i++){
        sat -= c[i] * (day + 1 - last[day][i]);
    }
    cout << sat << endl;
    
    for (day = 1; day<D; day++){
        for (i = 0; i<26; i++){
            last[day][i] = last[day-1][i];
        }
        last[day][t[day]] = day + 1;
        sat += s[day][t[day]];
        
        for (i= 0; i < 26; i++){
            sat -= c[i] * (day + 1 - last[day][i]);
        }
        
        cout << sat << endl;
    }
    

}
