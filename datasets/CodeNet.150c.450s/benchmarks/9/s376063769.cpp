#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){

        string str;
        int endPoint,cPoint;
        cin >> str;

        while(true){
                if(str == "-")break;
                cin >> endPoint;
                for(int i = 1; i <= endPoint; i++){
                        cin >> cPoint;
                        str += str.substr(0,cPoint);
                        str.erase(0,cPoint);
                }
                cout << str << endl;
                str.erase(str.begin(),str.end());
                cin >> str;

        }       
        return 0;
}