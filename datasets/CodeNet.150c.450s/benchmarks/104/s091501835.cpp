//0011 Drawing Lots
//¢íÉ­¶ðø±¤I
//cüÌ{wA¡{Ì{hª^¦çêA
//ã©çÉhÂÌ¡üÌêª^¦çê½Æ«A±Ì¡üðÊßµ½Æ«ÌcüÌÔð¦æ
//È¨¡üÌîñÍA¡üªcüÌÊua,bÆÂÈªÁÄ¢éÆ·éÆA"a,b"Å\³êé
//w <= 30, h <= 30ª½³êéÆ·é

#include<iostream>
#include<algorithm>
using namespace std;

int main(void)
{
	const int N = 30;
	int w, h;
	int i;
	int a, b;

	int amida[N+1];	//âèÍ1©çnßÄ¢é©ç í¹é©@0ÈñÄÈ©Á½

	cin >> w >> h;

	//¡üªÈ¢Æ«Ìóµ
	for(i = 1; i <= w; i++)
		amida[i] = i;

	for(i = 0; i < h; i++)
	{
		//','ª´êÄ¢éÌÅòÎµÜµå¤
		char dummy;
		cin >> a >> dummy >> b;
		//¡üª éÆA½ÎÉÈèÜ·
		swap(amida[a], amida[b]);
	}
	
	for(i = 1; i <= w; i++)
	{
		cout << amida[i] << endl;
	}

	return 0;
}