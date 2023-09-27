#include <iostream>
#include <cstdio>
using namespace std;
int main(void){
    int n;
    int hh,mm,ss,st,en,t;
    int time[86401];
    char ch;
    while(1){
        cin >> n;
        if(n == 0)  break;
        for(int j = 0; j < 86400; j++){
            time[j] = 0;
        }
        for(int i = 0; i < n; i++){
            cin >> hh >> ch >> mm >> ch >> ss;
            st = hh * 3600 + mm * 60 + ss;
            cin >> hh >> ch >> mm >> ch >> ss;
            en = hh * 3600 + mm * 60 + ss;
            for(int j = st; j < en; j++){
                time[j]++;
            }
        }
        
        int maxt = 0;
        for(int i = 0; i < 86400; i++){
            if(maxt < time[i])  maxt = time[i];
        }
        
        cout << maxt << endl;
        
    }
    
    return 0;
}

