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

int main() {
  door drzwi(door_a, door_b);
  drzwi.SetDebug(true);
  drzwi.SetGame(true);
  drzwi.SetDoorA_S(true);
  drzwi.SetDoorB_S(true);
  int tmp(0);
  while (1) {
    cout << "Ustaw Stan Drzwi A" << endl;
    cin >> tmp;
    if (tmp == 1) {
      drzwi.SetDoorA_S(true);
    } else {
      drzwi.SetDoorA_S(false);
    }
    cout << "Ustaw Stan Drzwi B" << endl;
    cin >> tmp;
    if (tmp == 1) {
      drzwi.SetDoorB_S(true);
    } else {
      drzwi.SetDoorB_S(false);
    }
    cout << "Ustaw rzadanie dla drzwi A" << endl;
    cin >> tmp;
    if (tmp == 1) {
      drzwi.ManageDoorA(true);
    } else {
      drzwi.ManageDoorA(false);
    }

    cout << "Ustaw rzadanie dla drzwi B" << endl;
    cin >> tmp;
    if (tmp == 1) {
      drzwi.ManageDoorB(true);
    } else {
      drzwi.ManageDoorB(false);
    }

    drzwi.DoorRun();
  }
}
