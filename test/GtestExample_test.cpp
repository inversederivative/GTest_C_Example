//
// Created by John on 1/12/2024.
//
#include <gtest/gtest.h>
#include "../source/Person.c"

TEST(GTestTest, Initialization_Test)
{
    auto person = (Person*)malloc(sizeof(Person));

    person->getFirstName = getFirstName;
    person->getLastName = getLastName;
    person->setFirstName = setFirstName;
    person->setLastName = setLastName;

    char* fN = "Inverse";
    char* lN = "Derivative";

    // Step 2: Do Work

    person->setFirstName(person, "Inverse");
    person->setLastName(person, "Derivative");

    // Step 3: Test

    bool first = strcmp(fN, person->getFirstName(person)) == 0;
    bool last = strcmp(lN, person->getLastName(person)) == 0;
    EXPECT_TRUE(first);
    EXPECT_TRUE(last);

}

