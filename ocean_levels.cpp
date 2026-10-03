/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    const double ANNUAL_RATE = 1.5;

    const int YEARS_5 = 5;
    const int YEARS_7 = 7;
    const int YEARS_10 = 10;

    double increase5years;
    double increase7years;
    double increase10years;

    increase5years = ANNUAL_RATE * YEARS_5;
    increase7years = ANNUAL_RATE * YEARS_7;
    increase10years = ANNUAL_RATE * YEARS_10;

    cout << "Ocean level after 5 years: " << increase5years << " mm" << endl;
    cout << "Ocean level after 7 years: " << increase7years << " mm" << endl;
    cout << "Ocean level after 10 years: " << increase10years << " mm" << endl;

    return 0;
}