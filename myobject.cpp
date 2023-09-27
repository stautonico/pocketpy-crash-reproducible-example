#include "myobject.h"

// TO CAUSE THE CRASH: UNCOMMENT THE NEXT LINE AND COMMENT OUT THE LINE IN "main.cpp"
// MyObject global_myobject;

MyObject::MyObject() {
  m_vm = new VM();
}
