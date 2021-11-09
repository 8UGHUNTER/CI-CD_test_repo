#include <iostream>
#include <fstream>
#include "calc_module.h"

using namespace std;

int main()
{

	float input[5] = {0, -1, 5, 1.5, 3.14};
	float output[5] = {0, -3.14, 15.7, 4.71, 9.8596};
	ofstream result;
	result.open("Result_of_testing");
	for(int i = 0; i < 5; i++)
	{
		result << "Test " << i+1;
		if(output[i] == pi_count(input[i]))
			result << " true\n";
		else
			result << " false\n";
	}
	result.close();
}
