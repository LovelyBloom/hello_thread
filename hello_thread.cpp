#include <iostream>
#include <thread>

void hello_world() { // function to be used on a different thread
    std::cout << "Hello Concurrent World\n";
}
int main() {
    std::thread hello(hello_world); // declare thread
    hello.join(); // join thread with main and exit after end of called function.
}