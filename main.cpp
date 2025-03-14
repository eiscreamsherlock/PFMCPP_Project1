#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:        cat
//  action 1:    the cat meows
cat.meow();
//  action 2:    the cat leaps
cat.leap();
//  action 3:    the cat plays jazz
cat.playJazz();
//  2)
//  Noun:        door
//  action 1:    the door opens
door.open();
//  action 2:    the door closes
door.close();
//  action 3:    the door slams
door.slam();
//  3)
//  Noun:        flower
//  action 1:    the flower grows
flower.grow();
//  action 2:    the flower blooms
flower.bloom();
//  action 3:    the flower withers
flower.wither();
//  4)
//  Noun:        hand
//  action 1:    the hand clenches
hand.clench();
//  action 2:    the hand opens
hand.open();
//  action 3:    the hand claps
hand.clap();
//  5)
//  Noun:        phone
//  action 1:    the phone rings
phone.ring();
//  action 2:    the phone catches fire
phone.catchFire();
//  action 3:    the phone connect to WiFi
phone.connectToWifi();
//  6)
//  Noun:        wind
//  action 1:    the wind blows
wind.blow();
//  action 2:    the wind howls
wind.howls();
//  action 3:    the wind propels a craft
wind.propel();
//  7)
//  Noun:        computer
//  action 1:    the computer computes
computer.compute();
//  action 2:    the computer crashes
computer.crash();
//  action 3:    the computer connects to internet 
computer.connectToInternet();
//  8)
//  Noun:        ball
//  action 1:    the ball bounces
ball.bounce();
//  action 2:    the ball rolls
ball.roll();
//  action 3:    the ball breaks a window
ball.breakWindow();
//  9)
//  Noun:        orbital space laser
//  action 1:    the orbital space laser moves
orbitalSpaceLaser.move();
//  action 2:    the orbital space laser aligns trajectory
orbitalSpaceLaser.alignTrajectory();
//  action 3:    the orbital space laser fires
orbitalSpaceLaser.pewPew();
//  10)
//  Noun:        dragon
//  action 1:    the dragon flies
dragon.fly();
//  action 2:    the dragon sleeps
dragon.sleep();
//  action 3:    the dragon breathes fire
dragon.breatheFire();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
