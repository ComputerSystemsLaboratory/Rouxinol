/*
 * AOJDataConversation.cxx
 * 
 * Copyright 2016 Tom Tanaka <torumu@Tom-no-MacBook-Pro.local>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
	while(true){
	std::vector<int> bef;
	std::vector<int> aft;
	int n;
	std::cin >> n;
	if(n==0){
		break;
	}
	for(int i = 0; i < n; i++){
		char input;
		std::cin >> input;
		bef.push_back(input);
		std::cin >> input;
		aft.push_back(input);
	}
	std::cin >> n;
	for(int i = 0; i < n; i++){
		char input;
		std::cin >> input;
		for(int j = 0; j < bef.size(); j++){
			if(input == bef[j]){
				input = aft[j];
				break;
			}
		}
		std::cout << input;
	}
	std::cout << std::endl;
	}
	return 0;
}