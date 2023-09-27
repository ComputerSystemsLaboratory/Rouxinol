#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	string bs[10]={
		"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",
	};
	
	int tc; scanf("%d",&tc);
	while(tc--){
		char s[1025]; scanf("%s",s);
		int n=strlen(s);
		for(int i=0,j;i<n;i=j+1){
			string& b=bs[s[i]-'0'];
			for(j=i;j<n && s[j]>'0';j++);
			if(j==i) continue;
			putchar(b[(j-1-i)%b.size()]);
		}
		puts("");
	}
	
	return 0;
}