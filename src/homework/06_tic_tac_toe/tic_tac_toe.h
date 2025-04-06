#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include <iostream>
#include <vector>
#include <string>

class TicTacToe {
public:
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const;
    void display_board() const;
    std::string get_winner() const;

private:
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();

    std::string player;
    std::vector<std::string> pegs;
    std::string winner;
};

#endif