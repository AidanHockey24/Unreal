#include <iostream>
#include <string>
#include "FBullCowGame.h"

void PrintIntro();
std::string GetGuess();
void EchoGuess();
void PlayGame();
bool AskToPlayAgain();

FBullCowGame BCGame; // instantiate a new game

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
	std::cout << "Welcome to Bulls and Cows!!\n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
	std::cout << std::endl;

}

std::string GetGuess() {

	int CurrentTry = BCGame.GetCurrentTry();

	// get a guess from the user
	std::string Guess = "";
	std::cout << "Try " << CurrentTry << " - Enter your guess: ";
	std::getline(std::cin, Guess);

	return Guess;
}

void EchoGuess() {
	
	// ehco the guess
	std::string Guess = GetGuess();
	std::cout << "You guessed " << Guess << "..." << std::endl;
	std::cout << std::endl;

}

void PlayGame() {

	int MaxTries = BCGame.GetMaxTries();
	std::cout << MaxTries << std::endl;

	// loop for the number of turns asking for guesses
	for (int count = 0; count < MaxTries; count++) {
		EchoGuess();
	}

}

bool AskToPlayAgain() {
	
	std::cout << "Do you want to play again Y/N?\n";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');

}