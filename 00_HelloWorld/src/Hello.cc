//
// Created by chen he on 2020/1/30.
//

#include <iostream>
#include <utility>

#include "Hello.h"

Hello::Hello(std::string msg): message_(std::move(msg)) { }

void Hello::Print() {
  std::cout << "Hello, " << message_ << std::endl;
}
