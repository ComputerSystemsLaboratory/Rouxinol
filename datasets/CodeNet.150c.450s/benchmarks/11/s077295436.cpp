#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,i;
    cin >> n;

    bool S[13],H[13],C[13],D[13];
    for(i=0;i<13;i++){
        S[i] = false;
    }
    for(i=0;i<13;i++){
        H[i] = false;
    }
    for(i=0;i<13;i++){
        C[i] = false;
    }
    for(i=0;i<13;i++){
        D[i] = false;
    }

    string s;
    int x;

    for(i=0;i<n;i++){
        cin >> s >> x;
        if(s == "S"){
           S[x-1] = true; 
        }
        else if(s == "H"){
           H[x-1] = true; 
        }
        else if(s == "C"){
           C[x-1] = true; 
        }
        else{
           D[x-1] = true; 
        }
    }
    
    for(i=0;i<13;i++){
        if(S[i] == false){
            cout << "S " << (i+1) << endl;
        }
    }
    for(i=0;i<13;i++){
        if(H[i] == false){
            cout << "H " << (i+1) << endl;
        }
    }
    for(i=0;i<13;i++){
        if(C[i] == false){
            cout << "C " << (i+1) << endl;
        }
    }
    for(i=0;i<13;i++){
        if(D[i] == false){
            cout << "D " << (i+1) << endl;
        }
    }
    return 0;
}

