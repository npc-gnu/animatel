#ifndef SPINNER_HPP
#define SPINNER_HPP
#include <chrono>
#include <thread>
#include <iostream>
#include <vector>
class Spinner {
private:
    std::vector<char> frames;
    int index;
    int delay_ms;
public:
    Spinner(int delay = 100); // milisaniye cinsinden
    void next();
    void start(int iterations = 20); // kaç defa dönecek
};
#endif

