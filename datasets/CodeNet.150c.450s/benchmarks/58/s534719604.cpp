#include<bits/stdc++.h>
using namespace std;
  
int popStack(stack<int>* stk){
    int ret = stk->top();
    stk->pop();
    return ret;
}
  
  
int main(){
    string s;
    getline(cin,s);
    stack<int> stk;
    for(int i = 0; i < s.size();i++){
        if(s[i] != ' '){
            if('0' <= s[i] && s[i] <= '9'){
                int val = s[i] - '0';
                i++;
                while(s[i] != ' '){
                    val *= 10;
                    val += s[i] - '0';
                    i++;
                }
                stk.push(val);
            }else{
                int val;
                switch(s[i]){
                    case '+':
                        val = popStack(&stk) + popStack(&stk);      
                        break;
                    case '-':
                        val = popStack(&stk);
                        val = popStack(&stk) - val;
                        break;
                    case '*':
                        val = popStack(&stk) * popStack(&stk);
                        break;
                    case '/':
                        val = popStack(&stk);
                        val = popStack(&stk) / val;
                        break;
                }
                stk.push(val);
            }
        }
    }
    cout << stk.top() << endl;
    return 0;
}
