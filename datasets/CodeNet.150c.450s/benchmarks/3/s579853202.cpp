#include<iostream>
#include<string>
using namespace std;

int main(){
    string target;
    int num;
    cin >> target;
    cin >> num;
    
    string com;
    for(int i =0; i<num; i++){
        cin >> com;
        if(com=="print"){
            int st,en;
            cin >> st >> en ;
            cout << target.substr(st,en-st+1) << endl;
        }
        else if (com=="replace"){
            int st,en;
            string str;
            cin >> st >> en >> str;
            target=target.replace(st,en-st+1,str);
        }else{
            int st,en;
            cin >> st >> en;
            string tmp =target.substr(st,en-st+1);
            int n =tmp.size();
            for (int i =0;i<n;i++) target[i+st]=tmp[n-i-1];
        }
    }
    return 0;
    
}
