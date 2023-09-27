#include <algorithm>
#include <cctype>
#include <cstdio>
#include <iostream>
#include <locale>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

string solve(string s){
    int count=0;
    string ans;
    char keep;
    string keeps;
    char c='0';
    for(int i=0;i<s.size();i++){
        // char k=s[i];
        if(s[i]!='0'){
            count++;
            c=s[i];
        }
        else{
            if(count!=0){
                if(c== '2'){
                    if(count%3==1)ans.append(1,'a');
                    else if(count%3==2)ans.append(1,'b');
                    else ans.append(1,'c');
                }
                else if(c== '3'){
                    if(count%3==1)ans.append(1,'d');
                    else if(count%3==2)ans.append(1,'e');
                    else ans.append(1,'f');
                }
                else if(c== '4'){
                    if(count%3==1)ans.append(1,'g');
                    else if(count%3==2)ans.append(1,'h');
                    else ans.append(1,'i');
                }
                else if(c== '5'){
                    if(count%3==1)ans.append(1,'j');
                    else if(count%3==2)ans.append(1,'k');
                    else ans.append(1,'l');
                }
                else if(c== '6'){
                    if(count%3==1)ans.append(1,'m');
                    else if(count%3==2)ans.append(1,'n');
                    else ans.append(1,'o');
                }
                else if(c== '7'){
                    if(count%4==1)ans.append(1,'p');
                    else if(count%4==2)ans.append(1,'q');
                    else if(count%4==3)ans.append(1,'r');
                    else ans.append(1,'s');
                }
                else if(c== '8'){
                    if(count%3==1)ans.append(1,'t');
                    else if(count%3==2)ans.append(1,'u');
                    else ans.append(1,'v');
                }
                else if(c== '9'){
                    if(count%4==1)ans.append(1,'w');
                    else if(count%4==2)ans.append(1,'x');
                    else if(count%4==3)ans.append(1,'y');
                    else ans.append(1,'z');
                }
                else if(c== '1'){
                    if(count%5==1)ans.append(1,'.');
                    else if(count%5==2)ans.append(1,',');
                    else if(count%5==3)ans.append(1,'!');
                    else if(count%5==4)ans.append(1,'?');
                    else ans.append(1,' ');
                }
                count=0;
            }
        }
    }
    // cout << ans << "%%%%%%%%%%%%%%%%"<<endl;
    return ans;
}

int main(int argc, char const *argv[]) {
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    vector<string>ans;
    for(int i=0;i<n;i++){
        cin >> s;
        ans.push_back(solve(s));
    }
    for(int i=0;i<n;i++){
        cout << ans[i]<<endl;
    }
}
