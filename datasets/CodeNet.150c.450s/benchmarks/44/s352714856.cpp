#include <iostream>
#include <vector>

using namespace std;

int main (int argc, char const* argv[]){
    int a1,a2,a3,a4,b1,b2,b3,b4;
    int hit=0, blow=0, input;
    vector<int> A(4), B(4);
    
    while(cin >> A[0]>> A[1]>> A[2]>> A[3]){
        cin >> B[0]>> B[1]>> B[2]>> B[3];
        
        hit=0, blow=0;
        
        //count hit 
        for(int i=0;i<4;i++){
            if(A[i]==B[i]) hit++;
        }
        //count blow
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(A[i]==B[j])blow++;
            }
        }
        blow -= hit;
        A.clear();
        B.clear();
        
        cout << hit <<" " <<blow << endl;
    }
    return 0;
}