#include <key.h>

key::key(std::function<void(bool)> ButtonPTR) {}

key::~key() {}

bool key::CheckKeys(int val) { return true; }

void key::SetKeys(int nb, bool val) {}

void key::SetNumOfUsers(int val) {
  if (val > 0 && val < 5) NumberOfUsers = val;
}
