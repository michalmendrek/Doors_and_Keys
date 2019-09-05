#ifndef DOOR_HPP
#define DOOR_HPP

#include <functional>
#include <iostream>




enum door_state {Idle=0, Neutral, A_Locked, B_Locked, A_B_Locked};


class door {

  private:
	  bool DoorA_S;
	  bool DoorB_S;
	  door_state State;
  public:
	  door();
	 ~door();
	  std::function<void(bool)> manage_door_a;
	  std::function<void(bool)> manage_door_b;
	  void door_transit();


};



#endif

