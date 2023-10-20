// POINTER USE FOR PARAMETER PASSING
// IT USE FOR ACCESSING HEAP MEMORY  WHICH IS OUTSIDE THE CODE
// EX:-  KEYBOARD,MOUSE,INTERNET

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct student
{
    int rollno;
    char name;
};

using namespace std;
int main()
{
    // what ever the datattype bytes always be the same
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct student *p6;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;

    cout << sizeof(p6) << endl;
}