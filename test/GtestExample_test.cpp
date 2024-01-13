//
// Created by John on 1/12/2024.
//
#include <gtest/gtest.h>
#include "../source/Person.c"

TEST(GTestTest, Initialization_Test)
{
    auto person = createPerson();

    const char* fN = "Inverse";
    const char* lN = "Derivative";

    // Step 2: Do Work

    person->setFirstName(person, "First");
    person->setFirstName(person, fN);
    person->setLastName(person, lN);

    // Step 3: Test

    bool first = strcmp(fN, person->getFirstName(person)) == 0;
    bool last = strcmp(lN, person->getLastName(person)) == 0;
    EXPECT_TRUE(first);
    EXPECT_TRUE(last);

}

