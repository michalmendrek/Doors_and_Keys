#include <key.hpp>
#include <door.hpp>


using namespace std;


void door_a(bool stan)
{
if(stan) cout << " Door A Closed" << endl; else 
 	 cout << " Door A Opened" << endl;
}


void door_b(bool stan)
{
if(stan) cout << " Door B Closed" << endl; else 
         cout << " Door B Opened" << endl;
}



int main()
{

door drzwi;
drzwi.manage_door_a = door_a;
drzwi.manage_door_b = door_b;



}
