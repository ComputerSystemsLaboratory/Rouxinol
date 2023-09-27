#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    string s3(s1 + s1);
    if((int)s3.find(s2)!=-1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
    
    

