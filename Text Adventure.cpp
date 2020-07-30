// Text Adventure.cpp : Build a text adventure.
/*In order to complete this project, you should be familiar with C++ conditionals and control flow, loops,
  and setting variables using user input. Ideally, you’ve finished the first four sections of Learn C++ (through Loops).
  
  Your program should have a storyline with:
  
  1. A beginning
  2. At least three possible endings*/

#include <iostream>
using namespace std;

void Left1();
void Right1();
void Left2();
void Right2();
void Ending1();
void Correct124();
void Left3();
void Right3();
void Left4();
void Right4();
void Correct3();
void Left5();
void Right5();
void Ending3();
void Future1();
void Future2();

int main()
{
    cout << "==============================\n";
    cout << "ESCAPE      THE      LABYRINTH\n";
    cout << "==============================\n\n";
    cout << "A CYOA Story  by  Kyle Sudusky\n\n\n";

Start: // This is a label so the program knows where to go when it comes into a 'goto' statement.
    cout << "You suddenly wake up. Confused, you open your eyes and wonder where you are, and how you got there.\n";
    cout << "You are in a room with brick wallsand two pathways out, one going left and one going right. You also\n";
    cout << "see a strange message on the wall saying “SLMA YPNOA YPNOA”. What could that mean? Maybe it will help\n";
    cout << "you decide which path to go through.\n\n";
    cout << "1) Left\n" << "2) Right\n\n";

    int choice1;// The declaration of the first choice variable.
    for (;;) { // This is an infinite loop so we can control what the user inputs
        cin >> choice1; // Asks the user input
        if (choice1 == 1 || choice1 == 2) { // If it's anything other than 1 or 2 then it will repeat again.
            break; // Breaks the loop.
        }
        else {
            cout << "Invalid input. Try again!\n";
            continue; // Continues the loop.
        }
    }
    
    if (choice1 == 1) { // Starts the logical and conditional part of the program, taking the user's choice and selecting the path to take.
        Left1(); // It's quite lengthy and it repeats itself a lot.
        int choice2;
        for (;;) { // This loop format will repeat itself everytime the program needs the user's input.
            cin >> choice2;
            if (choice2 == 1 || choice2 == 2) {
                break;
            }
            else {
                cout << "Invalid input. Try again!\n";
                continue;
            }
        }
        
        if (choice2 == 1) {
            Left2(); //This type of statements just calls the functions that have the text inside.
            int choice3;
            for (;;) {
                cin >> choice3;
                if (choice3 == 1 || choice3 == 2) {
                    break;
                }
                else if (choice3 == 3 || choice3 == 4) {
                    break;
                }
                else {
                    cout << "Invalid input. Try again!\n";
                    continue;
                }
            }

            if (choice3 == 2) {
            correct124: // Another label for the 'goto' statement.
                Correct124();
                int choice4;
                for (;;) {
                    cin >> choice4;
                    if (choice4 == 1 || choice4 == 2) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Try again!\n";
                        continue;
                    }
                }

                if (choice4 == 1) {
                    Left4();
                    int choice5;
                    for (;;) {
                        cin >> choice5;
                        if (choice5 == 1) {
                            break;
                        }
                        else {
                            cout << "Invalid input. Try again!\n";
                            continue;
                        }
                    }

                    if (choice5 == 1) {
                        Right4();
                        cout << "Enter 'e' to exit.\n"; // The next lines until the 'return 0' is just a way to pause the program at the end.
                        char exit; // It's just a way so that the program doesn't just closes automatically after the text appears.
                        cin >> exit; // These lines will repeat a lot, every time we want the program to finish.
                        return 0;
                    }
                    else {
                        cout << "Invalid input.\n";
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                }
                else if (choice4 == 2) {
                    Right4();
                    cout << "Enter 'e' to exit.\n";
                    char exit;
                    cin >> exit;
                    return 0;
                }
                else {
                    cout << "Invalid input.\n";
                    cout << "Enter 'e' to exit.\n";
                    char exit;
                    cin >> exit;
                    return 0;
                }
            }
            else {
                Ending1();
                cout << "Enter 'e' to exit.\n";
                char exit;
                cin >> exit;
                return 0;
            }
        }
        else if (choice2 == 2) {
            Right2();
            int choice6;
            for (;;) {
                cin >> choice6;
                if (choice6 == 1 || choice6 == 2) {
                    break;
                }
                else if (choice6 == 3 || choice6 == 4) {
                    break;
                }
                else {
                    cout << "Invalid input. Try again!\n";
                    continue;
                }
            }

            if (choice6 == 1) {
                Correct124();
                int choice4;
                for (;;) {
                    cin >> choice4;
                    if (choice4 == 1 || choice4 == 2) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Try again!\n";
                        continue;
                    }
                }

                if (choice4 == 1) {
                    Left4();
                    int choice5;
                    for (;;) {
                        cin >> choice5;
                        if (choice5 == 1) {
                            break;
                        }
                        else {
                            cout << "Invalid input. Try again!\n";
                            continue;
                        }
                    }

                    if (choice5 == 1) {
                        Right4();
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                    else {
                        cout << "Invalid input.\n";
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                }
                else if (choice4 == 2) {
                    Right4();
                    cout << "Enter 'e' to exit.\n";
                    char exit;
                    cin >> exit;
                    return 0;
                }
                else {
                    cout << "Invalid input.\n";
                    cout << "Enter 'e' to exit.\n";
                    char exit;
                    cin >> exit;
                    return 0;
                }
            }
            else if (choice6 >= 2 && choice6 <= 4) {
                Ending1();
                cout << "Enter 'e' to exit.\n";
                char exit;
                cin >> exit;
                return 0;
            }
        }
        else {
            cout << "Invalid input.\n";
            cout << "Enter 'e' to exit.\n";
            char exit;
            cin >> exit;
            return 0;
        }
    }
    else if (choice1 == 2) {
        Right1();
        int choice7;
        for (;;) {
            cin >> choice7;
            if (choice7 == 1 || choice7 == 2) {
                break;
            }
            else {
                cout << "Invalid input. Try again!\n";
                continue;
            }
        }

        if (choice7 == 1) {
            Left3();
            int choice8;
            for (;;) {
                cin >> choice8;
                if ((choice8 == 1 || choice8 == 2) || (choice8 == 3 || choice8 == 4)) {
                    break;
                }
                else {
                    cout << "Invalid input. Try again!\n";
                    continue;
                }
            }

            if (choice8 == 2) {
                Correct3();
                int choice9;
                for (;;) {
                    cin >> choice9;
                    if (choice9 == 1 || choice9 == 2) {
                        break;
                    }
                    else {
                        cout << "Invalid input. Try again!";
                        continue;
                    }
                }

                if (choice9 == 1) {
                    Left5();
                    int choice10;
                    for (;;) {
                        cin >> choice10;
                        if (choice10 == 1) {
                            break;
                        }
                        else {
                            cout << "Invalid input. Try again!\n";
                            continue;
                        }
                    }

                    if (choice10 == 1) {
                        goto Right5;
                    }
                    else {
                        cout << "Invalid input.\n";
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                }
                else if (choice9 == 2) {
                Right5:
                    Right5();
                    int choice11;
                    for (;;) {
                        cin >> choice11;
                        if ((choice11 == 1 || choice11 == 2) || (choice11 == 3 || choice11 == 4)) {
                            break;
                        }
                        else {
                            cout << "Invalid input. Try again!\n";
                            continue;
                        }
                    }

                    if (choice11 == 1) {
                        Ending3();
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                    else if (choice11 == 2) {
                        goto Start;
                    }
                    else if (choice11 == 3) {
                        Future1();
                        goto Right5;
                    }
                    else if (choice11 == 4){
                        Future2();
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                    else {
                        cout << "Invalid input.\n";
                        cout << "Enter 'e' to exit.\n";
                        char exit;
                        cin >> exit;
                        return 0;
                    }
                }
                else {
                    cout << "Invalid input.";
                    cout << "Enter 'e' to exit.\n";
                    char exit;
                    cin >> exit;
                    return 0;
                }
            }
            else if (choice8 == 1 || (choice8 == 3 || choice8 == 4)) {
                Ending1();
                cout << "Enter 'e' to exit.\n";
                char exit;
                cin >> exit;
                return 0;
            }
            else {
                cout << "Invalid input.\n";
                cout << "Enter 'e' to exit.\n";
                char exit;
                cin >> exit;
                return 0;
            }
        }
        else if (choice7 == 2) {
            Right3();
            int choice12;
            for (;;) {
                cin >> choice12;
                if (choice12 == 1 || (choice12 == 2 || choice12 == 3)) {
                    break;
                }
                else {
                    cout << "Invalid input. Try again!";
                    continue;
                }
            }
            
            if (choice12 == 1 || choice12 == 2) {
                Ending1();
                cout << "Enter 'e' to exit.\n";
                char exit;
                cin >> exit;
                return 0;
            }
            else if (choice12 == 3) {
                goto correct124;
            }
        }
        else {
            cout << "Invalid input.\n";
            cout << "Enter 'e' to exit.\n";
            char exit;
            cin >> exit;
            return 0;
        }
    }
    else {
        cout << "Invalid input.\n";
        cout << "Enter 'e' to exit.\n";
        char exit;
        cin >> exit;
        return 0;
    }
}


// These are the function definitions, it isn't necessary to use them, but it makes the code more legible.
// I declared a variable with the text first and then just printed it with the options.
void Left1() {
    string left1 = "You decide to go left. To your disappointment, there is a identical room with the same two paths going left and right. This must be some kind of labyrinth. Which way do you go now?\n\n";
    cout << left1 << "1) Left\n" << "2) Right\n\n";
}
void Right1() {
    string right1 = "You decide to go right. To your disappointment, there is a identical room with the same two paths going left and right. This must be some kind of labyrinth. Which way do you go now?\n";
    cout << right1 << "1) Left\n" << "2) Right\n\n";
}
void Left2() {
    string left2 = "You find another identical room, but this one has writing on the walls as well as an 80s-style computer that you can type on. The writing on the walls says 'A1Z26 - 6 1 3 5' What do you type on the computer?\n\n";
    cout << left2 << "1) A1Z26\n" << "2) FACE\n" << "3) 6135\n" << "4) 12 2 6 10\n\n";
}
void Right2() {
    string right2 = "You find another identical room, but this one has writing on the wall, as well as 4 paint buckets and a paintbrush. The writing says 'WATER COLOR' and there are 4 colors in the buckets: blue, white, clear, and grey. You also see a canvas to paint on. Which color do you put on the canvas?\n\n";
    cout << right2 << "1) Blue\n" << "2) White\n" << "3) Clear\n" << "4) Grey\n\n";
}
void Ending1() {
    string ending1 = "Hoping you did the right thing, you get nervous as the entire room begins to shake. Everything flashes red, and the walls begin to close in. 'No, no, this can't be the way I go' you think. You remember your family and your brothers and sisters and your parents and your friends and how much fun your life was, and now it is stopping too early. With eyes of tears, and the room now tiny, you gradually accept your death.\n";
    cout << ending1;
}
void Correct124() {
    string correct124 = "Hoping you did the right thing, you're relieved as a door opens to another room. You walk through the door and find another empty identical room, with a path going left and right. Which way do you go?\n\n";
    cout << correct124 << "1) Left\n" << "2) Right\n\n";
}
void Left3() {
    string left3 = "You find another identical room, but this one has a paper and pencil on the floor. The paper reads '9x7x52' and there is a line to write on. Using the pencil, what do you write on the line?\n\n";
    cout << left3 << "1) 3152\n" << "2) 3276\n" << "3) 3398\n" << "4) 3504\n\n";
}
void Right3() {
    string right3 = "You find another identical room, but this one has writing on the walls and a keyboard with the numbers 1 through 9. The writing on the wall says 'LEAP YEAR'. What button do you press on the keyboard?\n\n";
    cout << right3 << "1) 2\n" << "2) 3\n" << "3) 4\n\n";
}
void Left4() {
    string left4 = "You go left, and there is another identical room but no paths leading out of it.\n\n";
    cout << left4 << "1) Go to the right path instead\n\n";
}
void Right4() {
    string right4 = "You go right. You hear a noise coming from the ceilng of the identical empty room. You look up and realize there is water coming out of the ceiling. You try to go back but the pathway is closed. The water level gets higher and higher until you drown.\n";
    cout << right4;
}
void Correct3() {
    string correct3 = "Hoping you did the right thing, you're relieved as a door opens to another room. You walk through the door and find another empty identical room, with a path going left and right. Which way do you go?\n\n";
    cout << correct3 << "1) Left\n" << "2) Right\n\n";
}
void Left5() {
    string left5 = "You go left, and there is another identical room but no paths leading out of it.\n\n";
    cout << left5 << "1) Go to the right path instead.\n";
}
void Right5() {
    string right5 = "You go right. You see a strange, black gooey creature on the ground. It moves around, kind of cute, then all of a sudden grows 10 feet high and growls at you. You scream and run away, but the pathway back is blocked. You try your best to fight it, kicking it and punching it, but it's no use. Eventually the creature is holding you, about to eat you for dinner, but you escape and kick and punch it some more. Eventually you manage to kick a hole inside the creature. It screams and flops over, dead. Another pathway opens up. You go through it, still out of breath and scarred for life, and you see a strange box labeled 'Time Machine'. You gasp. It's what you've always dreamed of as a child! Maybe you can use it to escape the labyrinth?\n\n";
    cout << right5 << "1) Go 1 day in the past\n" << "2) Go 1 hour in the past\n" << "3) Go 1 day in the future\n" << "4) Go 1 year in the future\n\n";
}
void Ending3() {
    cout << "You use the time machine to go 1 day in the past. You suddenly find yourself walking down\n" << "the hallway of an old library. You look at the walls. It reminds you of the labyrinth. You\n" << "suddenly stop yourself from walking when you see a hole in the ground. You look down in \n" << "the hole and see the labyrinth that you were in before. You must have fallen down there! You\n" << "ask the librarian why there was a hole in the ground. She explains that there was a labyrinth\n" << "built underground many years ago to trap humans. It was supposed to be unescapable.\n" << "Then they built the library over the labyrinth, but forgot to remove the labyrinth itself. She \n" << "said that a book fell and made a hole in the ground, and that it would be fixed soon.\n\n" << "You walk out of the library back to your house, happy that you escaped the labyrinth.\n";
}
void Future1() {
    string future1 = "You use the time machine to go 1 day in the future. You go out of the time machine, in the same room you started. Nothing has changed.\n\nYou use the time machine to go back 1 day in the past, and try going somewhere different.\n\n";
    cout << future1;
}
void Future2() {
    string future2 = "You use the time machine to go 1 year in the future. You are in the same room. Nothing has changed.\n\nYou try to go back 1 year in the past but the time machine doesn't work anymore. You realize you forgot to read a warning on the back of the time machine 'Do not travel more than 1 week in the past or in the future, or time machine will burn out.'\n\nYou try to go back out of the room, but the pathway has closed.\n\nYou are stuck in that room until you thirst to death.\n";
    cout << future2;
}