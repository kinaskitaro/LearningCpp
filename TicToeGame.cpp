#include <iostream>
#include <ctime>

void drawBoard(char *space);
void playerMove(char *space, char player);
void computerMove(char *space, char computer);
bool checkWinner(char *space, char player, char computer);
bool checkTie(char *space);

int main()
{
    char space[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    drawBoard(space);

    while (running)
    {
        playerMove(space, player);
        drawBoard(space);
        if (checkWinner(space, player, computer))
        {
            std::cout << "Player wins!" << std::endl;
            break;
        }

        computerMove(space, computer);
        drawBoard(space);
        if (checkWinner(space, player, computer))
        {
            std::cout << "Computer wins!" << std::endl;
            break;
        }
        checkTie(space);
        if (checkTie(space))
        {
            std::cout << "It's a tie!" << std::endl;
            break;
        }
    }

    return 0;
}

void drawBoard(char *space)
{
    std::cout << " " << space[0] << " | " << space[1] << " | " << space[2] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << space[3] << " | " << space[4] << " | " << space[5] << std::endl;
    std::cout << "-----------" << std::endl;
    std::cout << " " << space[6] << " | " << space[7] << " | " << space[8] << std::endl;
}

void playerMove(char *space, char player)
{
    int num;
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> num;
        num--;
        if (space[num] == ' ')
        {
            space[num] = player;
            drawBoard(space);
            break;
        }
    } while (!num > 0 || !num < 8 || space[num] != ' ');
}

void computerMove(char *space, char computer)
{
    int num;
    do
    {
        num = rand() % 9;
        if (space[num] == ' ')
        {
            space[num] = computer;
            drawBoard(space);
            break;
        }
    } while (space[num] != ' ');
}

bool checkWinner(char *space, char player, char computer)
{
    if ((space[0] == player && space[1] == player && space[2] == player) ||
        (space[3] == player && space[4] == player && space[5] == player) ||
        (space[6] == player && space[7] == player && space[8] == player) ||
        (space[0] == player && space[3] == player && space[6] == player) ||
        (space[1] == player && space[4] == player && space[7] == player) ||
        (space[2] == player && space[5] == player && space[8] == player) ||
        (space[0] == player && space[4] == player && space[8] == player) ||
        (space[2] == player && space[4] == player && space[6] == player))
    {
        return true;
    }
    else if ((space[0] == computer && space[1] == computer && space[2] == computer) ||
             (space[3] == computer && space[4] == computer && space[5] == computer) ||
             (space[6] == computer && space[7] == computer && space[8] == computer) ||
             (space[0] == computer && space[3] == computer && space[6] == computer) ||
             (space[1] == computer && space[4] == computer && space[7] == computer) ||
             (space[2] == computer && space[5] == computer && space[8] == computer) ||
             (space[0] == computer && space[4] == computer && space[8] == computer) ||
             (space[2] == computer && space[4] == computer && space[6] == computer))
    {
        return true;
    }
    return false;
}

bool checkTie(char *space)
{
    for (int i = 0; i < 9; i++)
    {
        if (space[i] == ' ')
        {
            return false;
        }
    }
    return true;
}