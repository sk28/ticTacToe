//
//  main.cpp
//  ticTacToe
//
//  Created by Sohan Bellam on 7/31/17.
//  Copyright © 2017 Sohan Bellam. All rights reserved.
//

char value[9];

#include <iostream>
#include <stdlib.h>

using namespace std;

class board{

public:
    
    void print(){
        
        cout << endl << "              " << value[0] << "   "  << value[1] << "   " << value[2] << endl;
        cout << "         "<< endl;
        cout << "              " <<value[3] << "   "  << value[4] << "   " << value[5] << endl;
        cout << "         "<< endl;
        cout << "              " <<value[6] << "   "  << value[7] << "   " << value[8] << endl <<endl;
        
    }
    
    int check(){
        
        int win = 0;
        
        if ( value[0] == value[1] and value[1] == value[2]){
            
            if (value[0] == 'X'){
                win = 1;
            } else {
                
                win = 2;
            
            }
        }
        
        if ( value[3] == value[4] and value[4] == value[5]){
            
            if (value[3] == 'X'){
                win = 1;
            } else {
              
                win = 2;
            
            }
        }
        
        if ( value[6] == value[7] and value[7] == value[8]){
            
            if (value[6] == 'X'){
                win = 1;
            
            } else {
               
                win = 2;
            
            }
        }
        
        if ( value[0] == value[3] and value[3] == value[6]){
            
            if (value[0] == 'X'){
                win = 1;
            
            } else {
             
                win = 2;
            
            }
        }
        
        if ( value[1] == value[4] and value[4] == value[7]){
            
            if (value[1] == 'X'){
                win = 1;
            
            } else {
            
                win = 2;
            
            }
        }
        
        if ( value[2] == value[5] and value[5] == value[8]){
            
            if (value[2] == 'X'){
                win = 1;
            
            } else {
               
                win = 2;
            
            }
        }
        
        if ( value[0] == value[4] and value[4] == value[8]){
            
            if (value[0] == 'X'){
                win = 1;
            } else {
                
                win = 2;
            
            }
        }
        
        if ( value[2] == value[4] and value[4] == value[6]){
            
            if (value[2] == 'X'){
                win = 1;
            
            } else {
                
                win = 2;
            
            }
        }
        
        return win;
    
    }
};

class player{

public:
    
    int input(){
        
        int stat = 1;
        char number = '0';
        
        while (stat == 1){
            
            stat = 0;
            cout << "              Enter number: ";
            cin >> number;
            
            if(number < '0' or number > '9'){
                
                cout << "              That is a letter, not a number!. Please try again."<< endl;
                stat = 1;
            
            }
            
            else if(number == '0'){
                
                cout << "              That number is not allowed. Please try again."<< endl;
                stat = 1;
            
            }
            
            if(value[number-'1'] == 'X' or value[number-'1'] == 'O'){
                cout<< "              This number is already taken! Please try again." << endl;
                stat = 1;
            }
        }
        
        return number;
    
    }
};

class ai{

public:
    
