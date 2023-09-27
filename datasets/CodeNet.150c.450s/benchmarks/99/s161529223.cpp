#include <bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin>>n;
    string s1,s2;
    for (int i=0;i<n;i++) {
        int num_s1=0,num_s2=0;
        cin>>s1;
        for (int j=0;j<s1.size();j++) {
            char c=s1.at(j);
            if (c=='m'||c=='c'||c=='x'||c=='i') {
                if (c=='m') {
                    num_s1+=1000;
                } else if (c=='c') {
                    num_s1+=100;
                } else if (c=='x') {
                    num_s1+=10;
                } else if (c=='i') {
                    num_s1+=1;
                }
            } else {
                int tmp=c-48;
                char next=s1.at(j+1);
                if (next=='m') {
                    num_s1+=tmp*1000;
                } else if (next=='c') {
                    num_s1+=tmp*100;
                } else if (next=='x') {
                    num_s1+=tmp*10;
                } else if (next=='i') {
                    num_s1+=tmp*1;
                }
                j++;
            }
        }
        //cout<<num_s1<<endl;
        cin>>s2;
        for (int k=0;k<s2.size();k++) {
            char c2=s2.at(k);
            if (c2=='m'||c2=='c'||c2=='x'||c2=='i') {
                if (c2=='m') {
                    num_s2+=1000;
                } else if (c2=='c') {
                    num_s2+=100;
                } else if (c2=='x') {
                    num_s2+=10;
                } else if (c2=='i') {
                    num_s2+=1;
                }
            } else {
                int tmp2=c2-48;
                char next2=s2.at(k+1);
                if (next2=='m') {
                    num_s2+=tmp2*1000;
                } else if (next2=='c') {
                    num_s2+=tmp2*100;
                } else if (next2=='x') {
                    num_s2+=tmp2*10;
                } else if (next2=='i') {
                    num_s2+=tmp2*1;
                }
                k++;
            }
        }
        //cout<<num_s2<<endl;
        int sum=num_s1+num_s2;
        if (sum/1000!=0) {
            if (sum/1000!=1) {
                cout<<sum/1000<<"m";
            } else {
                cout<<"m";
            }
        }
        if ( (sum%1000)/100!=0 ) {
            if ( (sum%1000)/100!=1 ) {
                cout<<(sum%1000)/100<<"c";
            } else {
                cout<<"c";
            }
        }
        if ( ((sum%1000)%100)/10!=0 ) {
            if ( ((sum%1000)%100)/10!=1 ) {
                cout<<((sum%1000)%100)/10<<"x";
            } else {
                cout<<"x";
            }
        }
        if ( ((sum%1000)%100)%10!=0 ) {
            if ( ((sum%1000)%100)%10!=1 ) {
                cout<<((sum%1000)%100)%10<<"i";
            } else {
                cout<<"i";
            }
        }
        cout<<endl;
    }
}

