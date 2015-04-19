//Von Dominik Hofmann & Lukas Reisinger

#include "computerPlayer.h"
#include "board.h"
#include <iostream>
#include <random>

ComputerPlayer::ComputerPlayer(char kur, int col, bool secondCpu):Player("Computer",kur),columns(col){
    if (secondCpu)
        this->name+=" 2";
}

ComputerPlayer::~ComputerPlayer() {
    std::cout << "ComputerPlayer geloescht!" << std::endl;
}

void ComputerPlayer::printName() const {
    std::cout << this->name << std::endl;
}

int ComputerPlayer::chooseColumn() const {
    return rand()%columns;
}
