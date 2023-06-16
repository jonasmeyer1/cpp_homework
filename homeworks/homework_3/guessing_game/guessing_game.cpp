#include <iostream>
#include <random>

using std::cin;
using std::cout;
using std::endl;

int getRandomNumber(int l_bound, int u_bound) {
  std::random_device r_dev{};
  std::mt19937 r_eng{r_dev()};
  std::uniform_int_distribution dist(l_bound, u_bound);
  return dist(r_dev);
}

void guessingGame() {
  cout << "Welcome to the GUESSING GAME!" << endl;
  cout << "I will generate a number and you will guess it!" << endl;

  cout << "Please provide the smallest number: " << endl;
  int l_bound{};
  cin >> l_bound;

  cout << "Please provide the largest number: " << endl;
  int u_bound{};
  cin >> u_bound;

  int rand_num = getRandomNumber(l_bound, u_bound);
  int secret_num = u_bound + 1;

  cout << "I've generated a number. Try to guess it!" << endl;

  int num_guesses = 0;

  while (secret_num != rand_num) {
    num_guesses += 1;
    cout << "Please provide the next guess:" << endl;
    cin >> secret_num;
    if (secret_num < rand_num) {
      cout << "Your number is too small. Try again!" << endl;
    } else if (secret_num > rand_num) {
      cout << "Your number is too big. Try again!" << endl;
    };
  }
  cout << "You've done it! You guessed the number " << secret_num << " in "
       << num_guesses << " guesses!" << endl;
}

int main() {
  guessingGame();
  return 0;
}
