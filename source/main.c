#include <Person.h>

int main(int argc, char** argv)
{
    Person* person = (Person*)malloc(sizeof(Person));

    person->getFirstName = getFirstName;
    person->getLastName = getLastName;
    person->setFirstName = setFirstName;
    person->setLastName = setLastName;

    person->setFirstName(person, "Inverse");
    person->setLastName(person,"Derivative");

    printf("%s %s\n", person->getFirstName(person), person->getLastName(person));

    return 0;
}