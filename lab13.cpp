#include <iostream>
#include <cmath>

using namespace std;

double calculate_y(double x) {
    if (x <= 2)
    {
        throw "x poza zonoy oblasti vyznachennya funktsiyi";
    }
    double y = 3 * sqrt(x - 2);
    y /= abs(2 + sqrt(x + 3));
    return y;
}

int main() {
    double x;
    cout << "Vvedit znachennya x: ";
    cin >> x;
    try {
        double y = calculate_y(x);
        cout << "Znachennya y ye: " << y << endl;
    }
    catch (const char* msg) {
        cerr << "Pomylka: " << msg << endl;
    }
    return 0;
}