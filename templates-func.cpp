// Να φτιαχτεί template function maximum που επιστρέφει το μεγαλύτερο από 2 δεδομένα (int, double, string).

#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max int: " << maximum(5, 10) << endl;
    cout << "Max double: " << maximum(5.5, 2.3) << endl;
    cout << "Max string: " << maximum(string("apple"), string("banana")) << endl;
    return 0;
}
