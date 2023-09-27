#include <iostream>
#include <string>

using namespace std;

int main() {
    int men[6];
    
    for(int i=0;i<6;i++){
        cin >> men[i];
    }

    string str;

    cin >> str;

    int len=str.size();

    int box;
    for(int j=0;j<len;j++){
        if(str[j]=='S'){
            box=men[0];
            men[0]=men[4];
            men[4]=men[5];
            men[5]=men[1];
            men[1]=box;
        }
        else if(str[j]=='N'){
            box=men[0];
            men[0]=men[1];
            men[1]=men[5];
            men[5]=men[4];
            men[4]=box;
        }
        else if(str[j]=='W'){
            box=men[0];
            men[0]=men[2];
            men[2]=men[5];
            men[5]=men[3];
            men[3]=box;
        }
        else if(str[j]=='E'){
            box=men[0];
            men[0]=men[3];
            men[3]=men[5];
            men[5]=men[2];
            men[2]=box;
        }
    }

    cout << men[0] << endl;

    return 0;
}