//#include <iostream>
//#include <string>
//
//int main() {
//    std::cout << "Enter the first three-digit number: ";
//    std::string num1;
//    std::cin >> num1;
//    std::cout << "Enter the second three-digit number: ";
//    std::string num2;
//    std::cin >> num2;
//    if (num1.length() != 3 || num2.length() != 3) {
//        std::cout << "Error!" << std::endl;
//    }
//    else {      
//        std::string new_num1 = num1.substr(0, 1) + num2.substr(1, 1) + num1.substr(2, 1);
//        std::string new_num2 = num2.substr(0, 1) + num1.substr(1, 1) + num2.substr(2, 1);            
//        std::cout << "New first number: " << new_num1 << std::endl;
//        std::cout << "New second number: " << new_num2 << std::endl;
//    }
//
//    return 0;
//}



//#include <iostream>
//#include <string>
//
//int main() {
//    std::cout << "Enter a 4-digit number: ";
//    std::string number;
//    std::cin >> number;
//    if (number.length() != 4) {
//        std::cout << "Error! Please enter a 4-digit number." << std::endl;
//    }
//    else {       
//        int sum = number[0] - '0' + number[2] - '0';        
//        int difference = number[1] - '0' - (number[3] - '0');        
//        std::cout << "Entered number: " << number << std::endl;
//        std::cout << "Sum of the first and third digits: " << sum << std::endl;
//        std::cout << "Difference between the second and fourth digits: " << difference << std::endl;
//    }
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//int main() {   
//    std::cout << "Enter a three-digit number: ";
//    std::string number;
//    std::cin >> number;    
//    if (number.length() != 3) {
//        std::cout << "Error!" << std::endl;
//    }
//    else {      
//        std::string new_number = number.substr(0, 1) + number.substr(2, 1);              
//        std::cout << "Number with middle digit removed: " << new_number << std::endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//
//int main() { 
//    double depositAmount;
//    std::cout << "Enter the deposit amount in UAH: ";
//    std::cin >> depositAmount;
//    double interestRate;
//    std::cout << "Enter the annual interest rate (%): ";
//    std::cin >> interestRate;
//    double monthlyInterestRate = interestRate / 12 / 100;
//    double monthlyPayment = depositAmount * monthlyInterestRate;
//    std::cout << "Monthly payment by the bank: " << monthlyPayment << " UAH" << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//int main() {   
//    double price;
//    std::cout << "Enter the price of the item (Y): ";
//    std::cin >> price;
//
//    double money;
//    std::cout << "Enter the amount of money (X): ";
//    std::cin >> money;   
//    int quantity = money / price;
//    double change = money - (quantity * price);
//    std::cout << "Quantity of items: " << quantity << std::endl;
//    std::cout << "Change: " << change << " UAH" << std::endl;
//
//    return 0;
//}

//#include <iostream>
//
//const double GRAMS = 405.9;
//
//double poundsToKilograms(double pounds) {
//    return pounds * 0.453592;
//}
//
//double kilogramsToPounds(double kilograms) {
//    return kilograms * 2.20462;
//}
//
//int main() {    
//    double pounds;
//    std::cout << "Enter the weight in pounds: ";
//    std::cin >> pounds;
//    double kilograms = poundsToKilograms(pounds);
//    std::cout << "Weight in kilograms: " << kilograms << std::endl;   
//    double weightInGrams = GRAMS / 1000;
//    double weightInKilograms = weightInGrams;
//    double weightInPounds = kilogramsToPounds(weightInKilograms);
//    std::cout << "Weight in pounds: " << weightInPounds << std::endl;
//
//    return 0;
//}


//#include <iostream>
//#include <string>
//
//int main() {
//    std::cout << "Enter a five-digit number: ";
//    std::string number;
//    std::cin >> number;   
//    if (number.length() != 5) {
//        std::cout << "Error! Please enter a five-digit number." << std::endl;
//    }
//    else {
//        std::string shiftedNumber = number.substr(3, 2) + number.substr(0, 3);         
//        std::cout << "Number after cyclic right shift: " << shiftedNumber << std::endl;
//    }
//
//    return 0;
//}