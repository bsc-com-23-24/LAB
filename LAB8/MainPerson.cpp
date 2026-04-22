#include "Person.h"
#include <iostream>

using namespace std;

int main() {
  // Create two Person objects using different constructors
  Person person1;
  Person person2(75.5f);

  // Set details for person1
  person1.setFirstName("Alice");
  person1.setWeight(65.0f);
  person1.setAge(25);

  // Set details for person2
  person2.setFirstName("Bob");
  person2.setAge(30);

  // Display person details
  cout << "\n--- Person Details ---" << endl;
  cout << person1.getFirstName() << ": Weight = " << person1.getWeight()
       << " kg, Age = " << person1.getAge() << endl;
  cout << person2.getFirstName() << ": Weight = " << person2.getWeight()
       << " kg, Age = " << person2.getAge() << endl;

  // Use the overloaded + operator to add weights
  float totalWeight = person1 + person2;
  cout << "\nCombined weight of " << person1.getFirstName() << " and "
       << person2.getFirstName() << " = " << totalWeight << " kg" << endl;

  cout << endl;
  return 0;
}
