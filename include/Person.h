#ifndef GTESTEXAMPLE_PERSON_H
#define GTESTEXAMPLE_PERSON_H

struct Person;

typedef char *(*GetFirstNameFunction)(struct Person* person);
typedef char *(*GetLastNameFunction)(struct Person* person);
typedef void (*SetFirstNameFunction)(struct Person* person, char* fN);
typedef void (*SetLastNameFunction)(struct Person* person, char* lN);

struct Person
{
    char* firstName;
    char* lastName;

    GetFirstNameFunction getFirstName;
    GetLastNameFunction  getLastName;
    SetFirstNameFunction setFirstName;
    SetLastNameFunction setLastName;
};

typedef struct Person Person;

char* getFirstName(Person* person);
char* getLastName(Person* person);
void setFirstName(Person* person, char* fN);
void setLastName(Person* person, char* lN);

#endif //GTESTEXAMPLE_PERSON_H