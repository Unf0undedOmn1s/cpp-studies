// Να φτιαχτεί template κλάση Box που κρατάει οποιοδήποτε τύπο (int, double, string). Να έχει setValue και getValue.
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Box {
private:
    T value;
public:
    void setValue(T v) { value = v; }
    T getValue() { return value; }
};

int main() {
    Box<int> b1;
    b1.setValue(100);
    cout << "Box<int>: " << b1.getValue() << endl;

    Box<double> b2;
    b2.setValue(3.14);
    cout << "Box<double>: " << b2.getValue() << endl;

    Box<string> b3;
    b3.setValue("Kalimera");
    cout << "Box<string>: " << b3.getValue() << endl;

    return 0;
}
