#include <Person.h>

int main(int argc, char** argv)
{
    Person* person = createPerson();

    if (argc == 3)
    {
        person->setFirstName(person, argv[1]);
        person->setLastName(person, argv[2]);
        printf("Hello, %s %s!\n", person->getFirstName(person), person->getLastName(person));
    }
    else if (argc == 2)
    {
        person->setFirstName(person, argv[1]);
        printf("Hello, %s!\n", person->getFirstName(person));
    }
    else
    {
        person->setFirstName(person, "Inverse");
        person->setLastName(person,"Derivative");
        printf("Hello, %s %s!\n", person->getFirstName(person), person->getLastName(person));
    }

    return 0;
}