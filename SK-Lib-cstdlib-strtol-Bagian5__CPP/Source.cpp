#include <cstdlib>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main(){
    char* end;

    cout << "22abcd" << " to Long Int with base-6 = " << strtol("  22abcd", &end, 6) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "114cd" << " to Long Int with base-2 = " << strtol("   114cd", &end, 2) << endl;
    cout << "End String = " << end << endl << endl;

    cout << "e10.79" << " to Long Int with base-10 = " << strtol("e10.79", &end, 10) << endl;

    cout << "End String = " << end << endl << endl;

    _getch();
    return 0;
}