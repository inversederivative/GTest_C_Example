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

char* getLastName(Person* person)
{
    if (person)
    {
        return person->lastName;
    }
    else
    {
        return "";
    }
}

void setFirstName(Person* person, const char *fN)
{
    if (person && fN)
    {
        // Attempt to allocate memory for incoming string
        // Note, this could be achieved by strdup(), but that may not always be available
        person->firstName = (char*)malloc(strlen(fN) + 1);

        // Check for malloc failure
        if (!person->firstName)
        {
            fprintf(stderr, "Error: Unable to allocate memory for first name\n");
            return;
        }
        else
        {
            // Copy the content of fN to person->firstName
            strcpy(person->firstName, fN);
        }
    }
}

void setLastName(Person* person, const char *lN)
{
    if (person && lN)
    {
        // Attempt to allocate memory for incoming string
        // Note, this could be achieved by strdup(), but that may not always be available
        person->lastName = (char*)malloc(strlen(lN) + 1);

        // Check for malloc failure
        if (!person->lastName)
        {
            fprintf(stderr, "Error: Unable to allocate memory for last name\n");
            return;
        }
        else
        {
            // Copy the content of lN to person->lastName
            strcpy(person->lastName, lN);
        }
    }
}

