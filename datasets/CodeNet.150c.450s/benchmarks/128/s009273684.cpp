#include<cstdio>
#include<iostream>
using namespace std;
class ReverseSequence{ 
    public:
        void solve(string str){ 
            int n=str.size();
            for(int i=n-1;i>=0;i--){ 
                printf("%c",str[i]);
            }
            printf("\n");
        }
};
int main(){ 
    string str;
    cin>>str;
    ReverseSequence inst;
    inst.solve(str);
}