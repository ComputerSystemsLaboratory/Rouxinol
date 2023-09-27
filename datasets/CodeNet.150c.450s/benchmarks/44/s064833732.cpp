#include<iostream>
using namespace std;

int main(){
    int a[5];

    while(cin >>a[1]>>a[2]>>a[3]>>a[4]){
        int b[5], hit=0, blow=0;
        cin >>b[1]>>b[2]>>b[3]>>b[4];
        for(int i=1; i<6; i++){
            for(int j=1; j<6; j++){
                if(a[i] == b[j]){
                    blow++;
                    if(i == j){
                        blow--;
                        hit++;
                    }
                }
            }
        }
        cout << hit << ' ' << blow << endl;
    }

    return 0;
}