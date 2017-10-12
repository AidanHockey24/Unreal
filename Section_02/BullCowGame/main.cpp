#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
string GetGuess();
void EchoGuess();
void PlayGame();
bool AskToPlayAgain();


// entry point for application
int main() {
	
	bool bPlayAgain = false;
	do {
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} while (bPlayAgain);

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
	string Guess = GetGuess();
	cout << "You guessed " << Guess << "..." << endl;
	cout << endl;

}

void PlayGame() {
	
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 0; count < NUMBER_OF_TURNS; count++) {
		EchoGuess();
	}

}

bool AskToPlayAgain() {
	
	cout << "Do you want to play again Y/N?\n";
	string Response = "";
	getline(cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');

}