#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter how many numbers to sum: ";
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        float num;
        cout << "Enter number" << i << ": ";
        cin >> num;
        sum=sum+num;
    }
    cout << "Total sum is:" << sum << endl;
    return 0;
}
