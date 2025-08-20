#include "spinner.hpp"
Spinner::Spinner(int delay) : index(0), delay_ms(delay) {
    frames = {'/', '-', '\\', '|'}; 
}void Spinner::next() {
    std::cout << "\r" << frames[index] << std::flush; 
    index = (index + 1) % frames.size();
    std::this_thread::sleep_for(std::chrono::milliseconds(delay_ms));
}void Spinner::start(int iterations) {
    for (int i = 0; i < iterations; ++i) {
        next();
    }std::cout << "\r "; 
}
