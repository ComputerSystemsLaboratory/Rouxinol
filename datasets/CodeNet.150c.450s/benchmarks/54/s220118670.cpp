#include<iostream>
#include<string>

using namespace std;

int main(){

    string W,T;
    int result=0;
    cin>>W;

    for(int j=0;j<W.length();j++)
    {
        if((int)'a'<=(int)W[j] && (int)W[j]<=(int)'z')
        {
            W[j]= W[j] - (int)'a' + (int)'A';
        }
    }

    for(int i= 0;i<1000;i++)
    {
        cin>>T;

        for(int j=0;j<T.length();j++)
        {
            if((int)'a'<=(int)T[j] && (int)T[j]<=(int)'z')
            {
                T[j]= T[j] - (int)'a' + (int)'A';
                if(T == "END_OF_TEXT")
                {
                    T = T+'.';
                }
            }
        }

        if(T == "END_OF_TEXT")break;

        if(T == W)
        {
            result++;
        }else if(T == W+ '.')
        {
            result++;
        }

    }

    cout<<result<<endl;

    return 0;
}