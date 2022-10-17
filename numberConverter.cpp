/**
 *
 *
 */

#include <string>
#include <cstring>

#include "./numberConverter.h"

// Data Members
std::string Human::getName() {
  return name;
}

void Human::setName(std::string name) {
  this->name = name;
}

Human::Human() {}
Human::Human(string n) {
  name = n;
}

Human::~Human() {}

int main() {

  Human Matt;
  Human Sarah("Sarah");

  Matt.getName(); // returns ""
  Sarah.getName();

  Matt.setName("Matt");

  Matt.getName();
  Sarah.getName();

  return 0;
}


// Next Week:

//   Destructor
//   Shallow / Deep Copy (Pointer Variable Assignments)
