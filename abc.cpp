#include <iostream>
#include <cmath>
#include <vector>

void printLetters(int length);

int main() {

  int length;

  std::cout << "----------- ABC -----------\n";

  std::cout << "Enter the amount of columns: ";
  std::cin >> length;

	std::cout << '\n';
  printLetters(length);
	std::cout << '\n';

  std::cout << "---------------------------\n";
  std::cin.get();
  std::cin.get();
  return 0;
}

void printLetters(int length) {

  std::vector<char> letters(length, 'A');
	int column = length - 1;
	long long lines = pow(26, length);

  for (int i = 0; i < lines; i++) {

    for (int j = 0; j < length; j++) {
      std::cout << letters[j];
    }

    std::cout << '\n';
    letters[column] += 1;

		for (int j = column; j >= 0 ; j--) {
			if (letters[j] == '[' && letters[0] != '[') {
					letters[j] = 'A';
					letters[j - 1]++;	
			}
			else {
				break;
			}
		}
  }
}
