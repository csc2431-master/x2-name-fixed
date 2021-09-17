//
// Drive program for the Rule of 3 Example
// Author: Max Benson
// Date: 07/25/2021
//
#include <iostream>
using std::cout;
using std::endl;

#include "name.h"

int main() {
    Name name1("Anthony", "Fauci");
    Name name2(name1);
    Name name3( "David", "Duchin");

    cout << "name1 = " << name1 << endl;
    cout << "name2 = " << name2 << endl;
    cout << "name3 = " << name3 << endl;

    name3 = name1;
    cout << "After copying name1 to name3, name3 = " << name3 << endl;

    return 0;
}
