#include <iostream>
#include <string>

using namespace std;

int main(){

        string s,p,tmp = "";
        cin >> s;
        cin >> p;
        if(s.find(p) != string::npos){
                cout << "Yes\n";
                return 0;
        }

        for(int i = 1; i <= p.length(); i++){
                for(int j = (s.length() - i); j < (s.length() + p.length() - i); j++){
                        if(j < s.length()){
                                tmp.append(1,s.at(j));
                        }
                        else{
                                tmp.append(1,s.at(j - s.length()));
                        }


                }
                if(p.compare(tmp) == 0){
                        cout << "Yes\n";
                        return 0;
                }
                else tmp.erase(tmp.begin(),tmp.end());

        }

        cout << "No\n";

        return 0;
}