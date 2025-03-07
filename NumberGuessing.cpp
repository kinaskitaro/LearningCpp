#include <iostream>

int main()
{
    int number;
    int guess;
    int tries;

    srand(time(NULL));
    number = (rand() % 100) + 1;

    do
    {
        std::cout << "Enter a guess between 1 and 100: ";
        std::cin >> guess;
        tries++;

        if (guess > number)
        {
            std::cout << "Too high!" << std::endl;
        }
        else if (guess < number)
        {
            std::cout << "Too low!" << std::endl;
        }
        else
        {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!" << std::endl;
        }

    } while (guess != number);

    return 0;
}