// Να αποθηκευτούν ζευγάρια <string,int> σε map με ονόματα φοιτητών και βαθμούς. Να εμφανιστούν με for(auto ...).
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> grades;

    grades["Maria"] = 9;
    grades["Nikos"] = 7;
    grades["Eleni"] = 10;

    cout << "Βαθμοί φοιτητών:\n";
    for (auto const &pair : grades) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
