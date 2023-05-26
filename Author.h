#ifndef UNTITLED20_AUTHOR_H
#define UNTITLED20_AUTHOR_H

#include <string>;

using namespace std;

class Author {
private:
    string first_name;
    string last_name;
    string sur_name;
    int year_of_birth;
    int year_of_death;

public:
    Author() {}

    Author(const string &firstName, const string &lastName, const string &surName, int yearOfBirth, int yearOfDeath)
            : first_name(firstName), last_name(lastName), sur_name(surName), year_of_birth(yearOfBirth),
              year_of_death(yearOfDeath) {}

    const string GetFullName() const {
        return first_name + " " + last_name + " " + sur_name;
    }

    const string &GetFirstName() const {
        return first_name;
    }

    const string &GetLastName() const {
        return last_name;
    }

    const string &GetSurName() const {
        return sur_name;
    }

    int GetYearOfBirth() const {
        return year_of_birth;
    }

    int GetYearOfDeath() const {
        return year_of_death;
    }

    void PrintAuthor() {
        cout << "\nAuthor: " << first_name << " " << last_name << " " << sur_name << endl;
        cout << "Year of birth: " << year_of_birth << endl;
        cout << "Year of death: " << year_of_death << endl;
    }


};

#endif //UNTITLED20_AUTHOR_H
