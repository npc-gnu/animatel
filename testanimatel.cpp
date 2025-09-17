#include <iostream>
#include <string>
#include <thread>
#include "animatel.hpp"
#include "command.hpp"
using namespace std;
int main() {
    cout << "\033[36mTesting animatel.\033[0m\n";
    animating = true;
    thread animThread(animatel, '\033[36m.', 5);
    int mresult = command("find / -executable -name thisfiledoesnotexists ");
	animating = false;
	animThread.join();
        cerr << "\033[31;40mTesting animatel ended.\033[0m" << endl;
        return 0;
    }
