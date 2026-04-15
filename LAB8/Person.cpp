#include "Person.h"

Person::Person()
    : mWeight(0.0f), mFirstName(""), mAge(0)
{
}

Person::Person(float newWeight)
    : mWeight(newWeight), mFirstName(""), mAge(0)
{
}

Person::~Person()
{
}

void Person::setWeight(float newWeight)
{
    mWeight = newWeight;
}

double Person::getWeight() const
{
    return mWeight;
}

void Person::setFirstName(const string& firstName)
{
    mFirstName = firstName;
}

const string& Person::getFirstName() const
{
    return mFirstName;
}

void Person::setAge(int age)
{
    mAge = age;
}

int Person::getAge() const
{
    return mAge;
}

float Person::operator+(const Person& otherPerson)
{
    return mWeight + otherPerson.mWeight;
}
