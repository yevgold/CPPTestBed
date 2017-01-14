//
//  main.cpp
//  CPPTestBed
//
//  Created by Yevgeniy Goldenberg on 1/12/17.
//  Copyright © 2017 Yevgeniy Goldenberg. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main() {
	
	ifstream arq("input.txt");
	cin.rdbuf(arq.rdbuf());
	
	// Add code here to read from cin
}
