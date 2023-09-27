#include <iostream>
using namespace std;

int main(){

    int N;  
    cin >> N ;
    int AC=0,WA=0,TLE=0,RE=0;
    string C;
    for(int i = 0;i < N;i++){
        cin >> C;
        if(C.find("AC")!=std::string::npos){
            AC++;
        }else if(C.find("WA")!=std::string::npos){
            WA++;
        }else if(C.find("TLE")!=std::string::npos){
            TLE++;
        }else if(C.find("RE")!=std::string::npos){
            RE++;
        }
    }

    cout << "AC" << " x " << AC << endl;
    cout << "WA" << " x " << WA << endl;
    cout << "TLE" << " x " << TLE << endl;
    cout << "RE" << " x " << RE << endl;


}