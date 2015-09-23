#include "Drawing.h"



Drawing::Drawing() {
    drawing = "naomi_1.png";
    width = 293;
    height = 799;
    board_x1 = 0;
    board_y1 = 0;
    board_x2 = 293;
    board_y2 = 799;
}



Drawing::Drawing(string d, int w, int h, int x1, int y1, int x2, int y2) {
    drawing = d;
    width = w;
    height = h;
    board_x1 = x1;
    board_y1 = y1;
    board_x2 = x2;
    board_y2 = y2;
}
