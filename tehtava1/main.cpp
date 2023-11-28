#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
private:
    std::vector<T> data; 

public:
    
    void push(const T& item) {
        data.push_back(item);
    }

    
    T pop() {
        if (data.empty()) {
            
            
            throw std::out_of_range("Stack is empty");
        }
        T top = data.back();
        data.pop_back();
        return top;
    }

   
    size_t size() const {
        return data.size();
    }
};

int main() {
    
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);

    std::cout << "Int Stack size: " << intStack.size() << std::endl;

    while (intStack.size() > 0) {
        std::cout << "Popped from Int Stack: " << intStack.pop() << std::endl;
    }

    Stack<std::string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");

    std::cout << "String Stack size: " << stringStack.size() << std::endl;

    while (stringStack.size() > 0) {
        std::cout << "Popped from String Stack: " << stringStack.pop() << std::endl;
    }

    return 0;
}
