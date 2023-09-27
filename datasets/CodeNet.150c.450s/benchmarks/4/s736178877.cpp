#include<iostream>
using namespace std;

int main(){
    int m, f, r;

    while(cin>>m>>f>>r){
        if(m==-1 && f==-1 && r==-1){
            break;
        }else{
            if(m==-1 || f==-1){
                cout << "F\n";
            }else if(m+f>=80){
                cout << "A\n";
            }else if(80>m+f && m+f>=65){
                cout << "B\n";
            }else if(65>m+f && m+f>=50){
                cout << "C\n";
            }else if(50>m+f && m+f>=30){
                if(r>=50){
                    cout << "C\n";
                }else{
                    cout << "D\n";
                }
            }else{
                cout << "F\n";
            }
        }
    }
    return 0;
}