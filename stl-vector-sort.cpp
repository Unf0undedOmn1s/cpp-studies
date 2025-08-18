// Να διαβάζονται 5 ακέραιοι, να αποθηκεύονται σε vector<int>, να ταξινομούνται με sort() και να εμφανίζονται με for_each.
#include <iostream>
#include <vector>
#include <algorithm> // για sort, for_each
using namespace std;

int main() {
    vector<int> numbers;
    int n;

    cout << "Δώσε 5 αριθμούς: \n";
    for (int i = 0; i < 5; i++) {
        cin >> n;
        numbers.push_back(n);
    }

    sort(numbers.begin(), numbers.end());

    cout << "Ταξινομημένοι αριθμοί: ";
    for_each(numbers.begin(), numbers.end(), [](int x){ cout << x << " "; });
    cout << endl;

    return 0;
}
