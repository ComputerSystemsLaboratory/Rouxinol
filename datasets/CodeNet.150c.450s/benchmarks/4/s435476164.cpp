#include <iostream>

using namespace std;

int main(){
        int m,f,r,score;
        while(true){
                cin >> m >> f >> r;
                score = m + f;
                if(score < 0 && r == -1) break;
                else if( m == -1 || f == -1 || score < 30) cout << "F\n";

                else if(score >= 80)    cout << "A\n";
                else if(score >= 65 && score < 80) cout << "B\n";
                else if(score >= 50 && score < 65) cout << "C\n";
                else if(score >= 30 && score < 50){
                        if(r >= 50) cout << "C\n";
                        else cout << "D\n";
                }

        }       



        return 0;
}