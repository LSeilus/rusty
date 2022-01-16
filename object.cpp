#define OLC_PGE_APPLICATION
#include "./PGE/olcPixelGameEngine.h"

using namespace olc;

class Object{
public:
    Object(vf2d pos, vf2d siz) : position(pos), size(siz){}

    vf2d getPosition(){
        return position;
    }    

    vf2d getSize(){
        return size;
    }

    void move(vf2d displacement){
        position += displacement;
        if (checkCollision){
            position -= displacement;
        }
    }

    bool checkCollision(Object obj[]){
        for(int i = 0; i < sizeof(obj); i ++){
            //4 conditions for each pair of objects
        }
        return false;
    }



private:
    vf2d position;
    vf2d size;

    
};