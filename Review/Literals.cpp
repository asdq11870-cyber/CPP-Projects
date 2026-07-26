#include <iostream>
#include <thread>
#include <chrono>

using namespace std::literals;
using namespace std::string_literals;

int main(){
    auto t1 = std::chrono::milliseconds(500);
    auto t2 = 500ms;
    std::this_thread::sleep_for(500ms);
    auto printHelloWorld = "Hello"s + " World!"s;
    std::cout << printHelloWorld << std::endl;
    
    // Makes the string literal to cancel any \n or ()
    auto url = R"(<a href="file">C:\Program Files</a>\n)";
    auto delimited_url = R"x(<a href="file">C:\Program Files (x86)</a>\n)x";
    std::cout << url << std::endl;
    std::cout << delimited_url << std::endl;
    return 0;
}