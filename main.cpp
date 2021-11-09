#include <iostream>
#include "calc_module.h"

using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number" << endl;
    cin >> a;
    cout << "Enter second number" << endl;
    cin >> b;
    cout << pi_count(a+b-2) << endl;
}
