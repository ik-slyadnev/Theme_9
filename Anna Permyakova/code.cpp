#include <iostream>

class Greeter {
public:
    void Greet() {
        std::string greetings[] = {"Hello", "Hola", "Bonjour", "Привет", "こんにちは"};
        for (const auto& greeting : greetings) {
            std::cout << greeting << std::endl;
        }
    }
};

int main() {
    Greeter greeter;
    greeter.Greet();
    return 0;
}
