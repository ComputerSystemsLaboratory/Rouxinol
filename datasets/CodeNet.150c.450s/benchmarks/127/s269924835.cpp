#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int ra[4]={0,1,0,1};
int rb[4]={0,0,1,1};

void rev(string& to, string& from){
    char rstr[73];
    for(unsigned int i=0; i<from.length(); i++){
        rstr[i] = from[from.length()-i-1];
    }
    rstr[from.length()] = 0;
    to = rstr;
}

int main(){
    int n;
    cin >> n;
   
    for(int i=0; i<n; i++){
        string str,rstr;
        cin >> str;
        rev(rstr, str);
        unordered_set<string> train;
        train.insert(str);
        train.insert(rstr);
        
        for(unsigned int j=1; j<str.length(); j++){
            string subA[2],subB[2];
            subA[0] = str.substr(0,j);
            subB[0] = str.substr(j,str.length()-j);
            rev(subA[1], subA[0]);
            rev(subB[1], subB[0]);
            for(int r=1; r<4; r++){
                train.insert(subA[ra[r]]+subB[rb[r]]);
            }
            for(int r=0; r<3; r++){
                train.insert(subB[rb[r]]+subA[ra[r]]);
            }
        }
        cout << train.size() << endl;
    }
    return 0;
}