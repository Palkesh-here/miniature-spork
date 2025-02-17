#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <windows.h>

using namespace std;

int main() {

    srand(time(0));

    // all varaibles in one place..
    int max = 2;
    int min = 0;
    int playerScore = 0;
    int cppScore = 0;

    string choices[] = {"rock","paper","scissors"};

    string playerInput;

    cout << "\nLets play rock paper scissors! :)" << '\n';

    for (int rounds = 0; rounds < 3; rounds++) {

        cout << '\n' << "Round : " << rounds + 1 << '\n';

        cout << "rock, paper, scissors.. go!" << '\n';

        cin >> playerInput;

        transform(playerInput.begin(), playerInput.end(), playerInput.begin(), ::tolower);

        int cppturn = min + (rand() % (max - min + 1));


        //Player wins..

        if (playerInput == choices[0] && choices[cppturn] == choices[2])
        {
            cout << "Cpp chose scissors." << '\n';
            cout << "You won." << '\n';

            playerScore++ ;
        }
        else if (playerInput == choices[1] && choices[cppturn] == choices[0])
        {
            cout << "Cpp chose rock." << '\n';
            cout << "You won." << '\n';

            playerScore++ ;
        }
        else if (playerInput == choices[2] && choices[cppturn] == choices[1])
        {
            cout << "Cpp chose paper." << '\n';
            cout << "You won." << '\n';

            playerScore++ ;
        }



        //C++ wins..

        else if (playerInput == choices[2] && choices[cppturn] == choices[0])
        {
            cout << "Cpp chose rocl." << '\n';
            cout << "Cpp won." << '\n';

            cppScore++ ;
        }
        else if (playerInput == choices[0] && choices[cppturn] == choices[1])
        {
            cout << "Cpp chose paper." << '\n';
            cout << "Cpp won." << '\n';

            cppScore++ ;
        }
        else if (playerInput == choices[1] && choices[cppturn] == choices[2])
        {
            cout << "Cpp chose scissors." << '\n';
            cout << "Cpp won." << '\n';

            cppScore++ ;
        }



        //tie happens

        else if (playerInput == choices[cppturn])
        {
            cout << "oh! it was a tie.." << '\n';
        }

        else {
            cout << "you wanna play or not?" << '\n';
        }
    }

    // final score
    cout << "\nFinal Scores:";
    cout << "\nYou : " << playerScore;
    cout << "\nCpp : " << cppScore;

    if (playerScore > cppScore)
    {
        cout << "\nYou won the game!";
    }
    else if (cppScore > playerScore)
    {
        cout << "\nCpp won the game!"; 
    }
    else if (playerScore == cppScore)
    {
        cout << "\nOh it was a tie!";
    }

    cout << "\n \nThanks for playing.. Made with a lot of effort and C++ \n";
    
    //cout << "lets play more!";

    cout << '\n' << "Press ESC to exit the program...\n";
    
    while (true) {
        if (GetAsyncKeyState(VK_ESCAPE)) {
            std::cout << "ESC pressed. Exiting...\n";
            break;
        }
    }

}