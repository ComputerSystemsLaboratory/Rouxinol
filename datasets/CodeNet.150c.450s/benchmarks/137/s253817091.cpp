#include<map>
#include<iostream>
#include<string>
using namespace std;
int main(){
    int num;
    cin >> num;
     
    map<string,int> dic;
     
    for(int i=0;i<num;i++){
        string process,key;
         
        cin >> process >> key;
         
        if(process[0]=='i'){
            dic[key]=1;
        }else{
            if(dic[key]==0){
                cout << "no" << endl;
            }else{
                cout << "yes" << endl;
            }
        }
    }
}