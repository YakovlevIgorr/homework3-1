#include <iostream>

class Calculate{
private:
    double num1;
    double num2;

    double add() { return num1 + num2; }
    double multiply(){ return num1 * num2;}
    double subtract_1_2(){ return num2 - num1;}
    double subtract_2_1(){ return num1 - num2;}
    double divide_1_2(){ return num1 / num2;}
    double divide_2_1(){ return num2 / num1;}
public:
    bool set_num1(double num1){
        if (num1 != 0){
            this -> num1 = num1;
            return true;
        }
        return false;
    }

    bool set_num2(double num2){
        if (num2 != 0){
            this -> num2 = num2;
            return true;
        }
        return false;
    }
    void print(){
        std::cout << "num1 + num2 = " << add() << "\n";
        std::cout << "num1 - num2 = " << subtract_2_1() << "\n";
        std::cout << "num2 - num1 = " << subtract_1_2() << "\n";
        std::cout << "num1 * num2 = " << multiply() << "\n";
        std::cout << "num1 / num2 = " << divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << divide_2_1() << "\n";
    }

};
int main() {

    Calculate calculate;
    while (true) {
        double num1 = 0;
        while (true) {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if(calculate.set_num1(num1)) break;
            std::cout << "Неверный ввод!" << "\n";
        }
        double num2 = 0;
        while (true) {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if(calculate.set_num2(num2)) break;
            std::cout << "Неверный ввод!" << "\n";
        }

        calculate.print();
    }

    return 0;
}
