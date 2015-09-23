
#include "Demonstration.h"



Demonstration::Demonstration() {

    drawings[0] = new Drawing("naomi_1.png", 229, 700, 35, 35, 154, 154);
    drawings[1] = new Drawing("naomi_2.png", 274, 700, 50, 200, 180, 180);
    drawings[2] = new Drawing("naomi_3.png", 257, 700, 72, 120, 120, 120);
    drawings[3] = new Drawing("naomi_4.png", 415, 700, 100, 100, 200, 200);
    drawings[4] = new Drawing("naomi_5.png", 578, 700, 150, 25, 220, 220);
}

void Demonstration::add(string scan) {
    
    int id;
    do {
        id = int(ofRandom(5));
    }
    while (id == prev_id);
    
    Drawing* d = drawings[id];
    prev_id = id;
    
    Demonstrator* demonstrator = new Demonstrator(scan, d);
    demonstrators.push_back(demonstrator);
}

void Demonstration::draw() {
    
//    for (int d=0; d<demonstrators.size(); d++) {
//        demonstrators[d]->draw(d);
//    }
    
    if (demonstrators.size()>0) {
        demonstrators[demonstrators.size()-1]->draw(1);
    }
}
