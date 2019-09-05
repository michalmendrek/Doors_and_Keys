#include <door.hpp>
#include <iostream>



door::door()
{
  std::cout << "Door initialized" << std::endl;
  State=Neutral;
  Activate=false;
  Game=false;
}


door::~door()
{
  std::cout << "Door deinitialized" << std::endl;
  door_transit(Neutral);
}


void door::door_transit(door_state change)
{
  switch(change)
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
  State=change;

}

void door::door_run()
{
   if(Activate)
   {

    Activate=false;
   }


}


void door::SetGame(bool Mode)
{
  Game=Mode;
}


void door::ManageDoorA(bool stan)
{
if(!Activate)
{
   Activate=true;

}
}

void door::ManageDoorB(bool stan)
{
if(!Activate)
{
   Activate=true;

}
}
