//
// Created by John on 1/12/2024.
//
#include <Person.h>



char* getFirstName(Person* person)
{
    if (person)
    {
        return person->firstName;
    }
    else
    {
        return "";
    }

}

void setFirstName(Person* person, char *fN) {
    if (person)
    {
        person->firstName = fN;
    }

}

char* getLastName(Person* person) {

    if (person)
    {
        return person->lastName;
    }
    else
    {
        return "";
    }

}

void setLastName(Person* person, char *lN) {
    if (person)
    {
        person->lastName = lN;
    }
}

