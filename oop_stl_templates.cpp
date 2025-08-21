#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// Template class για αντικείμενα
template <class T>
class Item {
private:
    int id;
    T title;
public:
    Item(int i, T t) : id(i), title(t) {}
    int getId() const { return id; }
    T getTitle() const { return title; }
};

// Κλάση Βιβλιοθήκη
class Library {
private:
    vector<Item<string>> books;
    map<string, string> loans; // student -> book
public:
    void addItem(int id, string title) {
        books.push_back(Item<string>(id, title));
    }

    void listItems() {
        cout << "📚 Διαθέσιμα βιβλία:\n";
        for (auto &b : books) {
            cout << "- [" << b.getId() << "] " << b.getTitle() << endl;
        }
    }

    void loanBook(string student, string title) {
        loans[student] = title;
    }

    void listLoans() {
        cout << "📖 Δανεισμοί:\n";
        for (auto &l : loans) {
            cout << l.first << " -> " << l.second << endl;
        }
    }

    // Friend function για να βλέπει πόσα βιβλία υπάρχουν
    friend void countBooks(Library &lib);
};

// Friend function
void countBooks(Library &lib) {
    cout << "📊 Συνολικός αριθμός βιβλίων: " << lib.books.size() << endl;
}

// Main
int main() {
    Library lib;

    // Προσθήκη βιβλίων
    lib.addItem(1, "C++ Programming");
    lib.addItem(2, "Data Structures");
    lib.addItem(3, "Algorithms");

    lib.listItems();

    // Δανεισμός
    lib.loanBook("Nikos", "C++ Programming");
    lib.loanBook("Maria", "Algorithms");

    lib.listLoans();

    // Χρήση friend function
    countBooks(lib);

    return 0;
}
