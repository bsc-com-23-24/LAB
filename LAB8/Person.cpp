#include "Person.h"
#include <iostream>

using namespace std;

// Default constructor
Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {
  cout << "Default constructor called" << endl;
}

// Parameterized constructor
Person::Person(float newWeight) : mWeight(newWeight), mFirstName(""), mAge(0) {
  cout << "Parameterized constructor called" << endl;
}

// Destructor
Person::~Person() {
  cout << "Destructor called for " << mFirstName << endl;
}

// Setters and Getters
void Person::setWeight(float newWeight) {
  mWeight = newWeight;
}

double Person::getWeight() const {
  return mWeight;
}

void Person::setFirstName(const string &firstName) {
  mFirstName = firstName;
}

const string &Person::getFirstName() const {
  return mFirstName;
}

void Person::setAge(int age) {
  mAge = age;
}

int Person::getAge() const {
  return mAge;
}

// Overloaded + operator: returns the sum of two persons' weights
float Person::operator+(const Person &otherPerson) {
  return mWeight + otherPerson.mWeight;
}
