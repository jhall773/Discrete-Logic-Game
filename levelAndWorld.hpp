#include <iostream>
#include <stdbool.h>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;
int coins = 0; int lives = 5; bool GAME_OVER_DEAD = false; bool GAME_COMPLETE = false;

bool Start_Message()
{
  char begin;
  cout<<"Hi. Welcome to the \"Discrete and Logic Adventure RPG: A Quest to Heal a Mother's Sickness\". Please press the \"x\" key to begin.";
  cin>>begin;
  while((begin != 'x') && (begin != 'X'))
  {
            cout << "I'm sorry. That input is not valid. Please press the \"x\" key to begin the game.";
            cin >> begin;
  }
    cout<<"Background: Once upon a time, there were two siblings. Crystine and Zeke. Unfortunately for the two of them, their beloved mother contracted a rare sickness, one in which no one from their mainland had a cure. Their father tells them about a far away land. One which may have an answer for such a terrible disease. At first, their father tells them of the unlikelyhood of them being able to even get to this land because of his current condition, being an injured man, bearly able to walk in his crippled state. However, after his dear children desperately cry out and plead with their father to give them a chance to rescure their mother, their father, just as any father would, does his best to make provisions and prepare Crystine and Zeke for the journey. Then he reminds them to always be respectful and to have manners, to always be kind, and to always use their head to logic their way through tough problems. He tells them as much information as he could remember about the supposedly distant land and he and his wife told their children that they loved them, with his dear wife hoping that it would not be for the very last time.\n";
    return true;
}

void Game_Complete()
{
  cout<<"Crystine: Check \"next week's crate\"!\nRuby: Really, are you sure? Boys! Check the crate for next week for the rubies! (Speaking after a few moments, after one of her miners brings the ruby to her) You did it! I'm shocked! You kids actually figured this out! Now, of course, as a thsnk you for helping me with my predicament, I can spare another ruby that again, is worth 50 coins. If you can, I can't give you this oen though becasue it's too valuable. Quite frankly, there would be no point in us doing buisiness without this thing.\nZeke: Well actually, I'd say we might need a little more-\nCrystine: WAYS TO SAY THANK YOU (She cut him off before his mouth could finish anything else)! We REALLY appreaciate this reward your giving ma'am, and we wish your entire crew a large revenue this year!\nRuby: Why thank you for the best wishes! I'm sure my guys sure appreaiate that!\nNarrator: After the guard takes Crystine and Zeke back to the office, she gives them a beautifully pure red ruby for their efforts. After Crystine and Zeke go back to the guard, they show him the ruby, and Crystine implores him to allow her and her brother to present their gift and their inquiry to the King in person. The guard, seeing that they now had something worthy and valuable for the King in their possesion, decides that it will suffice to allow them to pass. Once Cystine and Zeke reach the King, they first present him with their ruby gift, after explaining that they are rather young, and that they had a somewhat challenging journey from a far away land in hopes that in his kindness and grace that he might respond to their situation. After the two of them present their ruby before the King, he allows them to speak. When they explain their inquiry about their mother's sickness, and humbly ask for medicine to heal them, the King grants their request, the King's heart is stirred, and he send them off with some of the best produce and even some coins in order for them to make their journey back home. Not only that, but Cystine and Zeke's story inspires the King to make a change with his land. He decides to make his palace more accessible with stairs, and to lower the rates of vistitaion for those with what he considered \"urgent\" matters.\nCongradulations on your completion of this game! I hope you enjoyed it! The game will now reset itself.\nGAME COMPLETE!";
}


class World
{
    private: string name;

    public:
    
     void setName(string WorldName){name = WorldName;};
     void printName(){cout << "\tYou are currently in " << name <<"\n\n";};
     bool readyToPlay;

     bool readytoLeave()
     {
        char n;
        cout << "Please press the R key to see the world-option menu screen.";
        cin >> n;
        while((n != 'r') && (n != 'R'))
        {
            cout << "I'm sorry. That input is not valid. Please press the r key to see the world-option menu screen.";
            cin >> n;
        }
        readyToPlay = false;
        return true;
     };

