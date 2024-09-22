#include <iostream>

using namespace std;

int main()
{
    int n, n1, n2, l, lmax;
    lmax = 0;
    cin >> n1 >> n2;

    for (int i = n1; i <= n2; i++)
    {
        l = 0;
        n = i;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                n = 3 * n + 1;
            }
            l++;
            //cout << n << endl;
        }
        if (l > lmax)
        {
            lmax = l;
        }
    }

    cout << n1 <<" " << n2 <<" " << lmax + 1;
}

