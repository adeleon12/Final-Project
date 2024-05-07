// Alazeriss De Leon


#include <iostream>

using namespace std;


void next_page(); // Wipe page to allow for easy reading
void skip_line() {
    cout << endl;
}
void print(string); 
void game_over();

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
    cout << "You're name is " << player_name << endl;
    print("intro");
    skip_line();
    system("pause");
    skip_line();
    print("cave intro");
    skip_line();

    
    

    //for loop to go through all 5 rooms 
    for (int i = 0; i < 5; i++) 
    {
        const int size = 5;
        int map_array[size];
        map_array[i] = 1;

        //Room 1
        while (map_array[0] == 1) 
        {
            print("You have entered room 1");
            system("pause");
            print("Combat scene place holder");
            break;
        }
        //Room 2
        while (map_array[1] == 1) 
        {
            print("You have entered room 2");
            system("pause");
            print("combat placeholder");
            break;
        }
        //Room 3
        while (map_array[2] == 1) 
        {
            print("You have entered room 3");
            system("pause");
            print("combat placeholder");
            break;
        }
        //Room 4
        while (map_array[3] == 1) 
        {
            print("You have entered room 4");
            system("pause");
            print("combat placeholder");
            break;
        }
        //Room 5
        while (map_array[4] == 1) 
        {
            next_page();
            print("You have entered room 5");
            system("pause");
            print("combat placeholder");
            break;
        }
        
        map_array[i] = 0;
    
    }

    

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
};
void print(string toPrint) {
    cout << toPrint << endl;
}
void game_over() {
       
        cout << "You have died and your sheep will never be avenged.\n";
        cout << "GAME OVER\n";
        
}