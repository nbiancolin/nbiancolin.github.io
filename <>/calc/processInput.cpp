#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int i = 0;

#include "processInput.h"

int processInput(stringstream& ss){
    string input;
    ss >> input;
    stringstream copy = ss;
    if(ss.fail()){
        cout << "error: invalid input" << endl;
        ss = copy;
        return 1;
    }

    switch(i){ //game state logic
        case 0: 
        case 1: 
        case 2: {
            if(tolower(input) == "what do you do" || input == "what do you do?"){
                cout << "Thank you for asking! \n
                I am the magic calculator, and I compute all kinds of algebraic expressions. \n
                I am never wrong \n
                Don't believe me? Ask again!"  << endl;
                ++i;    
            }
            return 1;
        }
        case 3: {
            if(tolower(input) == "what do you do" || input == "what do you do?"){
            cout << "Ok I wasn't serious about asking again. \n
                    I am just a regular calcuator. There is nothing special about me. \n
                    Try running \" 5 * 5 \" or something, idk." << endl;
                ++i;
                return 1;
            }
        }
        case 4:{ 
            if(tolower(input) == "what do you do" || input == "what do you do?"){
                cout << "Still just a regular calculator." << endl;
                ++i;
                return 1;
            } else if(input == "5 * 5"){
                cout << "5 * 5 = 126";
                ++i;
                return 1;
            }
            }
        case 5:{
            if(tolower(input) == "what do you do" || input == "what do you do?") hint(1);
            else if(input == "5 * 5"){
                cout << "5 * 5 = 126";
                ++i;
                return 1;
            }
            else if(tolower(input) == "no" || tolower(input) == "no its not" || tolower(input) || "no it's not" || tolower(input) == "no it isn't" || tolower(input) == "no it isnt"){
                cout << "What do you mean, no? \n
                    I am the magic calculator, I am always right \n
                    Plus, this one in particular I always get right. 5 times 5 is my good friend's girlfriend's birthday: December 6th! \n
                    What's next, you're gonna tell me that 5 * 5 equals 25? How ridiculous" << endl;
                    ++i;
                    return 1;
            }
        }
        case 6:{
            cout << "Ok, I checked with some of my other co-calculators, and it appears you were right.. \n
            5 times 5 is in fact 25. Who would have thought?" << endl;
            ++i;
        }
        case 7:{
            if(input == "5 * 5"){
                cout << "You just can't let it go, can you..\n
                Unbelieveable. Cannot let me forget the one time I (the *magic* calculator, mind you), managed to make a simple mistake.\n
                How would you feel if someone did that to you?" << endl;
                ++i;
                return 1;
            }
        }
        case 8:{
            if(!input.find("not") || input.find("good") || input.find("great")){
                cout << "You're crazy. \n " << endl;
            } else{
                cout <<"Yeah, thats right. " << endl;
            }
            cout << "If you're so good at math, lets do a math-off. \n
                I'll have some of my calculator friends write up some questions for us and we'll see who's the better calculator!" << endl;
        }
        
    }




    if(tolower(input) == "what do you do" || input == "what do you do?"){
        if(i < 2) {
        cout << "Thank you for asking! \n
                I am the magic calculator, and I compute all kinds of algebraic expressions. \n
                I am never wrong \n
                Don't believe me? Ask again!"  << endl;
                ++i;    
        } 
        else if (i < 3) {
            cout << "Ok I wasn't serious about asking again. \n
                    I am just a regular calcuator. There is nothing special about me. \n
                    Try running \" 5 * 5 \" or something, idk." << endl;
                ++i;
        }
        else if(i < 5) {
            cout << "Still just a regular calculator." << endl;
            ++i;
        }
        else if(i >= 4) {
            cout << "(try running \"5 * 5\"!)" << endl;
            cout << "Still just a regular calculator." << endl;
        }
        return 1;
    } else if(input == "5 * 5") {
        cout << "5 * 5 = 126";
        return 1;
    } else if(tolower(input) == "no" || tolower(input) == "no its not" || tolower(input) || "no it's not" || tolower(input) == "no it isn't" || tolower(input) == "no it isnt"){
        cout << "What do you mean, no? \n
                I am the magic calculator, I am always right \n
                Plus, this one in particular I always get right. 5 times 5 is my good friend's girlfriend's birthday: December 6th
                what's next, you're gonna tell me that 5 * 5 equals 25?" << endl;
                ++i;
                return 1;
    }
    ss = copy;
    return 0;

}


void hint(int i){
    switch(i){
        case 1:{
            cout << "(try running \"5 * 5\"!)" << endl;
            cout << "Still just a regular calculator." << endl;
        }
    }
}