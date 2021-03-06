/*
 * catch the snake game
 */

/* 
 * File:   main.cpp
 * Author: Erick Toscano
 *
 * Created on May 2, 2020, 7:24 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

bool gameOver;

const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup(){
    gameOver = false;
    dir = STOP;
    x = width /2;
    y = height /2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void Draw() {
    system("clear"); //system("clear");
    
    for (int i=0; i < width+1; i++)
        cout << "#";
    cout << endl;
    
    for (int i=0; i < height; i++){
        for (int j=0; j < width; j++){
            if (j==0)
                cout << "#";
            else
                cout << " ";
            
            if (j==width-1)
                cout << "#";
        }
        cout << endl;
    }
    
    for (int i=0; i < width+1; i++)
        cout << "#";
    cout << endl;
    
}
void Input(){
    
}
void Logic(){
    
}

/*
 * 
 */
int main(int argc, char** argv) {
    Setup();
    
    while(!gameOver){
        Draw();
        Input();
        Logic();
        //Sleep(10);
    }

    return 0;
}

