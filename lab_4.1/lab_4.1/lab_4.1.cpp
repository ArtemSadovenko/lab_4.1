#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    int k;
    double s = 0;
    int n = 15;

    cout << "k = "; cin >> k;

    i = k;

    while (i <= n) {
        s += cos(i) / (1.0 + pow(sin(i), 2));
        i++;
    }
    cout << s << endl;
    s = 0;
    i = k;

    do {
        s += cos(i) / (1.0 + pow(sin(i), 2));
        i++;
    } while (i <= n);
    cout << s << endl;

    s = 0;
    for (i = k; i <= n; i++) {
        s += cos(i) / (1.0 + pow(sin(i), 2));
    }
    cout << s << endl;
    s = 0;

    for (i = n; i >= k; i--) {
        s += cos(i) / (1.0 + pow(sin(i), 2));
    }
    cout << s << endl;

    return 0;
}


