#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A = 1.786;

    double V[] = {0.1, 0.2, 0.3, 0.4, 0.5, 1, 1.5, 2, 2.5, 3};
    int n = sizeof(V) / sizeof(V[0]);

    cout << "V\tP1\t\tP2" << endl;

    int i = 0;

    while (i < n)
    {
        double P1 = A / V[i];
        double P2 = A / pow(V[i], 1.2);

        cout << V[i] << "\t" << P1 << "\t\t" << P2 << endl;

        i++;
    }

    return 0;
}