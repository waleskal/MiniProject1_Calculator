#include <iostreaam> 

int main(){
    double num1, num2; 
    char op; 

    std::cout <<"terminal calculator" << std::endl; 
    std::cout <<"enter operation:";
    std::cin >> num1 >> op >> num2; 

    if (op =='+'){
        std::cout << "result:" << num1 + num2 << std::endl; 

    }
    return 0; 
}