#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// B

int getKeta(int n){
    int res = 1;
    while( n > 9 ){
        n /= 10;
        res++;
    }
    return res;
}

string itoa(int n){
    string res;
    if( n == 0 ) return "0";
    while( n > 0 ){
        res += string(1, n % 10 + '0');
        n /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main(){
    int a0, L, i;
    map<string, int> mm;

    while( cin >> a0 >> L, a0 | L ){
        mm.clear();
        // a0の桁数
        int k = L - getKeta(a0);
        string s = string(k, '0') + itoa(a0);
        
        string minS, maxS;
        
        mm[s] = 0;
        for(i=1; i<30; i++){
            sort(s.begin(), s.end());
            minS = s;
            sort(s.rbegin(), s.rend());
            maxS = s;

            int tmp = atoi(maxS.c_str()) - atoi(minS.c_str());
            s = string(L - getKeta(tmp), '0') + itoa(tmp);
            //cout << i << " : " << maxS << " - " << minS << " = " << s << endl;
            if( mm.count(s) ) break;
            mm[s] = i;
            
        }

        cout << mm[s] << " " << atoi(s.c_str()) << " " << (i - mm[s]) <<  endl;
    }
    
    return 0;
}