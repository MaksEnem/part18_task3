#include <iostream>

void varik(int new_place, int var) {

	int L = 7;
	int R = 2;

	if ((new_place < 0) || (new_place > L)) {

		return;

	}
	if (new_place == L) {

		var++;

	}

	for (int i = 1; i <= R; ++i) {

		varik(new_place + i, var);

	}
	std::cout << var << " ";
}




int main()
{


	
	int new_place = 0;
	int var = 0;

	varik(new_place, var);
	
}