#ifndef DOOR_HPP
#define DOOR_HPP

#include <functional>
#include <iostream>




enum door_state {Idle=0, Neutral, A_Locked, B_Locked, A_B_Locked};


class door {

  private:
	  bool DoorA_S;
	  bool DoorB_S;
	  bool Activate;
	  bool Game;
	  door_state State;
	  door_state StateRequested;
  public:
	  door();
	 ~door();
	  std::function<void(bool)> manage_door_a;
	  std::function<void(bool)> manage_door_b;
	  void door_transit(door_state change);
	  void door_run();
	  void SetGame(bool Mode);
	  void ManageDoorA(bool stan);
	  void ManageDoorB(bool stan);


};



#endif

