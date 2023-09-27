#include <iostream>

using namespace std;

int main(){
        int T1[11][4] = {};
        int T2[11][4] = {};
        int T3[11][4] = {};
        int T4[11][4] = {};

        int n,b,f,r,v;
        cin >> n;

        for(int i = 1; i <= n; i++){
                cin >> b >> f >> r >> v;

                switch (b){
                        case 1:
                                T1[r][f] += v;
                                break;

                        case 2:
                                T2[r][f] += v;
                                break;

                        case 3:
                                T3[r][f] += v;
                                break;

                        default:
                                T4[r][f] += v;
                                break;

                }
        }

        for(int i = 1; i <= 3; i++){
                for(int j = 1; j <= 10; j++){
                        cout << " " <<T1[j][i];
                }
                cout << "\n";
        }

        cout << "####################\n";

        for(int i = 1; i <= 3; i++){
                for(int j = 1; j <= 10; j++){
                        cout << " " <<T2[j][i];
                }
                cout << "\n";
        }

        cout << "####################\n";

        for(int i = 1; i <= 3; i++){
                for(int j = 1; j <= 10; j++){
                        cout << " " <<T3[j][i];
                }
                cout << "\n";
        }

        cout << "####################\n";

        for(int i = 1; i <= 3; i++){
                for(int j = 1; j <= 10; j++){
                        cout << " " <<T4[j][i];
                }
                cout << "\n";
        }
        return 0;
}