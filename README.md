# UPDATE-CPTS-122-PA_9

CPTS 122 PA 9
Programmed By:

Anh Duong - Lab Section 13

Kane Weiker - Lab Section 07

Video Demonstration - https://youtu.be/LITxbS67vB0 

Steps gotten from - https://www.instructables.com/Playing-Chess/

Test Cases
For test cases in main you want to run the test – make bool test = true

10 Basic steps of chess
Step 1: Basic Information
-	Setup:
The board is setup as shown. There should always be a white square at the closest right-hand side for both players. Remember that the queen must be on a square that matches her color.
-	Turns:
White always moves first, and players alternate turns. Players can only move one piece at a time, except when castling (explained later).
-	Taking Pieces:
Players take pieces when they encounter an opponent in their movement path. Only pawns take differently than they move (explained later). Players cannot take or move through their own pieces.

Step2: The Pawn
-	Pawns only move forward. On the first move a pawn can move one or two spaces, every subsequent move can only be one space. Pawns move diagonally to take opponents.

Step 3: The Rook
-	Rooks move in a continuous line forwards, backwards and side-to-side.






Step 4: The Knight
-	Knights are the only pieces that "jump" off the board. Unlike other pieces they are not blocked if there are pieces between them and their destination square.
-	To make it easier to remember how a knight moves think of an L. Two spaces in a direction forward, backward or side-to-side, and one space at a right turn.
Step 5: The Bishop
-	Bishops move in continuous diagonal lines in any direction.
Step 6: The Queen
-	The queen moves in continuous diagonal and straight lines. Forward, backward and side-to-side.
Step 7: The King
-	The king can move in any direction, one square at a time.
-	A king cannot move to a square that is under attack by the opponent.
Step 8: Castling Explained
-	Castling is the only move that allows two pieces to move during the same turn.
-	During castling a king moves two spaces towards the rook that it will castle with, and the rook jumps to the other side. The king can castle to either side as long as:

1. The king has not moved.
2. The king is not in check.
3. The king does not move through or into check.
4. There are no pieces between the king and castling-side rook.
5. The castling-side rook has not moved.
-	It does not matter:
A. If the king was in check, but is no longer.
B. If the rook can be attacked by an opponent's piece before castling.




Step 9: En Passant Explained
-	En passant is a special movement for pawns attacking pawns. It only applies if your opponent moves a pawn two spaces, and its destination space is next to your pawn. You can take the opposing piece by moving forward-diagonal to your pawn's attacked square.
Step 10: Check
-	A king is in check when an opponent's piece is in a position that can attack the king. A player must move their king out of check, block the check or capture the attacking piece.
-	A player cannot move their king into check.

Step 11: Checkmate
-	Putting an opponent's king in "checkmate" is the only way to win the game.
-	A king is in checkmate if it is in check, the opponent's piece that has the king in check cannot be captured, the check cannot be blocked, and the king cannot move to a square that is not under attack.
-	In the illustration the white queen has the black king in check, and all of the spaces where the king can move can be attacked by the queen. The king cannot take the queen, because the knight is protecting the queen. The black bishop cannot block the queen. This is checkmate.
Step 12: Stalemate
-	Simply put, a "Stalemate" is a tie. It is achieved if there are no legal moves for a player to make.








Step 13: Basic Strategy
-	Chess is an incredibly complex strategic game, and it is impossible to go into all of the possible tactics one could use to win. However, I wanted to leave the new player with a few hints that will hopefully aid in victory.
-	Piece Value:
- Obviously you want to protect your pieces from capture, but it helps to know which pieces are the strongest so you can decide who to save if you must choose between two 
Queen: Strongest = Most Value
Rook
Bishop, Knight
Pawn: Weakest = Least Value
- Pawns become more valuable as they near promotion.
-	Pawn Promotion:
- Although a pawn can be promoted to a variety of pieces, the strongest choice is almost always to promote to queen.
-	Board Control:
- When building defenses, remember to look at the board and gauge how strong you are in certain areas of the board. Try an keep power distributed fairly evenly, and bring pieces over to add strength if you see an attack coming.
- When attacking, it's a bad idea to let any of your pieces become cut off from your main force. I find it helpful to have a support piece in mind when making an attack. Using pieces in tandem almost always yields a better result than using one piece alone.
