#include<iostream>
using namespace std;

int main(){
    int N,n;
    int s[13] = {},h[13] = {},c[13] = {},d[13] = {};
    char mark;
    
    cin >> N;
    for(int i = 1;i<=N;i++){
        cin >> mark >> n;
        switch(mark){
            case 'S':
                    s[n-1] = 1;
                    break;
            case 'H':
                    h[n-1] = 1;
                    break;
            case 'C':
                    c[n-1] = 1;
                    break;
            case 'D':
                    d[n-1] = 1;
                    break;
        }
    }
    for(int i = 1;i<=13;i++){
        if(s[i-1] == 0) cout << "S" << " " << i <<endl;
    }
    for(int i = 1;i<=13;i++){
        if(h[i-1] == 0) cout << "H" << " " << i <<endl;
    }
    for(int i = 1;i<=13;i++){
        if(c[i-1] == 0) cout << "C" << " " << i <<endl;
    }
    for(int i = 1;i<=13;i++){
        if(d[i-1] == 0) cout << "D" << " " << i <<endl;
    }

}