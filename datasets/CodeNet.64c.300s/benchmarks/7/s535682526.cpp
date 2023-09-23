#include <iostream>

using namespace std;

int main(){

        int n,num;
        char kind;
        int S[14] = {};
        int H[14] = {};
        int C[14] = {};
        int D[14] = {};

        cin >> n;

        for(int i = 1; i <= n; i++){
                cin >> kind >> num;

                switch(kind){
                        case 'S':
                                S[num] = 1;
                                break;

                        case 'H':
                                H[num] = 1;
                                break;

                        case 'C':
                                C[num] = 1;
                                break;

                        default:
                                D[num] = 1;
                                break;

                }
        }

        for(int i = 1; i <= 13; i++)
                if(S[i] == 0) cout << "S " << i << "\n";

        for(int i = 1; i <= 13; i++)
                if(H[i] == 0) cout << "H " << i << "\n";


        for(int i = 1; i <= 13; i++)
                if(C[i] == 0) cout << "C " << i << "\n";

        for(int i = 1; i <= 13; i++){
                if(D[i] == 0){
                        cout << "D " << i << "\n";
                }
        }
        return 0;
}