#include<iostream>
#include<stdio.h>
#include<string>
#include<cctype>
using namespace std;
   int counter[30];
int main(){
    char mozi;
    while( cin >>mozi){
            if (mozi=='\n')break;
            mozi = tolower( mozi);
        int num = mozi -'a';
        if(num<=25&&num>=0)counter[num]++;
    }
    cout << "a : " << counter[0] << endl;
    cout << "b : " << counter[1] << "\n";
    cout << "c : " << counter[2] << "\n";
    cout << "d : " << counter[3] << "\n";
    cout << "e : " << counter[4] << "\n";
    cout << "f : " << counter[5] << "\n";
    cout << "g : " << counter[6] << "\n";
    cout << "h : " << counter[7] << "\n";
    cout << "i : " << counter[8] << "\n";
    cout << "j : " << counter[9] << "\n";
    cout << "k : " << counter[10] << "\n";
    cout << "l : " << counter[11] << "\n";
    cout << "m : " << counter[12] << "\n";
    cout << "n : " << counter[13] << "\n";
    cout << "o : " << counter[14] << "\n";
    cout << "p : " << counter[15] << "\n";
    cout << "q : " << counter[16] << "\n";
    cout << "r : " << counter[17] << "\n";
    cout << "s : " << counter[18] << "\n";
    cout << "t : " << counter[19] << "\n";
    cout << "u : " << counter[20] << "\n";
    cout << "v : " << counter[21] << "\n";
    cout << "w : " << counter[22] << "\n";
    cout << "x : " << counter[23] << "\n";
    cout << "y : " << counter[24] << "\n";
    cout << "z : " << counter[25] << "\n";
return 0 ;
}