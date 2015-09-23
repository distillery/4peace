
#ifndef DEMONSTRATION
#define DEMONSTRATION

#import "ofMain.h"
#include <iostream>
#include "Demonstrator.h"
#include "Drawing.h"

#define SIZE 4



class Demonstration {
    
    public:
        Demonstration();
        void add(string scan);
        void draw();
    
    private:
        vector<Demonstrator*> demonstrators;
        Drawing* drawings[5];
        int prev_id;
};

    

#endif