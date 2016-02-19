# Chessboard

Board methods:
isPiece(string destination) 
 #determine if there is a piece in the way that would block this move

 print board
  # prints the board in the current format

move(string start, string destination)
#update piece that is at start point and move it to destination point
#this method will do all of the 'battle' logic
isValid
 > isPiece?
move()
 > print board


Piece class 







   A   B   C   D   E   F   G   H
-|---|---|---|---|---|---|---|---|
 | r | n | b | k | q | b | n | r |
-|---|---|---|---|---|---|---|---|
 | p | p | p | p | p | p | p | p |
-|---|---|---|---|---|---|---|---|
 |   |   |   |   |   |   |   |   |
-|---|---|---|---|---|---|---|---|
 |   |   |   |   |   |   |   |   |
-|---|---|---|---|---|---|---|---|
 |   |   |   |   |   |   |   |   |
-|---|---|---|---|---|---|---|---|
 |   |   |   |   |   |   |   |   |
-|---|---|---|---|---|---|---|---|
-| p | p | p | p | p | p | p | p |
-|---|---|---|---|---|---|---|---|
 | r | n | b | k | q | b | n | r |
 |---|---|---|---|---|---|---|---|