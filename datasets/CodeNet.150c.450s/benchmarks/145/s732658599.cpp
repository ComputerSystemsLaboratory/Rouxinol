#include<iostream>
#include<map>
using namespace std;

int main(void){


    string str,ans1,ans2;
    map<string,int> dict;
    int maxi = 0;
    while(cin >> str){
        if(maxi < str.size()){
            maxi = str.size();
            ans1 = str;
        }
        dict[str]++;
        int count = 0;
        map<string,int>::iterator itr;
        for(itr = dict.begin();itr != dict.end();itr++){
            if(count < (*itr).second){
                ans2 = (*itr).first;
                count = (*itr).second;
            }
        }
    }
    cout << ans2 << " " << ans1 << endl;
    return 0;
}

