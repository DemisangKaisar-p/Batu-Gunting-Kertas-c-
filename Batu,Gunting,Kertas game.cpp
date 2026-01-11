#include <iostream>
#include <ctime>



char getuserchoice();
char getcomputerchoice();
void showchoice(char choice);
void pemenang(char player, char computer);

int main() {

  char player;
  char computer;

  player = getuserchoice();
  std::cout << "Pilihanmu: ";
  showchoice(player);

  computer = getcomputerchoice();
  std::cout << "\nPilihan komputer: ";
  showchoice(computer);

  pemenang(player, computer);
  return 0;
}

char getuserchoice() {
    char player;
    std::cout << "Batu gunting Kertas game!\n";

    do
    {
      std::cout << "Masukkan pilihan Anda (b untuk batu, k untuk kertas, g untuk gunting): ";
      std::cin >> player;
    } while (player != 'b' && player != 'k' && player != 'g');

    return player;
}
char getcomputerchoice() {

  srand(time(0));
  int num = rand() % 3 + 1;
  
  switch (num)
  {
  case 1:
    return 'b';
  case 2:
    return 'k';
  case 3:
    return 'g';
  default:
    return 'b';
  }

}

void showchoice(char choice) {
  switch (choice)
  {
  case 'b':
    std::cout << "Batu\n";
    break;
  case 'k':
    std::cout << "Kertas\n";
    break;
  case 'g':
    std::cout << "Gunting\n";
    break;
  default:
    break;
  }
}



void pemenang(char player, char computer){

  switch (player)
  {
  case 'b':
    if (computer == 'g') {
      std::cout << "Kamu menang!";
    } else if (computer == 'k') {
      std::cout << "Kamu kalah!";
    } else {
      std::cout << "Seri!";
    }
    break;
  case 'k':
    if (computer == 'b') {
      std::cout << "Kamu menang!";
    } else if (computer == 'g') {
      std::cout << "Kamu kalah!";
    } else {
      std::cout << "Seri!";
    }
    break;
  case 'g':
    if (computer == 'k') {
      std::cout << "Kamu menang!";
    } else if (computer == 'b') {
      std::cout << "Kamu kalah!";
    } else {
      std::cout << "Seri!";
    }
    break;
  default:
    break;
  
  }
}