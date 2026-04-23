#include <iostream> 

int main(){
    double num1, num2; 
    char op; 

    std::cout <<"terminal calculator" << std::endl; 
    std::cout << "use [number][operator][number]" << std:: endl; 
    std::cout << "operators: +, -, *, /, % (type 0 q 0 to quit)" << std::endl; 

    while (true){
        std::cout <<"\n>";
        std::cin >> num1 >> op >> num2; 

        if (op == 'q'){
            break;
        }

        switch (op){
            case '+':

                std::cout<<"result:" << num1 + num2 << std::endl; 
                break;
            case '-':

                std::cout << "result:" << num1 - num2 << std::endl; 
                break; 
            case '*':

                std::cout << "result:" << num1 * num2 << std::endl; 
                break; 

            case '/':
                if (num2 == -0){

                    std::cout << "ERROR, cannot divide by 0" << std::endl;
        
                } else {
                    std::cout << "result:" << num1 / num2 << std::endl; 

                }
                break;
            case '%': 
                std::cout << "result:" << (int)num1 % (int)num2 << " integer modul" <<std::endl; 
                break;
            default: 
                std::cout << "invalid operation. please use + or - or * or / or %. " << std::endl; 
                
        }
    }
        

    std::cout << "exiting bye" << std::endl; 
    return 0; 
}