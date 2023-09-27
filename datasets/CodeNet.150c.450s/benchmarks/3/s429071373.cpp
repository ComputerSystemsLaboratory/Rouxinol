#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    string word,command,x;
    int n,a,z;
    cin>>word>>n;

    for(int i=0; i<n; i++)
    {
        cin>>command;

        if(command =="replace")
        {
            cin>>a>>z>>x;
            for(int i=a;i<z+1;i++)
            {
                word[i]=x[i-a];
            }
            continue;
        }
        if(command == "reverse")
        {
            cin>>a>>z;
            for(int i=a,j=0;j<(z-a+1)/2;j++)
            {
                int temp = word[i+j];
                word[i+j]=word[z-j];
                word[z-j]=temp;
            }
            continue;
        }
        if(command == "print")
        {
            cin>>a>>z;
            for(int i=a;i<z+1;i++)
            {
               cout<<word[i];
            }
            cout<<'\n';
            continue;
        }
    }

    return 0;
}

