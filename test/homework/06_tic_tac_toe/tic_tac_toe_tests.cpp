#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test first player set to X", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test first player set to O", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("O");
    REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test tie game", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    // X O X
    game.mark_board(1); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(3); // X
    REQUIRE_FALSE(game.game_over());
    
    // O X O
    game.mark_board(5); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(4); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(7); // O
    REQUIRE_FALSE(game.game_over());
    
    // X O X
    game.mark_board(6); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(9); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(8); // X
    
    // Game should be over now with a tie
    REQUIRE(game.game_over());
    REQUIRE(game.get_winner() == "C");
}

TEST_CASE("Test win by first column", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(1); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(4); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(3); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(7); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second column", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(2); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(1); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(5); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(3); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(8); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third column", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(3); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(1); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(6); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(9); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by first row", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(1); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(4); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(5); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(3); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by second row", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(4); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(1); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(5); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(6); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win by third row", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(7); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(1); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(8); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(9); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from top left", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(1); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(5); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(3); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(9); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}

TEST_CASE("Test win diagonally from bottom left", "[TicTacToe]") 
{
    TicTacToe game;
    game.start_game("X");
    
    game.mark_board(7); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(1); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(5); // X
    REQUIRE_FALSE(game.game_over());
    game.mark_board(2); // O
    REQUIRE_FALSE(game.game_over());
    game.mark_board(3); // X
    REQUIRE(game.game_over());
    
    REQUIRE(game.get_winner() == "X");
}