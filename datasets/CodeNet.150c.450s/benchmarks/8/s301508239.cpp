#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1, str2;

    int n;
    int a=0,b=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> str1 >> str2;
        if(str1>str2)a+=3;
        else if(str1<str2)b+=3;
        else{
            a++;b++;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}
