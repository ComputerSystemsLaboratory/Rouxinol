#include <stdio.h>

#include <string.h>

#include <stack>

#include <iostream>


using namespace std;

int main(){
    
    int input;
    stack<int> train;
    while (scanf("%d",&input)!=EOF) {
//        scanf("%d",&input);
        if (input!=0)train.push(input);
        else {
            printf("%d\n",train.top());
            train.pop();
        }
    }
}
    //        if(strcmp(c,pu) == 0){
    //
    //            scanf("%s",&color);
    //
    //            st.push(color);
    //
    //        }
    //
    //        if(strcmp(c,po) == 0){
    //
    //            cout<<st.top()<<endl;
    //
    //            st.pop();
    //
    //        }
    //
    //        if(strcmp(c,qu) == 0){
    //
    //            return 0;
    //
    //        }
    //
    //    }
    
    //}