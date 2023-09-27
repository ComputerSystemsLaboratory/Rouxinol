#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int CreateKeta(int keta){
	int i;
	int Output = 1;
	for(i = 0 ; i < keta ; i++)
		Output *= 10;

	return Output;
}

int main(){
	stack<int> st;
	int k;
	int i,j;
	int keta;
	int result;
	bool IsNum = false;
	char c;
	while(scanf("%c", &c) != EOF)
	{
		if(c == '\n')
		{
			break;
		}
		else if(c == ' ')
		{
			IsNum = false;
		}
		else if(c == '+') /* ?¶??????? */
		{
			i = st.top();
			st.pop();
			j = st.top();
			st.pop();
			result = i + j;
			st.push(result);

		}
		else if ( c == '-') /* ????????? */
		{
			i = st.top();
			st.pop();
			j = st.top();
			st.pop();
			result = j - i;
			st.push(result);

		} 
		else if ( c == '*') /* ????????? */
		{
			i = st.top();
			st.pop();
			j = st.top();
			st.pop();
			result = i * j;
			st.push(result);

		}
		else /* ??°??? */
		{
			k = (int)(c - '0');
			if (IsNum)
			{
				i = st.top();
				st.pop();
				k = (i * 10) + k;
				st.push(k);

			} else
			{
			st.push(k);
			IsNum = true;
			}
		}
	}
	cout << st.top() << endl;
}