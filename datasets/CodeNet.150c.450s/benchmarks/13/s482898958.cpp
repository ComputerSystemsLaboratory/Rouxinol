#include<iostream>
using namespace std;

int main(){
        string s,p;
        int s_num = 0;
        int p_num = 0;
        bool discover =false;
        getline(cin,s);
        getline(cin,p);
        string s_search = s+s;
        //cout <<s_search << endl;
        for(int i = 0; i < s_search.length();i++){
                if(s_search[i]==p[0]){
                        for(int j =0; j < p.length();j++){
                                if(s_search[i+j] != p[j]){
                                        break;
                                }else if(j == p.length() -1&&s_search[i+j]== p[j]){
                                        cout << "Yes" << endl;
                                        discover = true;
                                }
                        }

                }
                if(discover == true)break;
        }
        if(discover == false)cout << "No" <<endl;

}
