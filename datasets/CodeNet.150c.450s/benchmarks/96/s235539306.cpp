#include<cstdio>

using namespace std;

int main(){
	char *dic[]={"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	int len[]={-1,5,3,3,3,3,3,4,3,4};
	int n;	scanf("%d",&n);
	while(n--){
		char s[1025];	scanf("%s",s);
		char bef='@';
		int cnt=0;
		for(int i=0;s[i];i++){
			if(s[i]=='0'){
				if(cnt>0)	putchar(dic[bef-'0'][(cnt-1)%len[bef-'0']]);
				cnt=0;
				bef='@';
			}
			else{
				cnt++;
				bef=s[i];
			}
		}
		putchar('\n');
	}
	return 0;
}