#include <iostream>

int main() {
  int pri, sec, ter;
  int i, j = 0;

  // pegando até onde vai ser a sequência
  std::cout << "informe ate onde voce quer ir na sequencia\n";
  std::cin >> i;

  // fazer o fibonacci
  pri = 0;
  sec = 1;

  std::cout << pri << '\n' << sec << '\n';
  while (j < i) {
    ter = pri + sec;

    pri = sec;
    sec = ter;

    std::cout << ter << '\n';

    ++j;
  }

  return 0;
}
