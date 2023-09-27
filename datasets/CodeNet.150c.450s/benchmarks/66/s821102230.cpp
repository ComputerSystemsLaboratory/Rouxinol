#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){
        int i,j,n,m;
        string input;
        bool door = true, user_search;

        cin >> n;
        vector<string> id(n);
        for(i = 0; i < n; i++){
                cin >> id[i];
        }   

        cin >> m;
        for(i = 0; i < m; i++){
                user_search = false;
                cin >> input;
                for(j = 0; j < n; j++){
                        if(input == id[j]){
                                if(door){
                                        cout << "Opened by " << input << endl;
                                        door = !door;
                                }else{
                                        cout << "Closed by " << input << endl;
                                        door = !door;
                                }   
                                user_search = true;
                        }   
                }   
                if(!user_search){
                        cout << "Unknown " << input << endl;
                }   
        }   
        return 0;
}