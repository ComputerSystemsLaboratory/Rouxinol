#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

const int MAXN = 21;
int dc = 0;

string dif(string a, string b)
{
    int down = 0;
    string ans = a;
    for(int i = dc -1; i > -1; i--)
    {
        if(a[i] - b[i] - down < 0)
        {
            ans[i] = (a[i] - b[i] - down + 10) + '0';
            down = 1;
        }
        else
        {
            ans[i] = (a[i] - b[i] - down ) + '0';
            down = 0;
        }
    }
    return ans;

}

int main()
{
    string in;
    while(cin >>in >> dc && dc)
    {
        string a[MAXN] = {};
        a[0] = in;
        while(a[0].size() < dc) a[0] = "0" + a[0];

        string nexta;
        REP(MAXN - 1)
        {
            string mina = a[i];
            sort(mina.begin(), mina.end());
            string maxa = mina;
            //reverse(maxa.begin(), maxa.end());
            sort(maxa.begin(), maxa.end(), greater<char>() );
            //cout <<"max:" << maxa << " min:" << mina << endl;
            a[i+1] = dif(maxa, mina);
            //cout <<i+1 << " a:" <<  a[i+1] <<endl;
        }
        

        int ansed = false;
        ///cout << "dc " << dc << endl;
        for(int i = 1; i<MAXN;i++)
        {
            if(ansed) break;
            for(int j = 0; j < i;j++)if(!ansed && a[j] == a[i])
            {
                cout << j << " "; 
                int starti = 0;
                for(starti  = 0;starti < dc ; starti++)
                {   
                    if(a[i][starti] != '0')break;
                    //cout << starti << " " << endl;
                }
                //cout << "starti " << starti << endl;

                if(starti == dc) cout << "0" ;
                else cout << a[i].substr(starti, a[i].size() - starti);

                cout << " " << i-j << endl;
                ansed = true;
            }
        }
    }

    return 0;
}