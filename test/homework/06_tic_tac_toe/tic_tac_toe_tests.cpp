#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <memory>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test TicTacToeManager counts wins correctly") {
    TicTacToeManager manager;

    SECTION("X win is counted properly") {
        TicTacToeManager section_manager;
        auto game = std::make_unique<TicTacToe>();
        game->start_game("X");

        game->mark_board(1); // X
        game->mark_board(2); // O
        game->mark_board(4); // X
        game->mark_board(5); // O
        game->mark_board(7); // X wins

        REQUIRE(game->game_over() == true);
        REQUIRE(game->get_winner() == "X");

        manager.save_game(std::move(game));

        int x, o, t;
        manager.get_winner_total(x, o, t);

        REQUIRE(x == 1);
        REQUIRE(o == 0);
        REQUIRE(t == 0);
    }

    SECTION("Multiple games accumulate correctly") {
        TicTacToeManager section_manager;
        // Game 1: X wins
        auto game1 = std::make_unique<TicTacToe>();
        game1->start_game("X");
        game1->mark_board(1); // X
        game1->mark_board(2); // O
        game1->mark_board(4); // X
        game1->mark_board(5); // O
        game1->mark_board(7); // X wins

        REQUIRE(game1->game_over());
        REQUIRE(game1->get_winner() == "X");

        manager.save_game(std::move(game1));

        // Game 2: O wins
        auto game2 = std::make_unique<TicTacToe>();
        game2->start_game("O");
        game2->mark_board(1); // O
        game2->mark_board(2); // X
        game2->mark_board(5); // O
        game2->mark_board(3); // X
        game2->mark_board(9); // O wins

        REQUIRE(game2->game_over());
        REQUIRE(game2->get_winner() == "O");

        manager.save_game(std::move(game2));

        // Game 3: Tie
        auto game3 = std::make_unique<TicTacToe>();
        game3->start_game("X");
        game3->mark_board(1); // X
        game3->mark_board(2); // O
        game3->mark_board(3); // X
        game3->mark_board(4); // O
        game3->mark_board(5); // X
        game3->mark_board(7); // O
        game3->mark_board(6); // X
        game3->mark_board(9); // O
        game3->mark_board(8); // X

        REQUIRE(game3->game_over() == true);
        REQUIRE(game3->get_winner() == "C");

        manager.save_game(std::move(game3));

        // Final totals check
        int x, o, t;
        manager.get_winner_total(x, o, t);

        REQUIRE(x == 1);
        REQUIRE(o == 1);
        REQUIRE(t == 1);
    }
}
