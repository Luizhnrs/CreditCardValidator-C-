#include <iostream>

int getDigit (const int number);
int sumOddDigits (const std::string cardNumber);
int sumEvenDigits (const std::string cardNumber);

int main(){
    std::string cardNumber;
    int result = 0;
    
    std::cout<<"Insira o numero do seu cartao# : ";
    std::cin >> cardNumber;
    result = sumEvenDigits(cardNumber)+sumOddDigits(cardNumber);
    if ( result % 10 == 0){
        std::cout<<cardNumber<<"Cartao Validado Com Sucesso";
    }else{
        std::cout<<cardNumber<<"Cartao Invalido";
    }
    return 0;
}

int getDigit (const int number){
    return 0;
}
int sumOddDigits (const std::string cardNumber){
    return 0;
}
int sumEvenDigits (const std::string cardNumber){
  int sum = 0;
  for (int i = cardNumber.size() -2; i >= 0; i-=2){
    sum += getDigit ((cardNumber[i] - '0') *2);
  }
}