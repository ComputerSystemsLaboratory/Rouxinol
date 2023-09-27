#include <iostream>
#include <vector>
#include <queue>

//幅優先探索
class Point{
private:
  int x;//x座標
  int y;//y座標
  int depth;//深さ

public:
  Point(int a,int b);
  int GetXpoint();
  int GetYpoint();
  int GetDepth();
  std::vector<Point> make_offspring(int x_limit,int y_limit,std::vector<Point> exception);

};

void search();

std::vector<Point> get_exception(int exception_num);//通行できない点を求める。

int get_root_num(int x_limit,int y_limit,std::vector<Point> exception);//通学経路の個数を求める。

bool judge_point(int depth1,int depth2);//深さでその点が目的地かどうかを判断する。

Point::Point(int a,int b){
  this->x= a;
  this->y=b;
  this->depth=a+b-2;
}

int Point::GetXpoint(){
  return this->x;
}

int Point::GetYpoint(){
  return this->y;
}

int Point::GetDepth(){
  return this->depth;
}

std::vector<Point> Point::make_offspring(int x_limit,int y_limit,std::vector<Point> exception){
  std::vector<Point> offsprings;
  if(x_limit>= (this->x+1)){
    Point tmp= Point(this->x+1,this->y);
    bool flag = true;
    for(Point tmp1:exception){
      if(tmp1.GetXpoint()==tmp.GetXpoint() &&tmp1.GetYpoint()==tmp.GetYpoint()){
        flag = false;
        break;
      }
    }
    if(flag == true){
      offsprings.push_back(tmp);
    }
  //  std::cout<<this->x<<","<<this->y<<" x  "<<tmp.GetXpoint()<<","<<tmp.GetYpoint();
  }

  if(y_limit>=(this->y+1)){
    Point tmp= Point(this->x,this->y+1);
    bool flag = true;
    for(Point tmp1: exception){
      if(tmp1.GetXpoint()==tmp.GetXpoint() &&tmp1.GetYpoint()==tmp.GetYpoint()){
        flag = false;
        break;
      }
    }
    if(flag == true){
      offsprings.push_back(tmp);
    }
  //  std::cout<<"  y  "<<tmp.GetXpoint()<<" "<<tmp.GetYpoint()<<std::endl;
  }

  return offsprings;
}

void search(){
  int x_limit,y_limit;//x座標,y座標の上限

  while(std::cin >> x_limit >> y_limit && x_limit!=0 && y_limit!=0){
    int exception_num;
    std::cin >> exception_num;
    std::vector<Point> exception = get_exception(exception_num);
    std::cout << get_root_num(x_limit,y_limit,exception)<<std::endl;
  }
}

std::vector<Point> get_exception(int exception_num){
  std::vector<Point> exception;
  for(int i = 0;i< exception_num;i++){
    int x,y;
    std::cin>>x>>y;
    Point tmp=Point(x,y);
    exception.push_back(tmp);
  }

  return exception;
}

int get_root_num(int x_limit,int y_limit,std::vector<Point> exception){
  std::queue<Point> que;
  int num=0;
  Point start = Point(1,1),end=Point(x_limit,y_limit);
  que.push(start);
  while(que.empty() != true){
    Point tmp = que.front();
    que.pop();
    if(judge_point(tmp.GetDepth(),end.GetDepth() ) ){
      //std::cout<<num+1<<" "<<tmp.GetXpoint()<<" "<<tmp.GetYpoint()<<std::endl;
      num ++ ;
    }else{
      std::vector<Point> offsprings = tmp.make_offspring(x_limit,y_limit,exception);
      if(!offsprings.empty()){
        for(Point tmp_child:offsprings){
          que.push(tmp_child);
        }
      }
    }
  }
  return num;
}

bool judge_point(int depth1,int depth2){
  if(depth1== depth2){
    return true;
  }
  return false;
}

int main(void){
  search();
  return 0;
}

