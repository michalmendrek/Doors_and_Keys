#ifndef DOOR_H
#define DOOR_H

#include <functional>
#include <iostream>

enum DoorState { Neutral = 0, A_Locked, B_Locked, A_B_Locked };

class door {
 private:
  bool DoorA_S;
  bool DoorB_S;
  bool Game;
  bool ActionPending;
  bool Debug;
  DoorState State;
  DoorState RequestAction;
  std::function<void(bool)> manage_door_A;
  std::function<void(bool)> manage_door_B;
  void DoorSwitch(DoorState Order);

 public:
  door(std::function<void(bool)> manage_door_a,
       std::function<void(bool)> manage_door_b);
  ~door();
  void SetGame(bool Mode);
  void ManageDoorA(bool state);
  void ManageDoorB(bool state);
  void DoorRun();
  void SetDebug(bool val);
  void SetDoorA_S(bool val);
  void SetDoorB_S(bool val);
};
#endif
