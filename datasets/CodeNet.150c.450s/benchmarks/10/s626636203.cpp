#include <iostream>
using namespace std;
int main(void){
    
    //????????????????????°
    
    int N;
    cin >> N;
    
    //????????????????????£??¨???????????????
    
    int A[30], B[30], C[30], D[30], i = 0;
    while(true){
        A[i] = 0;
        B[i] = 0;
        C[i] = 0;
        D[i] = 0;
        if(i==29) break;
        i++;
    }
    
    //??\?±?????????????????????????
    int h, f, r, v;
    for (int i = 0; i < N; i++) {
        cin >> h >> f >> r >> v;
        
        //A?£?
        if(h == 1){
            A[(f - 1) * 10 + r - 1] += v;
        }
        
        //B?£?
        if(h == 2){
            B[(f - 1) * 10 + r - 1] += v;
        }
        
        //C?£?
        if(h == 3){
            C[(f - 1) * 10 + r - 1] += v;
        }
        
        //D?£?
        if(h == 4){
            D[(f - 1) * 10 + r - 1] += v;
        }
    }
    
    
    //??????????????¨??????????????????
    
    for(int i = 0; i < 30; i++){
        cout << " " << A[i];
        if(i % 10 == 9) cout << endl;
    }
    
    cout << "####################" << endl;
    
    for(int i = 0; i < 30; i++){
        cout << " " << B[i];
        if(i % 10 == 9) cout << endl;
    }
    
    cout << "####################" << endl;
    
    for(int i = 0; i < 30; i++){
        cout << " " << C[i];
        if(i % 10 == 9) cout << endl;
    }
    
    cout << "####################" << endl;
    
    for(int i = 0; i < 30; i++){
        cout << " " << D[i];
        if(i % 10 == 9) cout << endl;
    }
}