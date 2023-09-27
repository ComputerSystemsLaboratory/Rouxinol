#include<iostream>
#include<set>
#include<string>
#include<cassert>
 
struct Meirei{
    std::string mei;
    std::string str;
};
/*

struct Node{
	Node(){
		umu=false;
		a=NULL;
		c=NULL;
		g=NULL;
		t=NULL;
	}
	~Node(){
		if(a)delete a;
		if(c)delete c;
		if(g)delete g;
		if(t)delete t;
//		std::cout << "a::" << a << ",g::" << g << ",c::" << c << ",t::" << t << std::endl;
	}
	bool umu;
	Node* a,*c,*g,*t;//?????°???????????°????????????????????????????????§?????????????????°????????????
};
class Tree
{
public:
	Tree(){
		m_root=new Node();
	}
	~Tree(){
		delete m_root;
	}
	void insert(std::string moji);
	bool find(std::string moji);
	
private:
	Node* m_root;
};

void Tree::insert(std::string moji)
{
//	m_root=new Node();
	Node* node = m_root;
	for(int i =0; i < moji.size(); i++){
		if(moji[i]=='A'){
			if(node->a == NULL)	node->a = new Node();
			node = node->a;
		}else if(moji[i]=='C'){
			if(node->c == NULL)	node->c = new Node();
			node = node->c;
		}else if(moji[i]=='G'){
			if(node->g == NULL) node->g = new Node();
			node = node->g;
		}else if(moji[i]=='T'){
			if(node->t == NULL)	node->t = new Node();
			node = node->t;
		}else {
			assert(true);
		}
	}
	node->umu=true;
}
//---------------------------------
bool Tree::find(std::string moji)
{
	Node* node = m_root;
	for(int i =0; i < moji.size(); i++){
		if(moji[i]=='A'){
			if(node->a == NULL)	return false;
			node = node->a;
		}else if(moji[i]=='C'){
			if(node->c == NULL)	return false;
			node = node->c;
		}else if(moji[i]=='G'){
			if(node->g == NULL)	return false;
			node = node->g;
		}else if(moji[i]=='T'){
			if(node->t == NULL)	return false;
			node = node->t;
		}else {
			assert(true);
		}
	}
	if(node->umu)return true;
	return false;
}
*/
//typedef std::vector<MEIREI> VecMeirei;
//typedef std::vector<std::string> WORDS;
//typedef std::vector<bool> ARINASHI;
//void input();
//bool find(WORDS jisho, std::string str);
void output(bool result);
//-------------------------------------------------------------------
int main()
{
    long n;
    std::cin >> n;
    std::set<std::string> st;
	for(int i=0; i<n; i++){
		std::string meirei;
	    std::cin >> meirei;
		std::string moji;
		std::cin >> moji;
		if(meirei=="insert"){
		    st.insert(moji);
	    }else if(meirei=="find"){
	     	output(st.find(moji)!=st.end());
	    }
	}
    return 0;
}
//-------------------------------------------------------------------
void output(bool result)
{
    if(result){
        std::cout << "yes" << std::endl;
    }else{
        std::cout << "no" << std::endl;
    }
    return;
}
//-------------------------------------------------------------------