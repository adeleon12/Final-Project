// Alazeriss De Leon


#include <iostream>
#include <cstdlib>

using namespace std;

int random_num();
void next_page(); // Wipe page to allow for easy reading
void next_page1();
void next_page2();
void next_page3();
void next_page5();
void wiz_dialouge();
void skip_line() {
    cout << endl;
}
void print(string);
void game_over();
void intro();
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

void fight(entity& player, entity& enemy);
void hp_Reset(entity& player);

int main()
{
    cout << "Cave Dungeon\n";
    skip_line();
    cout << "A simple game with simple rewards\n";
    skip_line();
    cout << "Press 1 to play or 0 to quit\n";

    int play;
    cin >> play;
    if (play == 0)
    {
        return 0;
    }

    string player_name;
    print("Please enter your name");
    cin >> player_name;
    entity player = entity(player_name, 100, 100);
    entity bat = entity("Bat", 20, 20);
    entity spider = entity("Spider", 30, 30);
    entity goblin = entity("Goblin", 50, 50);
    entity skeleton = entity("Skeleton", 60, 60);
    
    

    cout << "You're name is " << player_name << endl;
    intro();
    skip_line();
    system("pause");


    //for loop to go through all 5 rooms 
    for (int i = 0; i < 5; i++)
    {
        const int size = 5;
        int map_array[size];
        map_array[i] = 1;

        //Room 1
        while (map_array[0] == 1)
        {
            next_page();
            print("You have entered room 1");
            print("You begin to fight a large Bat");
            next_page();
            system("pause");
            while (player.current_HP > 0 && bat.current_HP > 0)
            {
                fight(player, bat);
            }
            if (player.current_HP == 0) 
            {
                next_page();
                game_over();
                return 0;
            }
            hp_Reset(player);
            break;
        }
        //Room 2
        while (map_array[1] == 1)
        {
            next_page();
            print("You have entered room 2");
            print("After only taking a couple of steps into the room a giant spider comes down from the ceiling.");
            print("It looks at you with hunger and you prepare to fight and not be it\'s next meal.");
            next_page1();
            system("pause");
            while (player.current_HP > 0 && spider.current_HP > 0)
            {
                fight(player, spider);
            }
            if (player.current_HP == 0)
            {
                next_page();
                game_over();
                return 0;
            }
            hp_Reset(player);
            break;
        }
        //Room 3
        while (map_array[2] == 1)
        {
            next_page();
            print("You have entered room 3");
            print("Upon entering the room you are ambushed by a goblin.");
            print("As he jumps at you, you side-step him and dodge his attack.");
            print("After turning back to you, he perpares to engage in combat.");
            next_page2();
            system("pause");
            while (player.current_HP > 0 && goblin.current_HP > 0)
            {
                fight(player, goblin);
            }
            if (player.current_HP == 0)
            {
                next_page();
                game_over();
                return 0;
            }
            hp_Reset(player);
            break;
        }
        //Room 4
        while (map_array[3] == 1)
        {
            next_page();
            print("You have entered room 4");
            print("You find a skeleton and it attacks you.");
            next_page();
            system("pause");
            while (player.current_HP > 0 && skeleton.current_HP > 0)
            {
                fight(player, skeleton);
            }
            if (player.current_HP == 0)
            {
                next_page();
                game_over();
                return 0;
            }
            hp_Reset(player);
            break;
        }
        //Room 5
        while (map_array[4] == 1)
        {
            next_page();
            print("You have entered room 5");
            next_page();
            system("pause");
            wiz_dialouge();
            string wizard_name;
            print("Name the Necromancer");
            cin >> wizard_name;
            entity wizard = entity(wizard_name, 100, 100);
            cout << "\"Yes, my name is " << wizard_name << " now prepare to meet your end.\"" << endl;
            while (player.current_HP > 0 && wizard.current_HP > 0)
            {
                fight(player, wizard);
            }
            if (player.current_HP == 0)
            {
                next_page();
                game_over();
                return 0;
            }
            break;
        }

        map_array[i] = 0;

    }
    cout << "Having defeated the necromancer you look for a way out of the cave." << endl;
    cout << "After a bit of searching you find a way out, and loop back to the inital cave entrance." << endl;
    cout << "There you see the other men you came with." << endl;
    cout << "After greeting them, you all walk back as you reveal to them of the adventure you just had." << endl;
    cout << "THE END" << endl;
    return 0;

}

