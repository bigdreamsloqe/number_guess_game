#include<iostream>

int main() {
    int num;
    int guess;
    int tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "*************NUMBER GUESSING GAME**************"<<std::endl;

    do {
        std::cout << "Enter Your Guess : ";
        std::cin >> guess;
        tries++;

        if (guess < num) {
            std::cout << "too low"<<std::endl;
        }
        else if(guess > num) {
            std::cout << "Too high"<<std::endl;
        }
        else {
            std::cout << "You guessed the number "<<num<<" in "<<tries<<" tries"<<std::endl;
        }
    }while (guess != num);
return 0;
}