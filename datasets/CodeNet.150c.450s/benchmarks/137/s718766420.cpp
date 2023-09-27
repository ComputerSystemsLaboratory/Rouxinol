#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
using namespace std;

class dictionary {

private:
	string* hashtable;
	long long table_size;
	int el_num;
	long long hash1(string);
	long long hash2(string);
	long long str_n(string);
public:
	dictionary(int n);
	void insert(string);
	bool find(string);
};
inline dictionary::dictionary(int n)
{
	hashtable= new string[n];
	if( !hashtable ){
		cout<<"Allocation Error"<<endl;
		abort();
	}

	table_size=n;
	el_num=0;
}
inline long long dictionary::hash1( string str )
{
	return str_n(str) % table_size;
}
inline long long dictionary::hash2( string str )
{
	return 1 + (str_n(str) % (table_size - 1));
}

inline long long dictionary::str_n( string str )
{

	long long str_n=0;

	for( unsigned int i=0; i<str.size(); i++ ){
		str_n = str_n * 5 + (long long)str[i] ; // str_n += (int)str[i] ?????????????????????????????????????????£???
	}

	return str_n;

/* <answer>
	long long str_n=0;
	for( unsigned int i=0, p=1; i<str.size(); i++,p*=5 ){
		switch(str[i]){
		case 'A':
			str_n += p*1;
			break;
		case 'C':
			str_n += p*2;
			break;
		case 'G':
			str_n += p*3;
			break;
		case 'T':
			str_n += p*4;
			break;
		}
	}
	return str_n;
</answer> */
}

		

inline void dictionary::insert( string str )
{
/*
	if( el_num >= table_size ){
		cout<<"????????\????????????????????????"<<endl;
		abort();
	}
	long long hash_v;
	do{
		hash_v = ( hash1(str) + hash2(str)*coltimes )%table_size ;

//		printf("I ( hash1, hash2, hash )(coltimes) = ( %d, %d, %d)(%d)\n", hash1(str), hash2(str), hash_v, coltimes );

	}while( hashtable[ hash_v ].size() && hashtable[ hash_v ]!= str, coltimes++ );
*/

	long long hash_v;

	for( int i=0; ; i++ ){
		hash_v= (hash1(str) + hash2(str)*i) % table_size;
		if( hashtable[ hash_v ] == str ){
			return;
		}else if( !hashtable[ hash_v ].size() ){
			hashtable[ hash_v ]=str;
			return;
		}
	}
}
inline bool dictionary::find( string str )
{

	long long hash_v;
	int coltimes=0;
	do{
		
		hash_v = ( hash1(str) + hash2(str)*coltimes )%table_size ;
//		printf("F ( hash1, hash2, hash )(coltimes) = ( %d, %d, %d)(%d)\n", hash1(str), hash2(str), hash_v, coltimes );

		if( hashtable[ hash_v ] == str ){
			return true;
		}

		coltimes++;

	}while( hashtable[ hash_v ].size() &&  coltimes <= table_size);


	return false;
}

int main()
{
	int n;
	scanf("%d", &n);
	char command[7], str[13];
	dictionary dic(1046527);

	for( int i=0; i<n; i++ ){
		scanf("%s %s", command, str);

		if( !strcmp(command, "insert") ){
			dic.insert(str);
		}else if ( !strcmp(command, "find") ){
			cout<<( dic.find(str)? "yes" : "no" )<<endl;
		}
	}
}