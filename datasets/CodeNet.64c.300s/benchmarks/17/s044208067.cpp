#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    while(1){
        int x,y,s,p_a=0,p_b=0,max=0;
        cin >> x >> y >> s;
        if (x == 0) return 0;
        for (int j = 1; j <= s - 1; j++) {
            p_a = 0;
            p_b = 0;
            for (int a = 1; a<s; a++){
                if (floor(a * (double)(100.0+x)/100) == j) p_a = a;
                if (floor(a * (double)(100.0+x)/100) == s-j) p_b = a;
                if (p_a*p_b !=0) break;
            }
            if (floor(p_a * (double)(100.0+y)/100) + floor(p_b * (double)(100.0+y)/100) > max) max = floor(p_a * (double)(100.0+y)/100) + floor(p_b * (double)(100.0+y)/100);
        }
        cout << max << endl;
    }
}