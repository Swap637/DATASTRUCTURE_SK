#include <iostream>
using namespace std;
int main()
{
    struct box
    {
        int length;
        int breadth;
        string name;
    };

    struct box deta;
    cout << "enter  length for box"
         << "";
    cin >> deta.length;
    cout << "enter  breadth for box"
         << "";
    cin >> deta.breadth;
    cout << "enter  name for box"
         << "";
    cin >> deta.name;

    cout << "area of a box is"
         << "" << deta.length * deta.breadth;
}