void next_page()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
};
void next_page1()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
};
void next_page2()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
};
void next_page3()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
};
void next_page5()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
};
void print(string toPrint) {
    cout << toPrint << endl;
}
void game_over() {

    cout << "You have died and your sheep will never be avenged.\n";
    cout << "GAME OVER\n";

}
void intro() {
    next_page();
    cout << "You are a son of a shepherd and every night one of your sheep go missing." << endl;
    cout << "This has been going on for a week and you decide to find out what keeps happening." << endl;
    next_page();
    system("pause");
    next_page();
    cout << "So, one night you stay out hidden and wait to see what happens." << endl;
    cout << "During the night you hear a melody begin to play and one of your sheep seems to follow in the direction of the song." << endl;
    cout << "Following the sheep, you find the music leads to a cave not far, but tucked away in some woods." << endl;
    next_page1();
    system("pause");
    next_page();
    cout << "Entering the cave you find that the music continues deeper inside the cave." << endl;
    cout << "Not being prepared for such a task you head back home for the night." << endl;
    next_page();
    system("pause");
    next_page();
    cout << "The next morning you wake up and ask around the village for help," << endl;
    cout << "but coming from a farming village not many offer to help. " << endl;
    cout << "In the end, only a two men come to your aid." << endl;
    next_page1();
    system("pause");
    next_page();
    cout << "After three days of days of preparation, you venture off to the cave with the others. " << endl;
    cout << "Entering the cave you and the 2 other men come across a small abandoned campsite with many strange metal music boxes." << endl;
    cout << "You believe the music box to be the source of the melody at night and with multiple of them you can only assume that the person playing them has more boxes deeper within the cave." << endl;
    next_page2();
    system("pause");
    next_page();
    cout << "One of the other men suggests to keep going as whatever is deeper in the cave would find out that someone has discovered the cave." << endl;
    cout << "Losing the element of surprise would make it harder down the line to stop whatever it is that is taking your sheep," << endl;
    cout << " so you agree and head deeper." << endl;
    next_page2();
    system("pause");
    next_page();
    cout << "While exploring the cave you and the other men notice and follow some makeshift torches " << endl;
    cout << " believing that they will help you find the person responsible." << endl;
    cout << "As you make your way deeper there is a fork in the cave with torches along the wall in both directions." << endl;
    cout << "One man asks if splitting up would be the right move as there is no telling which way is the correct path." << endl;
    cout << "The other man agrees and you are left to head deeper alone for the time being." << endl;
    cout << "Before leaving everyone agrees to meet back at the fork after an hour, and if one team doesn't show up they will wait at the entrance of the cave until tomorrow morning." << endl;
    next_page5();
    system("pause");
    next_page();
    cout << "Not long after leaving the other men you notice a path stops at a steep ledge. " << endl;
    cout << "Being the only way to continue you jump off the ledge." << endl;
    cout << "After landing you look back up and realize the ledge is too high to climb back up." << endl;
    cout << "With no other option you continue to follow the torches and hope whatever is down here has a way to get back up." << endl;
    next_page3();
}
void wiz_dialouge() 
{
    cout << "After entering the room, you see what appears to be a man in a robe." << endl;
    cout << "As you watch him pace back and forward, he is visibly shaken." << endl;
    cout << "With every step he looks as if he could fall over." << endl;
    cout << "Then out of the corner of his eye, he notices you." << endl;
    cout << "He looks away from you and then his face turns to shock as he whips his head back in your direction." << endl;
    cout << "Putting on a brave face he says \"So you have come to face me and stop my evil plan of becoming a necromancer.\" " << endl;
    cout << "\"But you are too late, for I have already learned what I need, now face my most powerful minion." << endl;
    cout << "As he says that, a small chicken comes charging out for you." << endl;
    cout << "You ready to fight the chicken, it slips and falls over." << endl;
    cout << "It makes a loud scream then stops moving altogether." << endl;
    cout << "You and the necromancer stare at the chicken for a second to see if it moves." << endl;
    cout << "The necromancer then screams out \"You shall pay for killing my minion.\" " << endl;
    cout << "\"You will regret ever crossing paths with me.\"" << endl;
    cout << "\"For my name is \"" << endl;
}
//Function that should return the dmg value to be used for combat
int random_num()
{

    srand((unsigned)time(NULL));
    //Damage range should be from 1 to 10
    int dmg_roll;
    const int max_dmg = 10;

    dmg_roll = 1 + (rand() % max_dmg);

    return dmg_roll;
}
//function for fighting system
void fight(entity& player, entity& enemy)
{

    //dmg roll and to show enemy hp
    next_page();
    enemy.current_HP -= random_num();
    cout << "You hit the enemy for " << random_num() << " dmg" << endl;
    if (enemy.current_HP < 0) 
    {
        enemy.current_HP = 0;
    }
    cout << enemy.name << "        " << enemy.current_HP << "/" << enemy.max_HP << " HP" << endl;
    if (enemy.current_HP == 0)
    {
        cout << "The enemy has died." << endl;
        next_page();
        system("pause");
        return;
    }
    next_page();

    system("pause");

    //dmg roll and to show player hp
    next_page();
    player.current_HP -= random_num();
    cout << "The enemy hit you for " << random_num() << " dmg" << endl;
    if (player.current_HP < 0)
    {
        player.current_HP = 0;
    }
    cout << player.name << "       " << player.current_HP << "/" << player.max_HP << " HP" << endl;
    next_page();

    system("pause");

}
void hp_Reset(entity& player)
{
    player.current_HP = 100;
}