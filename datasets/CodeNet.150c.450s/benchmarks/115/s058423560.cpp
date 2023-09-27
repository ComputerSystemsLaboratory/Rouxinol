#include<iostream>
#include<string>
using namespace std;
int lcs[1001][1001];
/*int lcs(string a,string b)
{
    if(a.length()<=0||b.length()<=0)
    {
        return 0;
    }
    else if(a[a.length()-1]==b[b.length()-1])
    {
        return 1+lcs(a.substr(0,a.length()-1),b.substr(0,b.length()-1));
    }
    else
    {
        return max(lcs(a.substr(0,a.length()),b.substr(0,b.length()-1)),lcs(a.substr(0,a.length()-1),b.substr(0,b.length())));
    }
};*/
int main()
{
    int num;
    cin>>num;
    for(int l=0;l<num;l++)
    {

        for(int i=0;i<1001;i++)
            for(int j=0;j<1001;j++)
                lcs[i][j]=0;
        string a,b;
        cin>>a>>b;
        //cout<<lcs(a,b)<<endl;
        for(int i=0;i<a.length()+1;i++)
        {
            for(int j=0;j<b.length()+1;j++)
            {
                if(i==0||j==0)
                {
                    lcs[i][j]=0;
                }
                else if(a[i-1]==b[j-1])
                {
                    lcs[i][j]=lcs[i-1][j-1]+1;
                }
                else
                {
					if(lcs[i][j-1]>lcs[i-1][j])
						lcs[i][j]=lcs[i][j-1];
					else
						lcs[i][j]=lcs[i-1][j];
                }
            }
        }
        cout<<lcs[a.length()][b.length()]<<endl;
    }
}