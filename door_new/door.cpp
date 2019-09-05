#include <door.h>

door::door(std::function<void(bool)> manage_door_a,
           std::function<void(bool)> manage_door_b) {
  manage_door_A = manage_door_a;
  manage_door_B = manage_door_b;
  Game = false;
  ActionPending = false;
  std::cout << "Doors Initialized" << std::endl;
}

door::~door() {}

void door::SetGame(bool Mode) {
  Game = Mode;
  if (Debug) {
    std::cout << "Seting Game Mode to : " << Game << std::endl;
  }
}

void door::ManageDoorA(bool state) {
  if (!ActionPending) {
    if (state) {
      RequestAction = A_Locked;
    } else {
      RequestAction = B_Locked;
    }
    ActionPending = true;
  }
}

void door::ManageDoorB(bool state) {
  if (!ActionPending) {
    if (state) {
      RequestAction = B_Locked;
    } else {
      RequestAction = A_Locked;
    }
    ActionPending = true;
  }
}

void door::DoorRun() {}

void door::DoorSwitch(DoorState Order) {
  switch (Order) {
    case Neutral:
      manage_door_A(false);
      manage_door_B(false);
      break;

    case A_Locked:
      manage_door_A(true);
      manage_door_B(false);
      break;

    case B_Locked:
      manage_door_A(false);
      manage_door_B(true);
      break;

    case A_B_Locked:
      manage_door_A(true);
      manage_door_B(true);
      break;
    default:
      break;
  }
}

void door::SetDebug(bool val) { Debug = val; }
