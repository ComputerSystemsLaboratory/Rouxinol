#include <iostream>
#include <vector>
int main(){
    using namespace std;
    int m,f,r,i;
    char a;
    vector<char> v;
    while(1){
        cin >> m >> f >> r;
        if(m==-1&&f==-1&&r==-1){
            break;
        }else if(m==-1||f==-1){
            a = 'F';
        }else if(m+f>=80){
            a ='A';
        }else if(m+f>=65&&m+f<80){
            a = 'B';
        }else if(m+f>=50&&m+f<65){
            a = 'C';
        }else if(m+f>=30&&m+f<50){
            if(r>=50){
                a = 'C';
            }else{
                a = 'D';
            }
        }else{
            a = 'F';
        }
        v.push_back(a);
    }
    for(i=0;i<v.size();i++){
        cout << v[i] << endl;
    }
    return 0;
}