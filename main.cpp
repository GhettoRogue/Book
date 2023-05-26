#include <iostream>

#include "Author.h"
#include "Book.h"

using namespace std;

int main() {

    Author* author=new Author("Fyodor", "Mikhailovich", "Dostoevsky", 1821, 1881);
    author->PrintAuthor();

    Book* book=new Book(book->GetAuthor(), "Crime and Punishment", "Simon & Schuster", 1866);
    book->PrintBook();

    return 0;
}