     void displayWorld(string one, string two, string three, bool levelDoneOne,  bool levelDoneTwo, bool levelDoneThree)
     {
        /*Prints the Name of the Current World First, then prints the Levels that are left to complete afterwards
        (hiding completed levels from the user's visibility to prevent confusion)*/
        
        cout<<"\n\n";
        printName();
        if( (levelDoneOne == false) && (levelDoneTwo == false) && (levelDoneThree == false) )
        {
            cout << one << "   " << two << "   " << three << " Coins: " << coins << "  Lives: " << lives<< "\nPlease press the \"f\" key to play "<<one<<"\n";
        }
        else if((levelDoneOne == true) && (levelDoneTwo == false) && (levelDoneThree == false))
        {
            cout << two << "   " << three << " Coins: " << coins << "  Lives: " << lives<<"\nPlease press the \"n\" key to play "<<two<<"\n";
        }
        else if((levelDoneOne == true) && (levelDoneTwo == true) && (levelDoneThree == false))
        {
            cout << three << " Coins: " << coins << "  Lives: " << lives<<"\nPlease press the \"l\" key to play "<<three<<"\n";
        }
     };

     void WorldPassed()
     {
            for(int i = 0; i < 20; i++)
            {
                cout << "\n";
            }
            //Making room and preparing Terminal for Next World to Do Its Thing
            cout << "----------------------------------------------------\t\t\t";
            cout << "Coins: " << coins << "   Lives: " << lives;
            cout << "\n\nCongradulations! It's time for a new world!";
            readytoLeave();
     };
};


class Level
{
    private: string name; bool isPassed = false; string dialogue; string instructions; string answer; bool isLevelOne = false; char buy; bool isLevelTwo = false; bool isItemHouse = false; bool isLastLevel;

/*Virtual functions are "virtual" in order for the Item House Levels to have their own version of level passage requirements,
display, and name setting*/

    public:
        virtual void setName(string levelName){name = levelName;};
        void setIsLastLevel(bool gameDone){isLastLevel = gameDone;};
        void setIsLevelOne(bool level){isLevelOne = level;};
        void setIsLevelTwo(bool levelT){isLevelTwo = levelT;};
        void setIsItemHouse(bool isItem){isItemHouse = isItem;};
        void setDialogue(string levelDialogue){dialogue = levelDialogue;};
        void setInstructions(string levelObjective){instructions = levelObjective;};
        void setAnswer(string levelAnswer){answer = levelAnswer;};

        virtual bool getIsPassed(){return isPassed;};
        bool getIsItemHouse(){return isItemHouse;};
        void reset(){isPassed = false;};
        virtual string getName(){return name;};

    virtual void displayLevel()
    {
        cout << dialogue << "\n\n" << instructions << "\n\n";
        if(isLevelTwo)
        {
            coins = coins - 2;
        }
    };

    virtual void CheckPassed(World* currentWorld)
    {
        string userIn;
        cin >> userIn;
        
        if(userIn.compare(answer)==0)
        {
            cout << "That is the correct Answer!\n\n";
            isPassed = true;
            if(isLevelOne)
            {
                coins = coins + 5;
            }
            if(isLevelTwo)
            {
                coins = coins + 3;
            }
            if(isLastLevel)
            {
                GAME_COMPLETE = true;
            }
        }
        else
        {
            cout << "Unfortunately, that answer is incorect.\n\n";
            lives = lives - 2;
        }
       currentWorld->readytoLeave();
    };

        virtual void playlevel(World* currentWorld)
        {
            char menuInput;
            cin>>menuInput;
            if( (menuInput == 'f') || (menuInput == 'F'))
            {
                displayLevel();
                CheckPassed(currentWorld);
            }
            else if((menuInput == 'n') || (menuInput == 'N'))
            {
                displayLevel();
                CheckPassed(currentWorld);
            }
            else if( (menuInput == 'l') || (menuInput == 'L'))
            {
                displayLevel();
                CheckPassed(currentWorld);
            }
        };
};

class ItemHouse : public Level
{
    private: string name; int liveCost = 2; int liveGained = 2; int hintCost = 3; bool isPassed = false; string instructions; string hint; char worldPosition;

    public:
        char buy;  //User input to determine what type of item the user bought.
        bool bought = false;  /*Global variable that determines if an item was bought from the ItemHouse, thus determining if the 
                                level is completed or not. */

