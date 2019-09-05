#ifndef KEY_H
#define KEY_H

#include <functional>
#include <iostream>
#include <vector>

class key {
 private:
  bool BigButton;
  std::vector<bool> Keys;
  bool CheckKeys(int val);
  int NumberOfUsers;
  std::function<void(bool)> CheckButton;

 public:
  key(std::function<void(bool)> ButtonPTR);
  ~key();
  void SetKeys(int nb, bool val);
  void SetNumOfUsers(int val);
};

#endif
