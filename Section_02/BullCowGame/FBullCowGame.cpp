#include "FBullCowGame.h"

void FBullCowGame::Reset() {
	return;
}

FBullCowGame::FBullCowGame() {
	MyCurrentTry = 1;
	MyMaxTries = 5;
}

int FBullCowGame::GetMaxTries() const {
	return MyMaxTries;
}

int FBullCowGame::GetCurrentTry() const {
	return MyCurrentTry;
}

bool FBullCowGame::IsGameWon() const {
	return false;
}

bool FBullCowGame::CheckGuessValidity(std::string) {
	return false;
}
