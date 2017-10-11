#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void EchoGuess();
string GetGuess();


int main() {

	PrintIntro();
	EchoGuess();

	return 0;
}

void PrintIntro() {

	constexpr int WORD_LENGTH = 5;
	// displays welcome messeges
	cout << "Welcome to Bulls and Cows!!\n";
	cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	cout << endl;

}

string GetGuess() {

	// get a guess from the user
	string Guess = "";
	cout << "Enter your guess: ";
	getline(cin, Guess);

	return Guess;
}

void EchoGuess() {
	
	// ehco the guess
	cout << "You guessed " << GetGuess() << "..." << endl;
	cout << endl;

}