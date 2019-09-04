#include <door.hpp>
#include <iostream>



door::door()
{
  std::cout << "Door initialized" << std::endl;
  State=Neutral;
}


door::~door()
{
  std::cout << "Door deinitialized" << std::endl;
  State=Neutral;
  door_transit();
}


void door::door_transit()
{
  switch(State)
  {
    case Idle:
    break;

    case Neutral:
    		manage_door_a(false);
    		manage_door_b(false);
    break;

    case A_Locked:
    		manage_door_a(true);
    		manage_door_b(false);
    break;

    case B_Locked:
    		manage_door_a(false);
    		manage_door_b(true);
    break;

    case A_B_Locked:
    		manage_door_a(true);
    		manage_door_b(true);
    break;

    default:
    break;

  }

}
