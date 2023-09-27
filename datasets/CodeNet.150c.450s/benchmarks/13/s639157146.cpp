#include <iostream>
#include <string>
using namespace std;

struct CharNode{
    CharNode(char inputChar){
        c = inputChar;
    }
    char c;
    CharNode* next;
};

int main(int argc, char **argv)
{
	string target;
    getline(cin,target);
    
    CharNode* head;
    CharNode* cur;
    CharNode* pre;
    
    head = new CharNode(target[0]);
    cur = head;
    pre = head;
    
    for(int i =1;i<target.length();i++){
        cur = new CharNode(target[i]);
        pre->next = cur;
        pre = cur;
    }
    cur->next = head;
    cur = head;
    pre = cur;
    /*
    for(int i =0;i<target.length();i++){
        cout<<cur->c<<endl;
        cur=cur->next;
    }
     * */
     
    
    string s;
    getline(cin,s);
    bool hasMatched = false;
    // start comparison
    for(int i =0;i<target.length()&&!hasMatched;i++){
        int lengthMatched = 0;
            for(int j = 0;j<s.length();j++){
                //cout<<"Current: "<<cur->c<<endl;
                //cout<<"Compare char:"<<s[j]<<endl;
                int tempCur = cur->c;
                int tempCom = s[j];
                //cout<<"Value of TempCur"<<tempCur<<endl;
                //cout<<"Value of TempCom"<<tempCom<<endl;
                if(tempCur==tempCom){
                     lengthMatched++;
                     if(lengthMatched == s.length()){
                         hasMatched = true;
                         break;
                     }
                     cur = cur->next;
                 }else{
                     break;
                 }
                 
             }
             pre = pre->next;
             cur = pre;
     }
    
    if(hasMatched){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
	return 0;
}