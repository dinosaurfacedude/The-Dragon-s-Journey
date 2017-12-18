#include <iostream>
//This is just a short exercize I made in between semesters at my college
//I was afraid of getting rusty, you see
//I will probably make other games using other techniques
using namespace std;

int main()
{
    //These are the variables that allow you to make whatever choice you want. I probably could have used less, or maybe an array, but whatever.
    int choice, winornot, passage, rase, play=1;
    //This do while loop keeps the game running even if you aren't running this inside an IDE
    //I figured people would want to simply double click on a desktop icon instead of going to the trouble of booting an IDE, and then running it there
    //Even if you are running this in an IDE, it is still easier to press a button on your keyboard to restart than pressing the run button on your toolbar
do
{

   cout << "The Dragon's Journey" << endl << " Copyright trololol" << endl << endl;

    cout << "For ages, the wicked dragon has loomed over the good kingdom of Bakhairistan" << endl;
    cout<< "The princess has been captured. The dragon in his wickedness swooped her out of her room for lunch" << endl;
    cout << "The king has not yet despaired. The warrior known as \"The Goode Knight\" has risen to the challenge of defeating this wicked beast." << endl;
    cout << "Will you defeat it? To find out, please choose your weapon by typing the corresponding number!" << endl;
    cout << endl << endl;
    cout << "1. magicky sword of mcguffin" << endl << "2. Magic Ring" << endl << "3. Fried Chicken" << endl;
    cout << "4. The power of friendship" << endl;
cin >> choice;
        switch (choice)
        {
            case 1:
            cout << endl << "The Magicky Sword of Mcguffin is the most powerful sword in the history of the kingdom" << endl;
            cout << "It was forged in the dark pits of badness more than a jillion years ago by the dark lord Bad Guy" << endl;
            cout << "Some short guys came and killed him" << endl;
            cout << "You swing your sword with the legacy of a thousand moons. Did you hit the dragon?" << endl;
            cout << "1. Yes" << endl << "2. Nope :-\(" << endl;
cin >> winornot;
           switch (winornot)
           {
        case 1:
            cout << endl << "You have smitten the dragon. You enter the lair. As you look around, you see two passages." << endl;
            cout << "The left passage smells nasty and dingy, but the right passage smells like roses and beauty." << endl;
            cout << "which passage do you take?" << endl << endl << "1. left" << endl << "2. right" << endl;
cin >> passage;
            switch (passage)
                {
                case 1:
            cout <<"You find the princess in a bare room that smells like body odor" << endl << "The princess smells like she hasn't bathed in months" << endl;
            cout <<"She has a pizza face too. As she reaches out to hug you, you notice that her skin is oily. Her hand looks brown, as though she has put it into a spitoon." << endl;
            cout <<"She's perfect. You get married, and live stinkily ever after";
                break;
                case 2:
            cout << "The passage on the right smells REALLY good. As you enter, you get delusional from the sweet fumes." << endl << "at least you have found fairyland, even if its only a hallucination" << endl;
            cout << "you live shortly, but also happily ever after" << endl;
                }
                break;
        case 2:
            cout << "you made an excellent lunch. The princess will make a wonderful dessert." << endl;
                break;
           }
                break;
           //This next line of code is an obvious jab at bronies. PLZ FORGIB MEH!
        case 2:
            cout << "You take out the magic ring, though you don't know anything about its history or powers. You burp." << endl << "The dragon sees it." << endl;
            cout << "In traditional dragon custom, burping while holding a ring is a sign of love. The dragon accepts your proposal." << endl;
            cout << "Eh, at least it's a hot dragon." << endl << "Years pass, the princess is still missing, and you are labeled as a traitor. At least you have a lovely dragon wife and a lovely dragon son." << endl;
            cout << "Unfortunately, all is not well. Your son has reached adolescence, and has been wearing thrasher T-shirts. He has also become emo, which is unusual for dragons." << endl;
            cout << "Do you accept his cringe, or do you act like a father and make him stop before he shames your household?" << endl;
            cout << "1. Let him be" << endl << "2. Make him stop" << endl;
            //I misspelled raise in the variable. Oops.
            cin >>  rase;
            switch (rase)
            {
            case 1:
            cout << "He embarrasses himself. His self esteem takes a hit, but now he is more creative than he used to be." << endl;
            cout << "He gets a lot of OTHER bad ideas, though. Within a week of ending his emo stage, he starts a Fantasytube channel for vlogs, let's plays, theory videos, and unboxing videos." << endl;
            cout << "He gets moderate success, but among the thousands of other dragons on Fantasytube, he never stands out." << endl;
                break;
            case 2:
                cout << "He wizens up, and starts being responsible for himself. He gets good marks in school, makes it to an ivy league dragon college as a princess kidnapping major." << endl;
                cout << "Amongst the thousands of other princess kidnapping majors, he never stands out. He wishes he went into accounting instead." << endl;
            }
                break;
            case 3:
                cout << endl << "Mah man!" << endl << endl;
                cout << "despite the chicken's delicious delectableness, the dragon only sees this as extra flavor." << endl;
                cout << "at least you smelled like chicken as you died. Not a bad way to go." << endl;
                break;
            case 4:
                cout << "You have one of the Elements of Harmony on you. As you think of your fellow cringe-worthy brethren, you glow with power." << endl;
                cout << "The hairs on your neckbeard are tingling. As you focus the power of friendship towards the dragon, it realizes that it is no match against the pure cringe that you are." << endl;
                 cout << endl << "You have smitten the dragon. You enter the lair. As you look around, you see two passages." << endl;
            cout << "The left passage smells nasty and dingy, but the right passage smells like roses and beauty." << endl;
            cout << "which passage do you take?" << endl << endl << "1. left" << endl << "2. right" << endl;
//I think I might have misspelled this next variable too.
cin >> passage;
            switch (passage)
                {
                case 1:
                    cout <<"You find the princess in a bare room that smells like body odor" << endl << "The princess smells like she hasn't bathed in months" << endl;
                    cout <<"She has a pizza face too. As she reaches out to hug you, you notice that her skin is oily. Her hand looks brown, as though she has put it into a spitoon." << endl;
                    cout <<"She's perfect. Unfortunately, the neckbeard power within you is too overwhelming, and she disintegrates before your eyes.";
                break;
                case 2:
                    cout << "The passage on the right smells REALLY good. As you enter, you get delusional from the sweet fumes." << endl << "at least you have found fairyland, even if its only a hallucination" << endl;
                    cout << "you live shortly, but happily ever after" << endl;
                    break;
                }
        }
        cout << "Wanna play again?" << endl << "1. yes" << endl << "2. no" << endl;
        cin >> play;
        }
        while (play!=2);

    return 0;
}
//This was a REALLY brief exercise. It took me about 3 hours to throw together
