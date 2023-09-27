#include<cstdio>
#include<stack>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

int main(){
    int sum=0;
    stack<int>S1;
    stack< pair<int,int> >S2;
    char ch[20000];
    scanf("%s", ch);
    for(int i=0;i<strlen(ch);i++){
        if(ch[i] == '\\'){
            S1.push(i);
        }else if(ch[i] == '/'&&S1.size()>0){
            int j=S1.top();S1.pop();
            int a =i-j;
            sum+=a;
            while(S2.size()>0&&S2.top().first>j){
                a+=S2.top().second;S2.pop();
            }
            S2.push(make_pair(j,a));
        }
    }
    
    vector<int> A;
    printf("%d\n", sum);
    while(S2.size()>0){
        A.push_back(S2.top().second);
        S2.pop();
    }
    reverse(A.begin(),A.end());
    printf("%d", A.size());
    
    for(int i=0;i<A.size();i++){
        printf(" %d",A[i]);
    }
    printf("\n");
    
}
