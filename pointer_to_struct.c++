#include <iostream>
#include <stdio.h>

using namespace std;

struct bodata
{
    int length;
    int breath;
};
int main()
{
    // in c++ its  okk if u dont write struct before variabke cretion
    // but in 'c' u have to give it

    bodata r = {10, 20};
    bodata *p = &r;
    // if i wann change the data inside structure

    (*p).length = 100; // hard way to access it
    p->breath = 200;   // easy way to access it
    cout << r.length * r.breath << "\n  dynamic object data \t";

    // dynamic object

    p = (struct bodata *)malloc(sizeof(struct bodata));
    p->breath = 145;
    p->length = 150;
    cout << p->breath * p->length;
}