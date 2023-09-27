#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <vector>


using namespace std;

int main(){

    char c;

    int i = 0;
    int j, buffer;

    int S = 0;

    stack<int> st;
    stack< pair< int , int > > separated_S;

    //??¢????????????

    while( scanf("%c", &c) > 0 ){

        if( c == '\\' ){  

            st.push(i) ;

        }else if( c == '/' && st.size() > 0){

            j = st.top();
            st.pop();
            S += i - j;
            buffer = i - j;

            while(  separated_S.size() > 0 &&  separated_S.top().first > j   ){

                buffer += separated_S.top().second ;
                separated_S.pop();

            }

            separated_S.push( make_pair( j , buffer) );

        }

        i++;

    } 

    printf("%d\n", S);
    printf("%d", separated_S.size() );

    int size = separated_S.size();

    int a[ size ];
 
    for( i = size - 1 ; i >= 0 ; i-- ){

        a[i] = separated_S.top().second;
        separated_S.pop();

    }

    for( i = 0; i < size ; i++ ){

        printf(" ");

        printf("%d", a[i]);

    }

    printf("\n");

    return 0;

}