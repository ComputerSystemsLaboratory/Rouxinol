#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main(void){
    int dictionaly_size;
    while(true){
        cin >> dictionaly_size;
        if(dictionaly_size == 0){
            break;
        }
        map<char, char> change;
        for(int i = 0; i < dictionaly_size; i++){
            char key, value;
            cin >> key >> value;
            change[key] = value;    
        }

        int word_count;
        cin >> word_count;
        string words(word_count, ' ');
        //cout << words.size();
        
        char tmp;
        for( string::iterator itr = words.begin(); itr != words.end(); itr++){
            cin >> tmp;
            map<char, char>::iterator itr_m = change.find(tmp);
            if( itr_m != change.end() ){
             *itr = itr_m->second;
            }else{
                *itr = tmp;
            }

        }
        cout << words << endl;
    }
    return 0;
}
