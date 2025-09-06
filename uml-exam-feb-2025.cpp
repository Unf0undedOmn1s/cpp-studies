/*
### Class Author
| Attribute | Type   |
|-----------|--------|
| - name    | string |

| Method                           | Return |
|----------------------------------|--------|
| + Author(name: string)           | ctor   |
| + addBook(bookTitle: string)     | void   |
| + getName()                      | string |
| + displayBooks()                 | void   |

---

### Class Book
| Attribute | Type   |
|-----------|--------|
| - title   | string |
| - price   | float  |

| Method                                 | Return |
|----------------------------------------|--------|
| + Book(title: string, price: float)    | ctor   |
| + displayInfo()                        | void   |
*/

/*
Books by Bjarne Stroustrup:
Title: A Tour of C++ Price: 37.99
Title: Programming: Principles and Practice Using C++ Price: 67.21
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Book {
private:
    string title;
    float price;
public:
    Book(const string& title_, float price_) : title(title_), price(price_) {}
    string getTitle() const { return title; }
    float getPrice() const { return price; }
    void displayInfo() const {
        cout << "Title: " << title << " Price: " << price << endl;
    }
};

class Author {
private:
    string name;
    vector<Book*> books; // αποθηκεύουμε pointers όπως στο main του φακέλου
public:
    Author(const string& name_) : name(name_) {}
    string getName() const { return name; }

    void addBook(Book* b) {
        books.push_back(b);
    }

    void displayBooks() const {
        cout << "Books by " << name << ":" << endl;
        for (Book* b : books) {
            if (b) b->displayInfo();
        }
    }

    // ΣΗΜΕΙΩΣΗ: Δεν κάνουμε delete των book pointers εδώ,
    // γιατί στο exam/main τα delete κάνουνε μετά το author.
    // Σε πραγματική εφαρμογή θα πρέπει να ξεκαθαρίζουμε ιδιοκτησίες.
};

int main() {
    Author author("Bjarne Stroustrup");
    Book* book1 = new Book("A Tour of C++", 37.99f);
    Book* book2 = new Book("Programming: Principles and Practice Using C++", 67.21f);
    author.addBook(book1);
    author.addBook(book2);
    author.displayBooks();

    // στο exam αυτό ακολουθεί delete (όπως δίνεται)
    delete book1;
    delete book2;

    return 0;
}
