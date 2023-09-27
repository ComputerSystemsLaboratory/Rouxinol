#include <iostream>
#include <math.h>
using namespace std;
int main(void){
    int n, student[1000]={}, diff, tmp_diff;
    while(1){
        cin >> n;
        if(n==0) break;
        
        diff=1000000;
        for(int i=0;i<n; i++){
            cin >> student[i];
        }
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                tmp_diff=abs(student[i]-student[j]);
                if(tmp_diff < diff){
                    diff = tmp_diff;
                }
            }
        }
        cout << diff << endl;
    }
}

