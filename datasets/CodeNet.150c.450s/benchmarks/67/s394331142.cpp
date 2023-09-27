#include <iostream>

using namespace std;

int main(){
    int N;

    while(1){
        cin >> N;
        if(N==0) break;
        if(N==1){
            cout << 0 << endl;
            continue;
        }

        int c=0,sum=1;
        for(int i=2; ; i++){
            sum+=i;
            int check=N-sum;
            if(check < 0) break;
            if(check%i==0) c++;
        }
        cout << c << endl;
    }
    
    return 0;
}