    int input(int turn){
        
        int number = 0;
        if(turn == 0){
    
        number = 4;
        
        }
        
        else if (turn == 1){
            
            if (value[4] == 'X'){
                
                number = 1;
            
            } else if (value[1] == 'X' or value[3] == 'X' or value[5] == 'X' or value[7] == 'X'){
            
                number = 5;
            
            } else {
                
                number = 5;
            
            }
        }
        
        else if (number ==2){
            
            if (value[5] == 'O' or value[7] == 'O'){
                number = 8;
            }
            else{
                number = 0;
            }
        }
        
        else if (value[0] == value [1] and value[2] == '3'){
            
            number = 3;
        
        }
        
        else if (value[0] == value [2] and value[1] == '2'){
        
            number = 2;
        
        }
        
        else if (value[2] == value [1] and value[0] == '1'){
        
            number = 1;
        
        }
        
        else if (value[3] == value [4] and value[5] == '6'){
        
            number = 6;
        
        }
        
        
        else if (value[3] == value [5] and value[4] == '5'){
        
            number = 5;
        
        }
        
        else if (value[4] == value [5] and value[3] == '4'){
        
            number = 4;
        
        }
        
        else if (value[6] == value [7] and value[8] == '9'){
        
            number = 9;
        
        }
        
        else if (value[6] == value [8] and value[7] == '8'){
        
            number = 8;
        
        }
        
        else if (value[7] == value [8] and value[6] == '7'){
        
            number = 7;
        
        }
        
        else if (value[0] == value [3] and value[6] == '7'){
        
            number = 7;
        
        }
        
        else if (value[0] == value [6] and value[3] == '4'){
        
            number = 4;
        
        }
        
        else if (value[3] == value [6] and value[0] == '1'){
        
            number = 1;
        
        }
        
        else if (value[1] == value [4] and value[7] == '8'){
        
            number = 8;
        
        }
        
        else if (value[1] == value [7] and value[3] == '5'){
        
            number = 5;
        
        }
        
        else if (value[4] == value [7] and value[0] == '2'){
        
            number = 2;
        
        }
        
        
        else if (value[2] == value [5] and value[8] == '9'){
        
            number = 9;
        
        }
        
        else if (value[2] == value [8] and value[5] == '6'){
        
            number = 6;
        
        }
        
        else if (value[5] == value [8] and value[2] == '3'){
        
            number = 3;
        
        }
        
        else if (value[0] == value [4] and value[8] == '9'){
        
            number = 9;
        
        }
        
        else if (value[0] == value [8] and value[4] == '5'){
        
            number = 5;
        
        }
        
        else if (value[4] == value [8] and value[0] == '1'){
        
            number = 1;
        
        }
        
        else if (value[2] == value [4] and value[6] == '7'){
        
            number = 7;
        
        }
        
        else if (value[2] == value [6] and value[4] == '5'){
          
            number = 5;
        
        }
        
        else if (value[4] == value [6] and value[2] == '3'){
        
            number = 3;
        
        }
        else {
        
            if((value[1] == 'X' or 'O') && (value[2] == 'X' or 'O') && (value[3] == 'X' or 'O') && (value[4] == 'X' or 'O') && (value[5] == 'X' or 'O') && (value[6] == 'X' or 'O') && (value[7] == 'X' or 'O') && (value[8] == 'X' or 'O')){

                number = 100;




        
            }
        
            
    
        }
        return number;
    }


};
int main() {
    
    int run = 0;
    
    while(run == 0){
        
        int mode;
        
        cout << "              For a two player game, please select 0. To play against the computer using AI, please select 1." << endl << "              ";
        
        cin >> mode;
        
        string player1Name;
        string player2Name;
        
        if(mode == 0){
            
            cout << "              Please enter Player 1's Name: ";
            cin>>player1Name;
            cout << endl;
            cout << "              Please enter Player 2's Name: ";
            cin>>player2Name;
            cout << endl;
            
        }
        
        int turn = 0;
        
        for (int i=0; i<9 ; i++){
            
            value[i] = i+'1';
            
        }
        
        int number;
        int win = 0;
        
        board board;
        player player1;
        player player2;
        ai ai;
        
        board.print();
        
        while (win == 0 and turn < 9){
            
            cout << "              Player's 1 turn!" << endl;
            
            number = player1.input();
            value[number - '1'] = 'X';
            board.print();
            win = board.check();
            turn ++;
            
            if(win == 0 and turn < 9){
                
                if (mode ==0){
                    
                    cout << "              Player's 2 turn!" << endl;
                    number = player2.input();
                    value[number-'1'] = 'O';
                    board.print();
                    win = board.check();
                    
                } else {
                    
                    number = ai.input(turn);
                    if(number == 10){
                        cout << "              AI rage quitted!!" << endl;
                        win =1;
                        
                    } else {
                        
                        value[number-1] = 'O';
                        cout << "              AI picked number " << number <<endl;
                        board.print();
                        win = board.check();
                        
                        
                    }
                }
            }
            
            turn ++;
            
        }
        
        if(win == 1){
            
            cout << "              Player 1 wins!" << endl;
            
        }
        
        else if (win == 2){
            
            cout << "              Player 2 wins!" << endl;
        }
        
        else{
            
            if(mode == 0){
                
                cout << "              It's a cat game. Please play again." << endl;
                
            } else {
                
                cout << "              It's a cat game, the computer wins!" << endl;
                
            }
        }
        
        cout << "              If you would like to play again, please select 0. To end the program please type 1" << endl;
        cin >> run;
        
    }
}
