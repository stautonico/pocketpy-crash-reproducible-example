#pragma once

#include <pocketpy.h>

using namespace pkpy;

class MyObject {
  public:
      MyObject();
  private:
      VM *m_vm = nullptr;
};
