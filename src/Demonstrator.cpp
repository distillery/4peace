
#include "Demonstrator.h"



Demonstrator::Demonstrator(string s, Drawing* d) {

    drawing = d;
    naomi.loadImage(drawing->drawing);

    scan.loadImage(s);

    x = int(ofRandom(ofGetWindowWidth() - drawing->width - 100)) + 50;
}

void Demonstrator::draw(int d) {
    naomi.draw(x, 50, drawing->width, drawing->height);
    scan.draw(x + drawing->board_x1, 50 + drawing->board_y1, drawing->board_x2, drawing->board_y2);
}
