// Final project combat

#include <iostream>
#include <cstdlib>
using namespace std;

int random_num(int x);
int spider_fight(int x, int y);

class entity
{
public:
    string name;
    int current_HP;
    int max_HP;
    entity(string x, int y, int z) 
    {
        name = x;
        current_HP = y;
        max_HP = z;
    }



};



int main()
{

    string player_name;
    cin >> player_name;
    entity player = entity(player_name,100,100);

    entity spider = entity("Spider", 30, 30);
    entity gobo = entity("Goblin", 50, 50);

    string wizard;
    cin >> wizard;
    entity wizard = entity(wizard, 100, 100);

    int temp = 0;
    int menu_input;

    cout << "Player HP " << player.current_HP << " / " << player.max_HP;
    cout << "    ";
    cout << "Spider HP " << spider.current_HP << " / " << spider.max_HP;
    cout << endl;

    cout << "1. attack\n";
    cin >> menu_input;

    while (menu_input != 1)
    {
        cout << "push 1\n";
        cin >> menu_input;
    }

    while (player.current_HP > 0 && spider.current_HP > 0)
    {
        spider_fight(player.current_HP, spider.current_HP);
        system("pause");
    }

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
int spider_fight(int x, int y)
{

        int dmg_done = 0;

        //For testing dmg rolls 
        x = x - random_num(dmg_done);
        y = y - random_num(dmg_done);

        cout << x << endl;
        cout << y << endl;

        return x, y;
}
