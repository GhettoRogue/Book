#ifndef UNTITLED20_BOOK_H
#define UNTITLED20_BOOK_H

#include <string>

#include "Author.h"

using namespace std;

class Book {
private:
    Author *author;
    string name_of_book;
    string publisher;
    int year_of_publishing;

public:
    Book() {}

    Book(Author *author, const string &nameOfBook, const string &publisher, int yearOfPublishing) : author(author),
                                                                                                    name_of_book(
                                                                                                            nameOfBook),
                                                                                                    publisher(
                                                                                                            publisher),
                                                                                                    year_of_publishing(
                                                                                                            yearOfPublishing) {}

    Author *GetAuthor() const {
        return author;
    }

    const string &GetNameOfBook() const {
        return name_of_book;
    }

    const string &GetPublisher() const {
        return publisher;
    }

    int GetYearOfPublishing() const {
        return year_of_publishing;
    }

    void PrintBook() {
        cout << "\nTitle: " << name_of_book << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Year of publishing: " << year_of_publishing << endl;
    }
};

#endif //UNTITLED20_BOOK_H
