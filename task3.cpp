#include <iostream>

using namespace std;

void bl(int c)
{
    for (int i = 0; i < c; ++i) cout << "  ";
}

int n = 6;

int f(int x, int l)
{
    int r = 0;

    for (int i = 1; i < 3; ++i)
        if (x + i == n) {
            bl(l); 
            cout << i << " (ok)" << endl; 
            return ++r; 
        }
        else if (x + i < n) {
            bl(l); 
            cout << i << ' ' << endl;
            r += f(x + i, l + 1); }

    return r;
}

int main()
{

    cout << f(3, 2) << endl;

    return 0;
}