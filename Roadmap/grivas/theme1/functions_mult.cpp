#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

void showResult(int value) {
    cout << "Result: " << value << endl;
}

int main() {
    int a = add(10, 5);
    showResult(a);
    int b = subtract(10, 5);
    showResult(b);
}
