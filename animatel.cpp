#include <iostream>
#include <chrono>
#include <thread>
void animatel(char letter, int time_milisecond) {
    std::cout << letter;
    std::cout.flush();
    std::this_thread::sleep_for(std::chrono::milliseconds(time_milisecond));
}
