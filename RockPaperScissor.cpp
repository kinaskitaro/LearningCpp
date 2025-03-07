#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoices(char choice);
void chooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "You chose: ";
    showChoices(player);

    computer = getComputerChoice();
    std::cout << "Computer's chose: ";
    showChoices(computer);

    chooseWinner(player, computer);

    return 0;
}

char getUserChoice()
{
    char choice;
    std::cout << "Rock-Paper-Scissors Game\n";
    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "*************************\n";
        std::cout << "Enter R for Rock, P for Paper, or S for Scissors: ";
        std::cin >> choice;
        choice = toupper(choice);
    } while (choice != 'R' && choice != 'P' && choice != 'S');

    return choice;
}

char getComputerChoice()
{
    srand(time(0));
    int ranNum = rand() % 3 + 1;

    switch (ranNum)
    {
    case 1:
        std::cout << "Computer chose: ";
        return 'R';
    case 2:
        std::cout << "Computer chose: ";
        return 'P';
    case 3:
        std::cout << "Computer chose: ";
        return 'S';
    }
    return 'R'; // default return value
}

void showChoices(char choice)
{
    switch (choice)
    {
    case 'R':
        std::cout << "Rock\n";
        break;
    case 'P':
        std::cout << "Paper\n";
        break;
    case 'S':
        std::cout << "Scissors\n";
        break;
    default:
        break;
    }
}

void chooseWinner(char player, char computer)
{
    if (player == computer)
    {
        std::cout << "It's a tie!\n";
    }
    else if (player == 'R' && computer == 'S' || player == 'P' && computer == 'R' || player == 'S' && computer == 'P')
    {
        std::cout << "You win!\n";
    }
    else
    {
        std::cout << "Computer wins!\n";
    }
}
