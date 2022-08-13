#include <boost/format.hpp>
#include <chrono>
#include <ctime>
#include <iostream>

int main() {
  auto current_time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
  std::cout << boost::format("Hello World!\nThe time is: %s") % ctime(&current_time) << std::flush;
}