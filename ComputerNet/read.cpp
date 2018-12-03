#include "read.h"
#include<fstream>

void ReadFile(int chart[][100], int length)
{
	int  i, j;
	ifstream r("route.txt");
	if (r.is_open()) {
		for (i = 0; i < length; i++)
			for (j = 0; j < length; j++)
				r >> chart[i][j];
		r.close();
	}
}