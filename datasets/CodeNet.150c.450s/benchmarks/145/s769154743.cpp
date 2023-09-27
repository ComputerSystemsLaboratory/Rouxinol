#include<iostream>
#include<string.h>

using namespace std;

int main(void)
{
	char word[1000][32];
	char tmp[32];
	int length[1000];
	int freq[1000]={0};
	int maxlen=0;
	int maxfreq=0;
	int wordnum=0;
	while(cin>>tmp)
	{
		int i;
		for(i=0;i<wordnum;i++)
		{
			if(strcmp(word[i],tmp)==0)
			{
				break;
			}
		}
		strcpy(word[i],tmp);
		wordnum++;
		freq[i]++;
		length[i]=0;
		for(int j=0;word[i][j]!='\0';j++)
		{
			length[i]++;
		}
		if(freq[maxfreq]<freq[i])
		{
			maxfreq=i;
		}
		if(length[maxlen]<length[i])
		{
			maxlen=i;
		}
	}
	cout<<word[maxfreq]<<" "<<word[maxlen]<<endl;
}