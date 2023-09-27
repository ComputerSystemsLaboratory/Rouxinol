//0029 English Sentence
//pêÌ¶ÍÅo»·éPêðÇÝæèAo»pxªÅà¢PêÆAàÁÆà·¢PêðoÍµÄI¹¹æ
//üÍf[^ÍAAt@xbgÆXy[XÌÝªÜÜêé
//¶ÍÌ¶Í1000¶ÈºÅA1PêÌ·³Í32¶ÈºÅ·
//Ü½Ao»pxªÅà¢PêÆÅà·¢PêÍA»ê¼ê¶ÉêÂµ©¶ÝµÈ¢

#include<iostream>
#include<string>
#include<map>
#include<limits>
#include<algorithm>
using namespace std;

int main(void)
{
	typedef map<string, int> Map;
	Map m;
	string str;
	Map::iterator s;
	int maxSize = numeric_limits<int>::min();
	while( cin >> str)
	{
		m[str]++;
		if( maxSize < (int)str.size())
		{
			maxSize = str.size();
			s = m.find(str);
		}
	}
	
	Map::iterator mode = m.begin();
	for(map<string, int>::iterator ite = m.begin();
		ite != m.end();
		++ite)
	{
		if(mode->second < ite->second)
			mode = ite;
	}
	cout << mode->first << ' ' << s->first << endl;
	return 0;
}