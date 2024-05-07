// Final project combat

#include <iostream>
#include <cstdlib>
using namespace std;

int random_num(int x);
void spider_fight();

int main()
{
    int player_hp = 100;
    const int max_player_hp = 100;

    int goblin_hp = 50;
    const int max_goblin_hp = 50;

    int wizard_hp = 100;
    const int max_wizard_hp = 100;

    int temp = 0;

    
    spider_fight();
}

//Function that should return the dmg value to be used for combat
int random_num(int x)
{
    
    srand((unsigned)time(NULL));
    //Damage range should be from 1 to 10
    int dmg_roll;
    const int max_dmg = 10;
    
    dmg_roll = 1 + (rand() % max_dmg);
    
    return dmg_roll;
}
//function for entire spider fight
void spider_fight()
{
    int player_hp = 100;
    const int max_player_hp = 100;

    int spider_hp = 30;
    const int max_spider_hp = 30;
    
    const int max_turns = 5;
          int temp_player_hp = 5;
          int temp_spider_hp = 2;

    //Loop for combat turns until something dies
    for (int i = 0; i < max_turns; i++)
        {
          int menu_input;
          int dmg_done = 0;


          // After first loop player and spider hps display 0
          // Don't know why but loop also doesn't read as a 0
          // For loop might not be grabbing the variable again past first itteration
          // But it does for the new temp values that I made
          cout << "Player hp " << temp_player_hp << " / " << max_player_hp;
          cout << "     ";
          cout << "Spider hp " << temp_spider_hp << " / " << max_spider_hp
                << endl;

          cout << "1. attack\n";
          cin >> menu_input;
         
          //loop to make user press 1 doesn't catch chars or strings
          while (menu_input != 1)
            {
                cout << "just push 1\n";
                cin >> menu_input;
            }

          //For testing dmg rolls 
          cout << random_num(dmg_done) << endl;


          //Break for loop when player dies
          //Broken doesn't read hp as 0 even if displayed as 0
          if (player_hp = 0 || player_hp < 0)
          {
              cout << "you died\n";
              break;
          }
          //Break for loop when spider dies
          //Broken doesn't read hp as 0 even if 0 is displayed
          if (spider_hp = 0 || spider_hp < 0)
          {
              cout << "spider died\n";
              break;
          }
    }
      // Testing so can see when for loop ends
      cout << "for loop ended\n";

}

