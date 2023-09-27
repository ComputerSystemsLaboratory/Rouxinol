#include <cstdio>
#include <stack>

std::stack<int> st;

int main()
{
  char ch[10];
  while( scanf( "%s", ch ) != EOF )
    {
        if( *ch >= '0' && *ch <= '9' )
        {
            int p;
            sscanf( ch, "%d", &p );

            st.push( p );
        }
        else
        {
            int a = st.top(); st.pop();
            int b = st.top(); st.pop();

            st.push( *ch=='+'?b+a:*ch=='-'?b-a:b*a );
        }
    }

    printf( "%d\n", st.top() );

    return 0;
}