#include <stdio.h>
#include <iostream>
#include <stdio.h>

using namespace std;
//   |
int main() //   |
{          //   |
    int a = 10;
    int &r = a;        // refrence name
    cout << r << "\n"; // need of ref    ,this use in param pass  

    r++;
    cout << r;
}