#include<bits/stdc++.h>
using namespace std;

int dele(vector<vector<int>> &st){
    int res=0;
    for(int i=0;i<st.size();i++){
        int pre=-1;
        int cnt=0;
        for(int j=0;j<=5;j++){
            if(j<5 && pre==st[i][j])
                cnt++;
            else{
                if(cnt>=3){
                    for(int r=j-cnt;r<j;r++)
                        res+=st[i][r],st[i][r]=0;
                    cnt=1;
                }
                else if(j<5){
                    pre=st[i][j];
                    cnt=1;
                }

            }


        }

    }
    return res;

}

void drop(vector<vector<int>> &st){
    for(int j=0;j<5;j++){
        int cnt=0;
        for(int i=st.size()-1;i>=0;i--){
            if(st[i][j]==0)
                cnt++;
            else{
                if(cnt>0){
                for(int r=i;r>=0;r--){
                    st[r+cnt][j]=st[r][j];
                    st[r][j]=0;
                }
                i=i+cnt;
                cnt=0;
                }
            }

        }



    }


}

int main()
{
    int h;
    while(cin>>h,h){
        vector<vector<int>> st(h,vector<int>(5));
        for(int i=0;i<h;i++)
            for(int j=0;j<5;j++){
                cin>>st[i][j];
            }
        int res=0;
        while(true){
            int sc=dele(st);
            if(sc==0)
                break;
            res+=sc;
            drop(st);

        }
        cout<<res<<endl;
    }
}
                  