#include "application.h"

#include <chrono>
#include <iostream>
#include <thread>

namespace pangu {

Application* Application::Instance() {
  static Application _application_inst_;
  return &_application_inst_;
}

Application::Application() {}

Application::~Application() {}

bool Application::Start() {
  if (!Initialize()) {
    return false;
  }
  Run(); // 异步
  return true;
}

void Application::Stop() {}

bool Application::Initialize() {
  return true;
}

void Application::Finalize() {
  
}

void Application::Run() {
  while (true) {
    if (!Continue()) {
      break;
    }
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

bool Application::Continue() {
  if (Check()) {
    std::cout << "continue application loop ~" << std::endl;
    return true;
  } else {
    std::cout << "stop application loop ~" << std::endl;
    return false;
  }
}

bool Application::Check() {
  return true;
}

}  // namespace pangu
