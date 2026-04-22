#pragma once
#include <string>

using namespace std;

class Person {
public:
  Person();
  Person(float newWeight);

  ~Person();

  void setWeight(float newWeight);
  double getWeight() const;

  void setFirstName(const string &firstName);
  const string &getFirstName() const;

  void setAge(int age);
  int getAge() const;

  // Overload the add operator
  float operator+(const Person &otherPerson);

private:
  float mWeight;
  string mFirstName;
  int mAge;
};