        void setName(string levelName){name = levelName;};
        void setLiveC(int lcost){lcost = liveCost;};
        void setHintsC(int hcost){hcost = hintCost;};
        void setLiveG(int lg){lg = liveGained;};
        void setOptions(string items){instructions = items;}; 
        void setHint(string levelHint){hint = levelHint;};
        void setWorldPosition(char Position){worldPosition = Position;};

        bool getIsPassed(){return isPassed;};
        void reset(){isPassed = false;};
        string getName(){return name;};
        void cost()
        {
                if (buy == 'a')
                {
                    coins = coins - liveCost;
                    lives = lives + liveGained;
                    cout<<"Purchased! Eat up!\n";
                }
                else if (buy == 'c')
                {
                    coins = coins - hintCost;
                    cout<<"Purchased! Your hint to give you some guidance is: "<<hint<<"(You might want to write this down.)\n";
                }
        };
    
        void displayLevel()
        {
            cout << instructions << "\n\n";
            bought = true;
        }

        void checkPassed(World* currentWorld)
             {
                while( (!((buy == 's') || (buy == 'S'))) && (bought == false))
                {
                    displayLevel();
                    cin >> buy;
                    cost();
                }
                isPassed = true;
                currentWorld->readytoLeave();
             };

        void playlevel(World* currentWorld)
        {
            char menuInput;
            cin>>menuInput;
            if((menuInput == worldPosition))
            {
                checkPassed(currentWorld);
            }
        };
};

//Resets all of the levels isPassed variables back to their initial false values, using each level's reset() function
void reset_Game(Level* one, Level* two, Level* three, Level* four, Level* five, Level* six, Level* seven, Level* eight, Level* nine, Level* ten)
{
    coins = 0;
    lives = 5;

    one->reset();
    two->reset();
    three->reset();
    four->reset();
    five->reset();
    six->reset();
    seven->reset();
    eight->reset();
    nine->reset();
    ten->reset();
}

/*This function uses the displayWorld functions of each World and its respective levels in order to "execute" or 
  "take the user through that world". The multiple exectute world functions in succession in the main game, allow for the code to
  continue the game based on user input, and constantly display one new wrold after the other until the game is finished.
*/
  
void executeWorld(World* currentW, Level* firstL, Level* secondL, Level* thirdL)
{
                while((firstL->getIsPassed() !=true) && (lives > 0))
                {
                    currentW->displayWorld(firstL->getName(), secondL->getName(), thirdL->getName(), firstL->getIsPassed(), secondL->getIsPassed(), thirdL->getIsPassed());
                    firstL->playlevel(currentW);
                }
                
                while((secondL->getIsPassed() !=true) && (lives > 0))
                {
                    currentW->displayWorld(firstL->getName(), secondL->getName(), thirdL->getName(), firstL->getIsPassed(), secondL->getIsPassed(), thirdL->getIsPassed());
                    secondL->playlevel(currentW);
                }

                while((thirdL->getIsPassed() !=true) && (lives > 0))
                {
                    currentW->displayWorld(firstL->getName(), secondL->getName(), thirdL->getName(), firstL->getIsPassed(), secondL->getIsPassed(), thirdL->getIsPassed());
                    thirdL->playlevel(currentW);

                }

                if (lives > 0)
                {
                    currentW->WorldPassed();  
                } 
}

/*This function restes the game with a conclusion and final completion message if completed, or a Game Over message 
  if the deaths exceeded the limit. Then, it restes all the levels and gives the start message for the user to replay the game. */

void GAME_OVER(Level* LevelOne, Level* LevelTwo, Level* LevelThree, Level* LevelFour, Level* LevelFive, Level* LevelSix, Level* LevelSeven, Level* LevelEight, Level* LevelNine, Level* LevelTen)
{
    if(GAME_OVER_DEAD)
    {
        cout<<"Unfornteounately, you have lost all of your lives and you will have to restart the game from the beginning. Sorry!\nGAME OVER!";
    }

    else
    {
        Game_Complete();
    }
    Start_Message();
    reset_Game(LevelOne, LevelTwo, LevelThree, LevelFour, LevelFive, LevelSix, LevelSeven, LevelEight, LevelNine, LevelTen);
    GAME_OVER_DEAD = false;
    GAME_COMPLETE = false;
}
