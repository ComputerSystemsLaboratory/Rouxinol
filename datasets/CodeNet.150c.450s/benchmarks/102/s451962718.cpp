#include<iostream>
#include<vector>
#include<queue>
#include<string>


int main(){
    std::vector<int> tiles;
    std::queue<int> unvisited_tile_q;
    int width, height, counter, pos;
    std::string line;

    while(true){
        std::cin >> width >> height;
        if( width == 0 && height == 0 ) break;
        tiles.resize(width*height);
        pos = 0;
        for( int h = 0; h < height; h++ ){
            std::cin >> line;
            for(std::string::iterator it = line.begin(); it != line.end(); ++it) {
                switch(*it){
                    case '#':
                        tiles[pos] = 0;
                        break;
                    case '@':
                        unvisited_tile_q.push(pos);
                    case '.':
                        tiles[pos] = 1;
                }
                pos++;
            }
        }

        counter = 0;
        while( !unvisited_tile_q.empty() ){
            pos = unvisited_tile_q.front();
            unvisited_tile_q.pop();
            if( tiles[pos] == 1 ){
                counter++;
                tiles[pos] = -1;
            } else continue;
            //left
            if ( pos - 1 >= 0 && pos % width > 0 && tiles[pos-1] == 1 ) unvisited_tile_q.push(pos-1); 
             //right
            if ( pos + 1 <= tiles.size() && pos % width < width - 1 && tiles[pos+1] == 1 ) unvisited_tile_q.push(pos+1);
            //up
            if ( pos - width >= 0 && tiles[pos-width] == 1 ) unvisited_tile_q.push(pos-width);
            //down
            if ( pos + width < tiles.size() && tiles[pos+width] == 1 ) unvisited_tile_q.push(pos+width);
        }
	    //output result
	    std::cout << counter << std::endl;
    }   
    return 0;
}
