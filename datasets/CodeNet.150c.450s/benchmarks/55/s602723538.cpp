#include <iostream>
#include<cstdio>
#include <cstring>
using namespace std;
 
int main()
{
	char num[1001];

	while(1){
		scanf("%s",num);//%s??????????????¨????????\??????????????¨?????¨???
		if(num[0] == '0') break;
		int s=0;

		for(int i=0;i<strlen(num);i++){//strlen??????????????????????????????????????´??????
			s += num[i] - '0';//??¢????????????????????§num?????????????????°??????????????????s????¶????
		}
		printf("%d\n",s);
	}

    return 0;
}