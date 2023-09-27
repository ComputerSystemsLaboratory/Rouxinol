#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
 
void print_preorder
(const vector<pair<int, int> >& nodes, const vector<int>& node_val, const int r)
{
  if(r<0) return;
  cout << ' ' << node_val[r];
  print_preorder(nodes, node_val, nodes[r].first);
  print_preorder(nodes, node_val, nodes[r].second);
}
  
void print_inorder
(const vector<pair<int, int> >& nodes,  const vector<int>& node_val, const int r)
{
  if(r<0) return;
  print_inorder(nodes, node_val, nodes[r].first);
  cout << ' ' << node_val[r];
  print_inorder(nodes, node_val, nodes[r].second);
}
    
  
void print_postorder
(const vector<pair<int, int> >& nodes, const int r, int geta, bool& first_print)
{
  if(r<0) return;
  print_postorder(nodes, nodes[r].first, geta, first_print);
  print_postorder(nodes, nodes[r].second, geta, first_print);
   
  cout << (first_print ? "": " ")  << (r+geta);
  first_print = false;
}
  
int main(){
  std::ios_base::sync_with_stdio(false);
  
  int n, r=-1, h=0;
  cin >> n;
  vector<pair<int, int> > nodes(n);
  vector<int> node_val(n, 0);
   
  
  for(int i=0; i<n; ++i){
    string inst;
    cin >> inst;
    if(inst[0] == 'p'){ //print
      print_inorder(nodes, node_val, r);
      cout << endl;
      print_preorder(nodes, node_val, r);
      cout << endl;
    }
    else if(inst[0] == 'i'){
      int v;
      cin >> v;
       
      if (h == 0) {
	r = h;
	node_val[h] = v;
	nodes[h].first = nodes[h].second = -1;
	++h;
	continue;
      }
 
      //h>0, r>=0
      node_val[h] = v;
      nodes[h].first = nodes[h].second = -1;
       
      int* p = &r;
      while(*p >= 0){
	if(node_val[*p] > node_val[h]){
	  p = &(nodes[*p].first);
	}
	else{
	  p = &(nodes[*p].second);
	}
      }
       
      //*p < 0
      *p = h;
      ++h;
    }
    else if(inst[0] == 'f'){
      //cout << "f" << endl;
      int v;
      cin >> v;

      int* p =&r;
      bool found = false;
      while(*p >= 0){
	// cout << "---" << endl;
	// cout << "p: " << *p << ", "
	//      << "fst: " << nodes[*p].first << ", "
	//      << "snd: " << nodes[*p].second << ", "
	//      << endl;
	// cout << "v: " << v << endl;
	// cout << "val[*p]: " << node_val[*p] << endl;
	if(node_val[*p] == v){
	  found = true;
	  break;
	}
	if(node_val[*p] > v){
	  p = &(nodes[*p].first);
	}
	else if(node_val[*p] < v){
	  p = &(nodes[*p].second);
	}
      }
      cout << (found ? "yes" : "no") << endl;
    }
    else{
      cout << "?" << endl;
    }
  }
  return 0;
}