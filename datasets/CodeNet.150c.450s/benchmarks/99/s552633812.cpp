#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int n;

int toint(string &m){
    int j=1;
    int sum=0;
    for(int i=0;i<m.size();i++){
        if(m[i]=='m' ){
            sum += j*1000;
            j=1;
        }else if(m[i]=='c'){
            sum += j * 100;
            j=1;
        }else if(m[i]=='x'){
            sum += j * 10;
            j=1;
        }else if(m[i]=='i'){
            sum += j;
            j=1;
        }
        else{
            j = m[i] -48;
        }
    }
    return sum;
}

void tostr(int mi){
    while(mi != 0){
        if(mi/1000 >= 1){
            int t = mi/1000;
            if(mi/1000 == 1){
                printf("m");
            }else{
            
                printf("%c",t+48);
                printf("m");
            }
            mi -= t*1000;
        }else if(mi/100 >= 1){
            int t = mi/100;
            if(mi/100 == 1){
                printf("c");
            }else{
            
                printf("%c",t+48);
                printf("c");
            }
            mi -= t*100;
        }else if(mi/10 >= 1){
            int t = mi/10;
            if(mi/10 == 1){
                printf("x");
            }else{
            
                printf("%c",t+48);
                printf("x");
            }
            mi -= t*10;
        }else if(mi >= 1){
            int t = mi;
            if(mi == 1){
                printf("i");
            }else{
                printf("%c",t+48);
                printf("i");
            }
            mi -= t;
        }
    }
    
    puts("");

    return ;
}

int main(){
    string m1,m2;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m1 >> m2;
        int mi1 = toint(m1);
        //cout << mi1 << endl;
        int mi2 = toint(m2);
        //cout << mi2 << endl;
        tostr(mi1+mi2);

    }
}
