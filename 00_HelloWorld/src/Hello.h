//
// Created by chen he on 2020/1/30.
//

#ifndef INC_00_HELLOWORLD__HELLO_H_
#define INC_00_HELLOWORLD__HELLO_H_

#include <string>

class Hello {
 public:
  explicit Hello(std::string msg);

  void Print();

 private:
  std::string message_;
};

#endif //INC_00_HELLOWORLD__HELLO_H_
