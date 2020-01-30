//
// Created by chen he on 2020/1/31.
//

#include <memory>

#include "Hello.h"

int main() {
  std::unique_ptr<Hello> ptr = std::make_unique<Hello>("World");
  ptr->Print();
  return 0;
}
