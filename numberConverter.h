
#include <string>
#include <cstring>

using namespace std;

class Human
{
private:
  string name;

protected:
public:
  Human();
  Human(string n);
  Human(int n);

  string getName();
  void setName(string name);
};
