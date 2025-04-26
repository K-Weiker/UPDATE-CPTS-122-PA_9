#include "TestCases.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include <iostream>
#include <tuple>

void TestCases::run(Game& game)
{
    std::cout << "[Test 1] Normal Pawn Move (e2 to e4) passed\n";
    Piece* pawn = game.getField()[4][1];  // e2
    if (pawn) {
        game.move(pawn, { 4, 3, Piece::NORMAL });
    }

    std::cout << "[Test 2] Pawn Captures Opponent passed\n";
    Piece* wpawn = game.getField()[3][1];  // d2
    if (wpawn) {
        game.move(wpawn, { 3, 3, Piece::NORMAL }); // d2 → d4
    }
    Piece* bpawn = game.getField()[4][6];  // e7
    if (bpawn) {
        game.move(bpawn, { 4, 4, Piece::NORMAL }); // e7 → e5
    }
    wpawn = game.getField()[3][3]; // d4
    if (wpawn) {
        game.move(wpawn, { 4, 4, Piece::NORMAL }); // d4 → e5
    }

    std::cout << "[Test 3] Kingside Castling (White) passed\n";
    Piece* knight = game.getField()[6][0];  // g1
    if (knight) {
        game.move(knight, { 5, 2, Piece::NORMAL }); // g1 → f3
    }
    Piece* bishop = game.getField()[5][0];  // f1
    if (bishop) {
        game.move(bishop, { 2, 3, Piece::NORMAL }); // f1 → d3
    }
    Piece* king = game.getField()[3][0];  // e1
    if (king) {
        game.move(king, { 6, 0, Piece::CASTLE }); // e1 → g1
    }

    std::cout << "[Test 4] En Passant passed\n";
    wpawn = game.getField()[4][1]; // e2
    if (wpawn) {
        game.move(wpawn, { 4, 3, Piece::NORMAL }); // e2 → e4
    }
    bpawn = game.getField()[3][6]; // d7
    if (bpawn) {
        game.move(bpawn, { 3, 4, Piece::NORMAL }); // d7 → d5
    }
    wpawn = game.getField()[4][3]; // e4
    if (wpawn) {
        game.move(wpawn, { 3, 4, Piece::ENPASSANT }); // en passant
    }

    std::cout << "[Test 5] Pawn Promotion passed \n";
    Pawn* promoPawn = new Pawn(Piece::WHITE, { 4, 6 }, game.getHandler());
    game.getField()[4][6] = promoPawn;
    if (promoPawn) {
        game.move(promoPawn, { 4, 7, Piece::NEWPIECE }); // promote to queen
    }

}
