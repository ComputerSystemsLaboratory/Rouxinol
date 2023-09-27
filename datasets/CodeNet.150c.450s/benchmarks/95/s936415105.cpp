#include<iostream>


using namespace std;

int main(){
    int N;
    cin>>N;
    while (N!=0)
    {
            int ans=0;
        bool l=false,r=false,up=false;

        for (int i = 0; i < N; i++)
        {
            string S;
            cin>>S;
            if(S=="ru")r=true;
            else if(S=="lu")l=true;
            else if(S=="rd")r=false;
            else if(S=="ld")l=false;

            if(r && l && !up){
                ans++;
                up=true;
            }

            if (!r&&!l&&up)
            {
                ans++;
                up=false;
            }
            
        }
        
        cout<<ans<<endl;
        cin>>N;
    }
    
}
