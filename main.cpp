#include <door.h>
#include <key.hpp>

using namespace std;

void door_a(bool stan) {
  if (stan)
    cout << " Door A Closed" << endl;
  else
    cout << " Door A Opened" << endl;
}

void door_b(bool stan) {
  if (stan)
    cout << " Door B Closed" << endl;
  else
    cout << " Door B Opened" << endl;
}

int main() { door drzwi(door_a, door_b); }
