
#include <iostream>

using namespace std;

int main()
{
    unsigned int n, p, d,l;
    bool pierwsza;
    cout << "Podaj n ";
    cin >> n;
    p = 2;
    l = 0;

    while ( l < n)
    {
        pierwsza = true;
        for (d = 2; d < p; d++)
        {
            if (p % d == 0)
            {
                pierwsza = false;
                break;
            }
        }

        if (pierwsza)
        {
            cout << p << " ";
            cout << endl;
            l++;
        }
        p++;
    }

    return 0;
}
