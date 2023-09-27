/*http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_D&lang=jp*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct area_data{
    int n;
    int area;
};

int main(){
    stack<int> down;
    stack<struct area_data> st;

    for(int n=0;cin.peek()!='\n';n++){
        char s;
        cin>>s;
        if(s=='\\'){
            down.push(n);
        }else if(s=='/' && !down.empty()){
            struct area_data tmp={down.top(),0};
            while (!st.empty() && tmp.n< st.top().n){
                tmp.area+= st.top().area;
                st.pop();
            }
            tmp.area += n - tmp.n;
            st.push(tmp);
            down.pop();
        }
    }
    int areas=0;
    vector<int> output;
    while(!st.empty()){
        output.insert(output.begin(), st.top().area);
        areas+=output[0];
        st.pop();
    }
    cout<< areas <<endl;
    cout<<output.size();
    for(int i:output){
        cout<<" "<<i;
    }
    cout<<endl;
    return 0;
}