#include <iostream>

#include "application.h"

int main(int argc, char** argv) {
  if (pangu::Application::Instance()->Start()) {
    std::cout << "application start succeeded ~" << std::endl;
  } else {
    std::cout << "application start failed!" << std::endl;
  }
}