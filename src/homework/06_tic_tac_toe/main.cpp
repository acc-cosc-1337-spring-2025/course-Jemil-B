#include "tic_tac_toe.h"

#include<iostream>
#include<iostream>

using std::cout; using std::cin; using std::string;

int main() {
    TicTacToe game;
    char play_again = 'y';
    
  
    while (play_again == 'y' || play_again == 'Y') {
        std::string first_player;
        
      
        do {
            std::cout << "Enter starting player (X/O): ";
            std::cin >> first_player;
        } while (first_player != "X" && first_player != "O");
        
        game.start_game(first_player);
        
       
        while (!game.game_over()) {
            int position;
            game.display_board();
            
           
            do {
                std::cout << "Player " << game.get_player() << ", enter position (1-9): ";
                std::cin >> position;
            } while (position < 1 || position > 9);
            
            game.mark_board(position);
        }
        
 
        game.display_board();
        std::string winner = game.get_winner();
        if (winner == "C") {
            std::cout << "Game ended in a tie!\n";
        } else {
            std::cout << "Player " << winner << " wins!\n";
        }
        
   
        std::cout << "Play again? (y/n): ";
        std::cin >> play_again;
    }
    
    std::cout << "Thanks for playing!\n";
    return 0;
}