#include<bits/stdc++.h>
using namespace std;

int main(){
    int w,h;
    while(1){
        cin>>w>>h;  if(w==0)break;
        char tile[h][w];    //タテｘヨコ
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++)cin>>tile[i][j];
        }
//        for(int i=0;i<h;i++){
//            for(int j=0;j<w;j++)cout<<tile[i][j]<<" ";
//            cout<<endl;
//        }

        int ans=1;

        for(int a=0;a<w*h;a++){

            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){

                    if(tile[i][j]=='@'){
                        tile[i][j]='#';

                        if(j<w-1 && tile[i][j+1]=='.'){
                            ans++;
                            tile[i][j+1]='@';
                        }
                        if(j>0 && tile[i][j-1]=='.'){
                            ans++;
                            tile[i][j-1]='@';
                        }
                        if(i<h-1 && tile[i+1][j]=='.'){
                            ans++;
                            tile[i+1][j]='@';
                        }
                        if(i>0 && tile[i-1][j]=='.'){
                            ans++;
                            tile[i-1][j]='@';
                        }

//                        for(int b=0;b<h;b++){
//                            for(int c=0;c<w;c++)cout<<tile[b][c];
//                            cout<<endl;
//                        }
//                        cout<<endl;
                        break;

                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

