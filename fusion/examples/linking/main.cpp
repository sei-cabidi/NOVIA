#include <iostream>
#include "helper.h"

using namespace std;

int main(int argn, char **argc){
	if( argn < 2){
		cout << "Missing Arguments\n";
		return 1;
	}

  // Test 1: Helper function
  int x = 10;
  int y = 20;
  int z = 30;
  int xyz = add_numbers(x, y, z);

  // Test 2: Helper function inside for loop
  for (int i = 0; i < 100; i++) {
    xyz = add_numbers(x, y, z);
  }

	return 0;
}
