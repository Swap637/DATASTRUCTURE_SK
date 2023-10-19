#include <iostream>

using namespace std;
int main()
{

    char s[] = {'s', 'w', 'a', 'p', 'n', 'i', 'l'};

    int a[5];
    a[0] = 12;
    a[1] = 15;
    a[2] = 25;
    a[3] = 25;
    a[4] = 25;

    printf("%s", &s);
    cout << sizeof(a) << endl;
    cout << a[1] << endl;

        return 0;
}
