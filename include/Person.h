#include <stdio.h>
#include <string.h>
#include <malloc.h>

#ifndef GTESTEXAMPLE_PERSON_H
#define GTESTEXAMPLE_PERSON_H

typedef struct Person Person;

typedef char *(*GetFirstNameFunction)(Person* person);
typedef char *(*GetLastNameFunction)(Person* person);
typedef void (*SetFirstNameFunction)(Person* person, const char* fN);
typedef void (*SetLastNameFunction)(Person* person, const char* lN);

struct Person
{
    char* firstName;
    char* lastName;

    GetFirstNameFunction getFirstName;
    GetLastNameFunction  getLastName;
    SetFirstNameFunction setFirstName;
    SetLastNameFunction setLastName;
};

char* getFirstName(Person* person);
char* getLastName(Person* person);
void setFirstName(Person* person, const char* fN);
void setLastName(Person* person, const char* lN);

#endif //GTESTEXAMPLE_PERSON_H