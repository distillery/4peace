#ifndef DRAWING
#define DRAWING

#import "ofMain.h"
#include <iostream>



class Drawing {
    
    public:
        Drawing();
        Drawing(string drawing, int width, int height, int board_x1, int board_y1, int board_x2, int board_y2);
    
        string drawing;
        int width;
        int height;
        int board_x1;
        int board_y1;
        int board_x2;
        int board_y2;
};



#endif
