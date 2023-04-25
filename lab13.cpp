#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, s, plosha, perimeter;

    // zchytuyemo storony trykutnyka
    cout << " Vvedit dovzhynu pershoyi storony: ";
    cin >> a;
    cout << " Vvedit dovzhynu druhoyi storony: ";
    cin >> b;
    cout << " Vvedit dovzhynu tretʹoyi storony: ";
    cin >> c;

    // obchyslyuyemo ploshchu trykutnyka
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << " Odna zi storin trykutnyka dorivnyuye 0. Nemozhlyvo obchyslyty ploshchu ta perymetr.";
    }
    else if (a < 0 || b < 0 || c < 0) {
        cout << " Odna zi storin trykutnyka vidyemna. Nemozhlyvo obchyslyty ploshchu ta perymetr.";
    }
    else if (a + b <= c || b + c <= a || c + a <= b) {
        cout << " Trykutnyk ne isnuye. Nemozhlyvo obchyslyty ploshchu ta perymetr.";
    }
    else {
        perimeter = a + b + c;
        s = perimeter / 2;
        plosha = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << " Perymetr trykutnyka: " << perimeter << endl;
        cout << " Plosha trykutnyka: " << plosha << endl;
    }

    return 0;
}
