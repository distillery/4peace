
#ifndef DEMONSTRATOR
#define DEMONSTRATOR

#import "ofMain.h"
#import "Drawing.h"
#include <iostream>



class Demonstrator {
    
    public:
        Demonstrator(string s, Drawing* d);
        void draw(int d);
    
    private:
        Drawing* drawing;
        ofImage naomi;
        ofImage scan;
        int x;
};



#endif