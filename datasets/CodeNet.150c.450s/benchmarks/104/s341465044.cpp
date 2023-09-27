#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){
    int line[40]={};
    int linenum;
    int change;
    cin>>linenum>>change;
    for(int i=1; i<linenum+1; i++){
        line[i]=i;
    }
    int sw,ap;
    char waste;
    for(int i=0; i<change; i++){
        cin>>sw>>waste>>ap;
        swap(line[sw],line[ap]);
    }
    for(int i=1; i<linenum+1; i++){
        cout<<line[i]<<endl;
    }
    return 0;
}