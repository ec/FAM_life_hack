#include <iomanip>
#include <iostream>
#include <cmath>
#include <ostream>
#include <fstream>
#include <string>
#include <cstring>
#include "Header.h"


using namespace std;
int main() {

	
	const int n = 28;
	student students[n];
	dataenter(&students[0], n);
	for (int i = 0; i<n;i++)
		if (strstr(students[i].email,"@ukr.net") > 0)
			dataout(&students[0], i);
	return 0;

}