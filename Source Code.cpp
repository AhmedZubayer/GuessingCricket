/*

Cricket game....v2.2

[Last update of this version: February 21, 2023]

Updates:
1. Chrono-system-clock generated seed.
2. Replaced the usage of extra variables for special ASCII characters with raw string literal.
3. Added a QR code in About section. Scanning it will help to go: https://github.com/ThisIsZubayer/GuessingCricket
4. Taking user input using getch() so that user do not need to press enter each time.
5. Stopped unnecessary presence of caret and blinking.
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<chrono>
#include<string>
#include<windows.h>
using namespace std;


///Function Declarations


//Hiding caret
void ShowConsoleCursor(bool showFlag){
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}

//UI
void intro_title();
void intro();
void intro_startup();
void intro_menu();
void howto();
void about();
void quit();
void gamemode();
void lvl_selection();

//Game graphics
void out();
void four();
void six();
void loading_screen();

//In-game functions
void toss_easy();
void batting_1st_easy();
void bowling_1st_easy();
void toss_medium();
void batting_1st_medium();
void bowling_1st_medium();
void toss_hard();
void batting_1st_hard();
void bowling_1st_hard();
void twoplayer_mode();

///Main Function
int main(){


    system("title GUESSING CRICKET");
    system("mode 650");
    system("color e");
    ShowConsoleCursor(false);
    //Seed generation for srand()
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    srand(seed);

    //Introductory Screen


cout<<R"(
                                      ўўўўўўў    ўўўў    ўўўў   ўўўўўўўў   ўўўўўўўў    ўўўўўўўў  ўўўў   ўўўў     ўўў     ўўўўўўўў
                                   ўўўўўўўўўў    ўўўў    ўўўў   ўўўўўўўў  ўўўў        ўўўў       ўўўў   ўўўўў    ўўў   ўўўўўўўўўў
                                  ўўўў           ўўўў    ўўўў   ўўўў      ўўўўў       ўўўўў      ўўўў   ўўўўўўў  ўўў  ўўўў
                                  ўўўў  ўўўўўў   ўўўў    ўўўў   ўўўўўўўў    ўўўўўўўў    ўўўўўўў  ўўўў   ўўў ўўўўўўўў  ўўўў  ўўўўўў
                                  ўўўўў   ўўўў   ўўўўў  ўўўўў   ўўўў            ўўўў       ўўўў  ўўўў   ўўў   ўўўўўў  ўўўўў   ўўўў
                                    ўўўўўўўўўў     ўўўўўўўў     ўўўўўўўўў ўўўўўўўўў   ўўўўўўўў   ўўўў   ўўў     ўўўў    ўўўўўўўўўў

                                                                           ллллллллллллллллл
                                                                    лллллллл               лллллллл
                                                                лллл                ллллллллллл    лллл
                                                             ллл                ллллллл         лллллллллл
                                                           лл               лллллл       ллллл           ллл
                                                         лл              ллллл      лллл        ллллллллллл лл
                                                       лл             ллллл     ллл        лллллллл           лл
                                                      лл            ллллл    ллл      ллллллл                  лл
                                                     лл           лллл     лл      ллллл                        лл
                                                    лл          лллл    ллл     лллл                             лл
                                                   лл          лллл   ллл    лллл                                 лл
                                                   лл         ллл    лл    лллл                                   лл
                                                  лл        лллл    лл    ллл                                      лл
                                                  лл       лллл   лл    лллл                                       лл
                                                  лл      ллл    лл    ллл                                         лл
                                                  лл     лллл   лл    ллл                                          лл
                                                   лл   лллл    л    ллл                                          лл
                                                    лл  ллл    лл   ллл                                          лл
                                                     лл ллл   лл   ллл                                          лл
                                                      ллллл  лл    ллл                                         лл
                                                        лл   лл   ллл                                        ллл
                                                         ллллл   ллл                                      ллл
                                                           ллл   ллл                                     ллл
                                                              ллллл                                   ллл
                                                                 лллл                             лллл
                                                                      лллллл               лллллл
                                                                             ллллллллллллл

                                       ўўўўўўў   ўўўўўўўўўўўў    ўўўўў         ўўўўўўў  ўўўўў    ўўўўўў  ўўўўўўўўўў  ўўўўўўўўўўўўў
                                   ўўўўўўўўўўў   ўўўўўўўўўўўўў   ўўўўў     ўўўўўўўўўўў  ўўўўў   ўўўўў    ўўўўўўўўўў  ўўўўўўўўўўўўў
                                  ўўўўў          ўўўўў   ўўўўў   ўўўўў    ўўўўў         ўўўўў  ўўўўў     ўўўўў           ўўўўў
                                 ўўўўў           ўўўўўўўўўўўў    ўўўўў   ўўўўў          ўўўўўўўўўў       ўўўўўўўўўў      ўўўўў
                                 ўўўўўў          ўўўўў ўўўўў     ўўўўў   ўўўўўў         ўўўўў ўўўўўў     ўўўўў           ўўўўў
                                  ўўўўўўўўўўўў   ўўўўў  ўўўўў    ўўўўў    ўўўўўўўўўўўў  ўўўўў   ўўўўў    ўўўўўўўўўў      ўўўўў
                                    ўўўўўўўўўў   ўўўўў   ўўўўў   ўўўўў      ўўўўўўўўўў  ўўўўў    ўўўўўў  ўўўўўўўўўў      ўўўўў                                                                                                )";


Sleep(2500);




    intro_startup();
}
///Custom Functions
void intro_title(){
system("CLS");
system("color a");
ShowConsoleCursor(false);

char BOX=254;

cout<<R"(

                                  ўўўўўўўў    ўўўў    ўўўў   ўўўўўўўў     ўўўўўў      ўўўўўў   ўўўў   ўўўўў      ўўўў       ўўўўўўўў
                               ўўўўўўўўўўў    ўўўў    ўўўў   ўўўўўўўў   ўўўўўўўў    ўўўўўўўў   ўўўў   ўўўўўў     ўўўў    ўўўўўўўўўўў
                              ўўўўў           ўўўў    ўўўў   ўўўў      ўўўўў       ўўўўў       ўўўў   ўўўўўўў    ўўўў   ўўўўў
                              ўўўў            ўўўў    ўўўў   ўўўў      ўўўў        ўўўў        ўўўў   ўўўў ўўў   ўўўў   ўўўў
                              ўўўў            ўўўў    ўўўў   ўўўўўўўў   ўўўўў       ўўўўў      ўўўў   ўўўў  ўўў  ўўўў   ўўўў
                              ўўўў   ўўўўўў   ўўўў    ўўўў   ўўўў          ўўўўў       ўўўўў   ўўўў   ўўўў   ўўў ўўўў   ўўўў   ўўўўўў
                              ўўўўў    ўўўў   ўўўў    ўўўў   ўўўў            ўўўў        ўўўў  ўўўў   ўўўў    ўўўўўўў   ўўўўў    ўўўў
                                ўўўўўўўўўўў   ўўўўў  ўўўўў   ўўўўўўўў  ўўўўўўўўўў  ўўўўўўўўўў  ўўўў   ўўўў     ўўўўўў     ўўўўўўўўўўў
                                  ўўўўўўўўў     ўўўўўўўў     ўўўўўўўў  ўўўўўўўў    ўўўўўўўў    ўўўў   ўўўў      ўўўўў       ўўўўўўўўў


                                        ўўўўўўў   ўўўўўўўўўўўў    ўўўўў         ўўўўўўў  ўўўўў    ўўўўўў  ўўўўўўўўўў  ўўўўўўўўўўўўў
                                    ўўўўўўўўўўў   ўўўўўўўўўўўўў   ўўўўў     ўўўўўўўўўўў  ўўўўў   ўўўўў    ўўўўўўўўўў  ўўўўўўўўўўўўў
                                   ўўўўў          ўўўўў   ўўўўў   ўўўўў    ўўўўў         ўўўўў  ўўўўў     ўўўўў           ўўўўў
                                  ўўўўў           ўўўўўўўўўўўў    ўўўўў   ўўўўў          ўўўўўўўўўў       ўўўўўўўўўў      ўўўўў
                                  ўўўўўў          ўўўўў ўўўўў     ўўўўў   ўўўўўў         ўўўўў ўўўўўў     ўўўўў           ўўўўў
                                   ўўўўўўўўўўўў   ўўўўў  ўўўўў    ўўўўў    ўўўўўўўўўўўў  ўўўўў   ўўўўў    ўўўўўўўўўў      ўўўўў
                                     ўўўўўўўўўў   ўўўўў   ўўўўў   ўўўўў      ўўўўўўўўўў  ўўўўў    ўўўўўў  ўўўўўўўўўў      ўўўўў             )"<<"\n\n\n\n";

}
void intro_startup(){
ShowConsoleCursor(false);
intro_title();
cout<<"\t     Note:   If the window doesn't seem to fit your screen, you can easily adjust it by pressing the CTRL key and scrolling upwards or downwards.\n\n";
intro_menu();
}
void intro(){
ShowConsoleCursor(false);
intro_title();
intro_menu();
}
void intro_menu(){
ShowConsoleCursor(false);
cout<<setw(102)<<"***Enter the number of each command***";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t  (1) Start game\n\t\t\t\t\t\t\t\t\t  (2) How to play\n\t\t\t\t\t\t\t\t\t  (3) About this game\n\t\t\t\t\t\t\t\t\t  (4) Quit Game\n\n";
char introinput = getch();
if      (introinput=='1'){gamemode();}
else if (introinput=='2'){howto();}
else if (introinput=='3'){about();}
else if (introinput=='4'){quit();}
else {cout<<"\n\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\n\n\n  Press any key to continue....";
        getch();
        intro();
     }
}
void gamemode(){

ShowConsoleCursor(false);system("CLS");
system("color e");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSelect game mode\n";
cout<<"\n\n\n\t\t\t\t\t\t\t\t    (1) Single Player Mode\n\n\t\t\t\t\t\t\t\t    (2) Multiplayer Mode\n\n\n";

char gamemode_selection = getch();
if(gamemode_selection == '1'){lvl_selection();}
else if(gamemode_selection == '2'){twoplayer_mode();}
else{
cout<<"\n\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch();
gamemode();
}
}
void howto(){
ShowConsoleCursor(false);
system("CLS");
system("color f");
cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   HOW TO PLAY\n\n\n\n\n\n\t#Just press the the corresponding number of each command.\n\n\t#Guess the run and press it on the keyboard. \n\n\t#Type 1, 2, 3, 4, 6 during batting and bowling. \n\t (Entering anything else will be considered as 'HIT WICKET' during batting and 'NO BALL' during balling.)\n\n\t#Play using keyboard's number pad if possible.";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue ....";
getch();
intro();
}
void about(){
ShowConsoleCursor(false);
system("CLS");
system("color e");
system("mode 650");

cout<< R"(
                                                                        ЩЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЛ
                                                                        К Guessing Cricket К
                                                                        ШЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭМ

    Game Version: 2.2                                                                                                           Version Released: February 21, 2023

    Also available on: https://github.com/ThisIsZubayer/GuessingCricketGame  [Visit for further updates and releases]

    ЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭ

    Get the latest version from the link:

                                                               ЩЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЛ
                                                               К  https://cutt.ly/guessingcricket  К
                                                               ШЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭМ

    History of previous major releases:

         v1.0.0 ----> First initial release
         v2.0   ----> Added new feature: Game difficulty selection
         v2.1   ----> Added new feature: Two player mode
         v2.1.2 ----> Upgraded the visuals of the entire game
         v2.2   ----> Simple input

    ЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭЭ

        I'm Ahmed Zubayer, the creator, and I promise you're in for a fun time. I've been working hard to improve it, and I'm always open to new ideas. So join
        in, let loose, and get ready for an exciting ride! Get ready to face your fate and test your luck with this game!

           HAPPY GAMING AGAINST YOUR LUCK!     :D


           Contact with me:

                          E-mail: thisiszubayer@gmail.com
                          Github: github.com/ThisIsZubayer
                          Website: thisiszubayer.github.io

                                                                    --> Made with love in BANGLADESH <--



    Press any key to continue ....
)";

getch();
system("CLS");
system("color f");
cout<< R"(






                                                    лллллллллллллл      лл    лллллллл  лл      лллллллллллллл
                                                    лл          лл  лл  лл  лл  лллл        лл  лл          лл
                                                    лл  лллллл  лл  лллл        лл  лллллллллл  лл  лллллл  лл
                                                    лл  лллллл  лл  лллл    лл  лл  лл  лл      лл  лллллл  лл
                                                    лл  лллллл  лл    лл  лллл  лл              лл  лллллл  лл
                                                    лл          лл  лл              лллл    лл  лл          лл
                                                    лллллллллллллл  лл  лл  лл  лл  лл  лл  лл  лллллллллллллл
                                                                      лл  лллл    лллл  лл  лл
                                                      лллл      лл    лл      лллллллллллл  лллл  лл  лллллл
                                                            лллл            лллллл  лл    лл  лл    лл  лллллл
                                                        лллллллллллл  лллл          лл  лллл  лл    лл  лллллл
                                                      лллллллл        лллл  лллллл        лллл  лл  лл
                                                          лллл  лллл    лллл  лл  лл          лллллл  лллл  лл
                                                    лл  лл  лллл  лллл  лл      лл  лллллллллл  лллллл
                                                      лл        лл              лл  лллл  лллл        лллллл
                                                      лл  лл      лл  лллллллл      лл  лл        лллл  лл  лл
                                                      лл  лллл  лллллл      лллллл  лллллл  лллллллл  лллллл
                                                    лллл  лллл    лл    лл  лл  лллллл  лллллл  лл      лл
                                                    лллллл  лл  лллл      лл  лллллллл  лл    лл  лллллллллллл
                                                      лл  лллллл    лл        лллл  лл    лллл  лл    лл  лллл
                                                    лллллл  лллллл      лллл    лллл  лл  лллллллллллл  лл  лл
                                                                      лл    лл  лллллл    лллл      лл    лллл
                                                    лллллллллллллл    лллл    лллл    лллллллл  лл  лл    лллл
                                                    лл          лл    лллллллллллл    лллллллл      лл  лл  лл
                                                    лл  лллллл  лл    лл        лллллл      лллллллллллл  лл
                                                    лл  лллллл  лл    лллл  лллллллллл    лллллл    лл  лллл
                                                    лл  лллллл  лл  лллл      лл          лл    лл  лл  лл  лл
                                                    лл          лл  лл  лл  лл      лл        лллллл  лл  лллл
                                                    лллллллллллллл    лл  лллллллл  лл    лл  лл    лл  лл

                                                    	    SCAN ME FOR VISITING THE GITHUB REPOSITORY



 Press any key to continue ....
)";



getch();
intro();
}
void quit(){
ShowConsoleCursor(false);
system("CLS");
system("color 0c");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tAre you sure to quit this game?\n\n\n\t\t\t\t\t\t\t\tPress 'y' for Yes or 'n' for No.\n\n";
char quit1 = getch();
if (quit1=='y' || quit1=='Y')
        {   system("CLS");
            system("color 0c");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t  Sorry to see you go.... Come back soon, bye!\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            Sleep(1500);
            exit(0);
        }
else{

    intro();
        }
}
void lvl_selection(){
ShowConsoleCursor(false);
system("CLS");
system("color e");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Select difficulty\n";
cout<<"\n\n\n\t\t\t\t\t\t\t         (1) Easy [Opponent Level: Noob]\n\n\t\t\t\t\t\t\t         (2) Medium [Opponent Level: Pro]\n\n\t\t\t\t\t\t\t         (3) Hard [Opponent Level: Master]\n\n\n";
char level_selection = getch();
if     (level_selection == '1'){toss_easy();}
else if(level_selection == '2'){toss_medium();}
else if(level_selection == '3'){toss_hard();}
else{
cout<<"\n\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch();
lvl_selection();
}
}
void toss_easy(){
ShowConsoleCursor(false);
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail.\n";
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t       Your are choosing...";
char player_toss = getch();
char toss_result;
int toss_initial;
string toss_result_declare;
loading_screen();
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){

toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else
{toss_result = 'T';
toss_result_declare = "Tail";}
if (player_toss==toss_result)
{ system("CLS");
system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   "<<toss_result_declare<<" is up! Choose between batting and bowling...\n\n\t\t\t\t\t\t\t       Type '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing: ";
char player_choose = getch();
if (player_choose == '1'){
batting_1st_easy();}
else if (player_choose == '2'){
bowling_1st_easy();}
else{
cout<<"\n\n\n\n\n\n\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_easy();
}
}
else{
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Sorry, "<<toss_result_declare<<" is up! Let computer choose between batting and bowling.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bat first.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....\n";
getch();
bowling_1st_easy();
}
else{
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bowl first.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....\n";
getch();
batting_1st_easy();
}
}
}else{
cout<<"\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_easy();
}
}
void batting_1st_easy(){
ShowConsoleCursor(false);
//player bat

system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";


getch();


int s1, w1, bc1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
char eb1;
double crr1;
s1=0;
w1=0;
bc1=0;

do
    {               legalbat1=1;

                    system("CLS");
                    system("color 0b");

                    over1=bc1 / 6;
                    over1a = bc1 %6;

                    crr1 = ( (double) s1* 6)/ bc1;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       You-"<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();

                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {legalbat1=0;}


                    ceb1= rand()%10;
                    cebi1 = ceb1;




                    if(cebi1==ebi1 || legalbat1==0)
                    {   bc1++;
                        w1 = w1+1;
                        out();
getch();
                    }

                    else
                    {   bc1++;
                        s1 = s1+ebi1;

                        if(ebi1==4)
                            {four();}

                        else if (ebi1==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                    }

                }   while(bc1<30 && w1 < 3);



                    t1 = s1 +1;
over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t        You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();


//comp bat
system("CLS");
system("color 0b");
double rrr1 = (double) t1/5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\t\t\t\t\t      Computer needs "<<t1<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();


int s2, w2, bc2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
char eb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;
do {
                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(t1 - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       Computer-"    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget-"<<t1;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"                Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   Computer needs "<<t1-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to the total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();
                    ;
                    ceb2= rand()%5;
                        switch(ceb2)
                            {
                                    case 1:
                                        cebi2=1;
                                         break;
                                     case 2:
                                        cebi2=2;
                                         break;
                                     case 3:
                                        cebi2=3;
                                         break;
                                     case 4:
                                        cebi2=4;
                                         break;
                                     case 0:
                                        cebi2=6;
                                         break;
                            }

                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {ebi2 = 0;
                          legalball1=0;}


                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        out();
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\n\n\t\t\t\tNo Ball !";
                        cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;

                        if(cebi2==4)
                            {four();}

                        else if (cebi2==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();

                        bc2++;
                    }
            }while(bc2<30 && w2<3 && t1>s2);
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t       Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();

system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"You-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"Computer-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
     if(s1>s2)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t     Congratulations! You won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
void bowling_1st_easy(){
ShowConsoleCursor(false);
//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s1, w1, bc1, ebi1, ceb1,cebi1,over1,over1a,t2,legalball2;
char eb1;
double crr1;
s1=0;
w1=0;
bc1=0;
do{

                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    crr1 = ( (double) s1* 6)/ bc1;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       Computer-"    <<   s1      <<    "/"    <<   w1   <<    "                            Over-"     <<   over1    <<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();

                    ceb1= rand()%5;
                        switch(ceb1)
                            {
                                    case 1:
                                        cebi1=1;
                                         break;
                                     case 2:
                                        cebi1=2;
                                         break;
                                     case 3:
                                        cebi1=3;
                                         break;
                                     case 4:
                                        cebi1=4;
                                         break;
                                     case 0:
                                        cebi1=6;
                                         break;
                            }
                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {  ebi1=0;
                            legalball2=0;}

                    if(cebi1==ebi1)
                    {   w1=w1+1;
                        system("color 0c");
                        system("CLS");
out();
getch();
                        bc1++;
                    }
                    else if(legalball2==0)
                        {bc1=bc1;
                         cout<<"\n\n\n\t\t\t\tNo Ball !";
                         cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s1= s1+cebi1+1;}
                    else
                    {
                        s1= s1+cebi1;

                        if(cebi1==4)
                            {four();}

                        else if (cebi1==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();

                        bc1++;
                    }
                    t2= s1+1;
    }while(bc1<30 && w1 < 3);
over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t      Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();

//player bat
system("CLS");
system("color 0b");
double rrr1 = (double) t2/5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\t\t\t\t\t\t  You need "<<t2<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
   int s2, w2, bc2, ebi2, ceb2,cebi2,over2,over2a,legalbat2;
   char eb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;

do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(t2 - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       You-"<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"                       Target-"<<t2;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"             Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   You need "<<t2-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();
                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {legalbat2=0;}


                    ceb2= rand()%10;
                        cebi2 = ceb2;

                    if(cebi2==ebi2 || legalbat2==0)
                    {   w2 = w2+1;
                        out();
                        getch();
                        bc2++;
                    }
                    else
                    {
                        bc2++;
                        s2 = s2+ebi2;

                        if(ebi2==4)
                            {four();}

                        else if (ebi2==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi2<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();

                    }
    }while(bc2<30 && w2<3 && t2>s2);
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t         You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t2;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"Computer-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"You-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
                    if(s2>s1)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Congratulations! You won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
void toss_medium(){
ShowConsoleCursor(false);
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail.\n";
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t       Your are choosing...";
char player_toss = getch();
char toss_result;
int toss_initial;
string toss_result_declare;
loading_screen();
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){

toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else
{toss_result = 'T';
toss_result_declare = "Tail";}
if (player_toss==toss_result)
{ system("CLS");
system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   "<<toss_result_declare<<" is up! Choose between batting and bowling...\n\n\t\t\t\t\t\t\t       Type '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing: ";
char player_choose = getch();
if (player_choose == '1'){
batting_1st_medium();}
else if (player_choose == '2'){
bowling_1st_medium();}
else{
cout<<"\n\n\n\n\n\n\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_medium();
}
}
else{
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Sorry, "<<toss_result_declare<<" is up! Let computer choose between batting and bowling.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bat first.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....\n";
getch();
bowling_1st_medium();
}
else{
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bowl first.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....\n";
getch();
batting_1st_medium();
}
}
}else{
cout<<"\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_medium();
}
}
void batting_1st_medium(){
ShowConsoleCursor(false);
//player bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";


getch();

int s1, w1, bc1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
char eb1;
double crr1;
s1=0;
w1=0;
bc1=0;

do
    {
                    legalbat1=1;


                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    crr1 = ( (double) s1* 6)/ bc1;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       You-"<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();

                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {legalbat1=0;}


                    ceb1= rand()%5;

                    int ceb11 = rand()%5;
                     int cebi11;
                        switch(ceb1)
                            {
                                    case 0:
                                        cebi1=1;
                                         break;
                                     case 1:
                                        cebi1=2;
                                         break;
                                     case 2:
                                        cebi1=3;
                                         break;
                                    case 3:
                                        cebi1=4;
                                         break;
                                    case 4:
                                        cebi1=6;
                                         break;

                            }

                    if(cebi1==ebi1 || legalbat1==0)
                    {   w1 = w1+1;
                        out();
getch();
                    }
                    else
                    {

                        s1 = s1+ebi1;

                        if(ebi1==4)
                            {four();}

                        else if (ebi1==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                    }
                    bc1++;
                }   while(bc1<30 && w1 < 3);



                    t1 = s1 +1;
over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t        You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();


//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\t\t\t\t\t\t\tComputer needs "<<t1<<" run(s) from 30 ball(s) to win.";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s2, w2, bc2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
char eb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;
do {
                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(t1 - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       Computer-"    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget-"<<t1;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"                Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   Computer needs "<<t1-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to the total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();

                    ceb2= rand()%5;
                        switch(ceb2)
                            {
                                    case 1:
                                        cebi2=1;
                                         break;
                                     case 2:
                                        cebi2=2;
                                         break;
                                     case 3:
                                        cebi2=3;
                                         break;
                                     case 4:
                                        cebi2=4;
                                         break;
                                     case 0:
                                        cebi2=6;
                                         break;
                            }
                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {ebi2 = 0;
                          legalball1=0;}

                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        out();
getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\n\n\t\t\t\tNo Ball !";
                        cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;

                        if(cebi2==4)
                            {four();}

                        else if (cebi2==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                        bc2++;
                    }
            }while(bc2<30 && w2<3 && t1>s2);
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t       Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();

system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"You-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"Computer-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
     if(s1>s2)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t     Congratulations! You won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
void bowling_1st_medium(){
ShowConsoleCursor(false);
//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
   int s1, w1, bc1, ebi1, ceb1,cebi1,over1,over1a,t2,legalball2;
char eb1;
double crr1;
s1=0;
w1=0;
bc1=0;
do{
                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    crr1 = ( (double) s1* 6)/ bc1;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       Computer-"    <<   s1      <<    "/"    <<   w1   <<    "                            Over-"     <<   over1    <<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();

                    ceb1= rand()%5;
                        switch(ceb1)
                            {
                                    case 1:
                                        cebi1=1;
                                         break;
                                     case 2:
                                        cebi1=2;
                                         break;
                                     case 3:
                                        cebi1=3;
                                         break;
                                     case 4:
                                        cebi1=4;
                                         break;
                                     case 0:
                                        cebi1=6;
                                         break;
                            }
                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {  ebi1=0;
                            legalball2=0;}

                    if(cebi1==ebi1)
                    {   w1=w1+1;
                        out();
getch();
                        bc1++;
                    }
                    else if(legalball2==0)
                        {bc1=bc1;
                         cout<<"\n\n\n\t\t\t\tNo Ball !";
                         cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s1= s1+cebi1+1;}
                    else
                    {
                        s1= s1+cebi1;

                        if(cebi1==4)
                            {four();}

                        else if (cebi1==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                        bc1++;
                    }t2= s1+1;
    }while(bc1<30 && w1<3);
over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t      Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();

//player bat
system("CLS");
system("color 0b");
double rrr1 = (double) t2/5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     You are now batting";
cout<<"\n\n\t\t\t\t\t\t  You need "<<t2<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
   int s2, w2, bc2, ebi2, ceb2,cebi2,over2,over2a,legalbat2;
char eb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;

do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(t2 - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       You-"<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"                       Target-"<<t2;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"             Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   You need "<<t2-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();

                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {legalbat2=0;}

                    ceb2= rand()%5;
                        switch(ceb2)
                            {
                                    case 1:
                                        cebi2=1;
                                         break;
                                     case 2:
                                        cebi2=2;
                                         break;

                                     case 0:
                                        cebi2=3;
                                         break;
                                    case 3:
                                        cebi2=4;
                                         break;
                                    case 4:
                                        cebi2=6;
                                         break;
                            }



                    if(cebi2==ebi2 || legalbat2==0)
                    {   w2 = w2+1;
                        out();
getch();
                        bc2++;
                    }
                    else
                    {
                        s2 = s2+ebi2;

                        if(ebi2==4)
                            {four();}

                        else if (ebi2==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi2<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                        bc2++;
                    }
    }while(bc2<30 && w2<3 && t2>s2);

system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t         You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t2;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"Computer-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"You-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
                    if(s2>s1)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Congratulations! You won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
void toss_hard(){
ShowConsoleCursor(false);
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail.\n";
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t       Your are choosing...";
char player_toss = getch();
char toss_result;
int toss_initial;
string toss_result_declare;
loading_screen();
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){

toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else
{toss_result = 'T';
toss_result_declare = "Tail";}
if (player_toss==toss_result)
{ system("CLS");
system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   "<<toss_result_declare<<" is up! Choose between batting and bowling...\n\n\t\t\t\t\t\t\t       Type '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing: ";
char player_choose = getch();
if (player_choose == '1'){
batting_1st_hard();}
else if (player_choose == '2'){
bowling_1st_hard();}
else{
cout<<"\n\n\n\n\n\n\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_hard();
}
}
else{
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Sorry, "<<toss_result_declare<<" is up! Let computer choose between batting and bowling.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bat first.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....\n";
getch();
bowling_1st_hard();
}
else{
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bowl first.\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....\n";
getch();
batting_1st_hard();
}
}
}else{
cout<<"\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_hard();
}
}void batting_1st_hard(){
//player bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";


getch();

int s1, w1, bc1, ebi1, ceb1,cebi1,ceb11, cebi11, over1,over1a,t1,legalbat1;
char eb1;
double crr1;
s1=0;
w1=0;
bc1=0;

do
    {
                    legalbat1=1;

                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    crr1 = ( (double) s1* 6)/ bc1;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       You-"<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();

                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {legalbat1=0;}


                     ceb1= rand()%5;

                    switch(ceb1)
                            {
                                    case 0:
                                        cebi1=6;
                                         break;
                                     case 1:
                                        cebi1=1;
                                         break;
                                     case 2:
                                        cebi1=2;
                                         break;
                                    case 3:
                                        cebi1=3;
                                         break;
                                    case 4:
                                        cebi1=4;
                                         break;

                            }
                    ceb11 = (rand()*rand())%5;
                   switch(ceb11)
                            {
                                    case 0:
                                        cebi11=6;
                                         break;
                                     case 1:
                                        cebi11=1;
                                         break;
                                    case 2:
                                        cebi11=2;
                                         break;
                                    case 3:
                                        cebi11=3;
                                         break;
                                    case 4:
                                        cebi11=4;
                                         break;

                            }


                    if(cebi1==ebi1 || cebi11 ==ebi1 || legalbat1==0)
                    {   w1 = w1+1;
                        out();
getch();
                    }
                    else
                    {

                        s1 = s1+ebi1;

                        if(ebi1==4)
                            {four();}

                        else if (ebi1==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                    }
                    bc1++;
                }   while(bc1<530 && w1 < 3);



                    t1 = s1 +1;
over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t        You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();


//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\t\t\t\t\t\t\tComputer needs "<<t1<<" run(s) from 30 ball(s) to win.";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s2, w2, bc2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
char eb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;
do {

                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(t1 - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       Computer-"    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget-"<<t1;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"                Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   Computer needs "<<t1-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to the total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();

                    ceb2= rand()%5;
                        switch(ceb2)
                            {
                                    case 1:
                                        cebi2=1;
                                         break;
                                     case 2:
                                        cebi2=2;
                                         break;
                                     case 3:
                                        cebi2=3;
                                         break;
                                     case 4:
                                        cebi2=4;
                                         break;
                                     case 0:
                                        cebi2=6;
                                         break;
                            }
                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {ebi2 = 0;
                          legalball1=0;}

                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        out();
getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\n\n\t\t\t\tNo Ball !";
                        cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;

                        if(cebi2==4)
                            {four();}

                        else if (cebi2==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                        bc2++;
                    }
            }while(bc2<30 && w2<3 && t1>s2);

system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t       Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();

system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"You-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"Computer-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
     if(s1>s2)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t     Congratulations! You won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
void bowling_1st_hard(){
ShowConsoleCursor(false);
//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s1, w1, bc1,  ebi1, ceb1,cebi1,over1,over1a,t2,legalball2;
char eb1;
double crr1;
s1=0;
w1=0;
bc1=0;
do{

                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    crr1 = ( (double) s1* 6)/ bc1;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       Computer-"    <<   s1      <<    "/"    <<   w1   <<    "                            Over-"     <<   over1    <<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();

                    ceb1= rand()%5;
                        switch(ceb1)
                                {
                                    case 1:
                                        cebi1=1;
                                         break;
                                     case 2:
                                        cebi1=2;
                                         break;
                                     case 3:
                                        cebi1=3;
                                         break;
                                     case 4:
                                        cebi1=4;
                                         break;
                                     case 0:
                                        cebi1=6;
                                         break;
                            }
                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {  ebi1=0;
                            legalball2=0;}

                    if(cebi1==ebi1)
                    {   w1=w1+1;
                        out();
getch();
                        bc1++;
                    }
                    else if(legalball2==0)
                        {bc1=bc1;
                         cout<<"\n\n\n\t\t\t\tNo Ball !";
                         cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s1= s1+cebi1+1;}
                    else
                    {
                        s1= s1+cebi1;

                        if(cebi1==4)
                            {four();}

                        else if (cebi1==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                        bc1++;
                    }t2= s1+1;
    }while(bc1<30 && w1<3);
over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t      Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();


//player bat
system("CLS");
system("color 0b");
double rrr1 = ((double)t2 / 5);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     You are now batting";
cout<<"\n\n\t\t\t\t\t\t  You need "<<t2<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
   int s2, w2, bc2, ebi2, ceb2,cebi2, cebi24, ceb24, over2,over2a, legalbat2;
char eb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;

do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(t2 - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       You-"<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"                       Target-"<<t2;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"             Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   You need "<<t2-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();
                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {legalbat2=0;}

                    ceb2= rand()%5;
                        switch(ceb2)
                            {
                                    case 1:
                                        cebi2=1;
                                         break;
                                     case 2:
                                        cebi2=2;
                                         break;

                                     case 0:
                                        cebi2=6;
                                         break;
                                    case 3:
                                        cebi2=3;
                                         break;
                                    case 4:
                                        cebi2=4;
                                         break;
                            }

                    ceb24=(rand()*rand())%5;

                    switch(ceb24)
                            {
                                    case 1:
                                        cebi24=1;
                                         break;
                                     case 0:
                                        cebi24=6;
                                         break;
                                    case 2:
                                        cebi24=2;
                                         break;
                                    case 3:
                                        cebi24=3;
                                         break;
                                    case 4:
                                        cebi24=4;
                                         break;
                            }

                    if(cebi2==ebi2 || cebi24==ebi2 || legalbat2==0)
                    {   w2 = w2+1;
                        out();
getch();
                        bc2++;
                    }
                    else
                    {
                        s2 = s2+ebi2;

                        if(ebi2==4)
                            {four();}

                        else if (ebi2==6)
                            {six();}
                        else
                        {cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi2<<" in this ball\n\n\n\nPress any key to continue....";}

                        getch();
                        bc2++;
                    }
    }while(bc2<530 && w2<3 && t2>s2);

system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t         You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t2;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();
 system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"Computer-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"You-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
                    if(s2>s1)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Congratulations! You won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
void twoplayer_mode(){
system("CLS");
system("color 0d");
ShowConsoleCursor(true);
//Two Player Mode: Name Input
string name_1, name_2, toss_winner, toss_loser, batting_1st, bowling_1st;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter name of Player 1: ";
getline(cin,name_1);
cout<<"\n\n\t\t\t\t\t\t\t\tEnter name of Player 2: ";
getline(cin,name_2);

//Two Player Mode: Toss
system("CLS");
system("color 0d");
ShowConsoleCursor(false);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(100)<<"Computer will decide who is going to call";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
loading_screen();
system("CLS");
system("color 0d");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

int two_player_toss_caller_decider, toss_initial;
char toss_result, player_1_choose, player_2_choose;
string toss_result_declare;


two_player_toss_caller_decider = (rand() %2);

if (two_player_toss_caller_decider == 0){

    cout<<"\t\t\t\t\t\t\t\t\t"<<name_1<<", you will call!";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
    getch();
    system("CLS");
    system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<name_1<<", choose between Head and Tail.\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t       Your are choosing...";

    player_1_choose = getch();
system("CLS");
system("color 0d");

    player_1_choose=toupper(player_1_choose);


    toss_initial = (rand() %2) ;

    if (toss_initial==0)
        { toss_result = 'H';
        toss_result_declare = "Head";}
    else
        {toss_result = 'T';
        toss_result_declare = "Tail";}


    if (player_1_choose==toss_result)
        {   toss_winner=name_1;
            toss_loser=name_2;}


    else { toss_winner=name_2;
            toss_loser=name_1;}

}else{


    cout<<"\t\t\t\t\t\t\t\t\t"<<name_2<<", you will call!";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";

    getch();

    system("CLS");
    system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<name_2<<", choose between Head and Tail.\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t       Your are choosing...";

    player_2_choose = getch();
    system("CLS");
    system("color 0d");
    player_2_choose=toupper(player_2_choose);


    toss_initial = (rand() %2) ;

    if (toss_initial==0)
        { toss_result = 'H';
        toss_result_declare = "Head";}
    else
        {toss_result = 'T';
        toss_result_declare = "Tail";}


    if (player_2_choose==toss_result)
            {   toss_winner=name_2;
                toss_loser=name_1;       }

    else { toss_winner=name_1;
            toss_loser=name_2; }

}
//Toss winner choosing between batting and bowling first
loading_screen();
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t               "<< toss_result_declare<<" is up!\n\n\n\n\t\t\t\t\t\t\t\t"<<toss_winner<<", choose between batting and bowling...\n\n\t\t\t\t\t\t\t\tType '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\tYou are choosing: ";
           char toss_winner_choose_to = getch();
            if (toss_winner_choose_to == '1'){
            batting_1st = toss_winner;
            bowling_1st = toss_loser;
            }else{
            bowling_1st = toss_winner;
            batting_1st = toss_loser;
            }


//1st Innings
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     "<<batting_1st<<" is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s1, w1, bc1, ebi1, cebi1,over1,over1a,legalbat1,legalball1;
char eb1, ceb1;
double crr1;
s1=0;
w1=0;
bc1=0;

do
    {               legalbat1=1;
                    legalball1=1;


                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    crr1 = ( (double) s1* 6)/ bc1;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<bowling_1st<<" is now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "<<batting_1st<<"-"<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\t"<<bowling_1st<<", just type your guess. \n\n\n\t***Make sure, "<<batting_1st<<" is looking away!*** \n\n\n\tThen, "<<batting_1st<<" will guess too.";
                    cout<<"\n\n\n\tIf both guesses match, "<<batting_1st<<" will be out. If not, we will add it to "<<batting_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    ceb1 = getch();


                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<batting_1st<<" is now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<batting_1st<<"-"<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\t"<<batting_1st<<", just type your guess.";
                    cout<<"\n\n\n\tIf both guesses match, "<<batting_1st<<" will be out. If not, we will add it to "<<batting_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb1 = getch();


                    system("CLS");
                    system("color 0b");

                    if      (eb1=='1'){ebi1=1;}
                    else if (eb1=='2'){ebi1=2;}
                    else if (eb1=='3'){ebi1=3;}
                    else if (eb1=='4'){ebi1=4;}
                    else if (eb1=='6'){ebi1=6;}
                    else {legalbat1=0;}

                    if      (ceb1=='1'){cebi1=1;}
                    else if (ceb1=='2'){cebi1=2;}
                    else if (ceb1=='3'){cebi1=3;}
                    else if (ceb1=='4'){cebi1=4;}
                    else if (ceb1=='6'){cebi1=6;}
                    else {legalball1=0;}


                    if((cebi1==ebi1 || legalbat1==0) && legalball1 != 0)
                    {   w1 = w1+1;
                        bc1++;
                        out();
                        getch();
                    }

                    else if (legalball1 != 0 && legalbat1 != 0 && cebi1 != ebi1)
                    {
                        s1 = s1+ebi1;
                        bc1++;

                        if(ebi1 == 4)
                        {
four();
                        }
                        else if (ebi1 == 6)
                            {
six();
                            }
                        else{
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored "<<ebi1<<" in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        }

                        getch();
                    }
                    else if (legalball1 == 0 && legalbat1 != 0)
                    {
                        s1 = s1+ebi1+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored "<<ebi1<<"+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();;
                    }
                    else if (legalball1 == 0 && legalbat1 == 0)
                    {
                        s1 = s1+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored 0+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }


                }   while(bc1<30 && w1 < 3);


                int target = s1 + 1;

over1=bc1 / 6;
over1a = bc1 %6;
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t     "<<batting_1st;
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();

//2nd innings
system("CLS");
system("color 0b");
double rrr1 = (double)target / 5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     "<<bowling_1st<<" is now batting";
cout<<"\n\n\t\t\t\t\t\t  "<<bowling_1st<<" need "<<target<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();

int s2, w2, bc2, ebi2, cebi2,over2,over2a,legalbat2,legalball2;
char eb2, ceb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;

do
    {               legalbat2=1;
                    legalball2=1;


                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 % 6;
                    crr2 = ( (double) s2* 6)/ bc2;
                    rrr = ((double)(target - s2)/(30-bc2))*6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<batting_1st<<" is now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "<<bowling_1st<<"-"<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"\t\t\tTarget-"<<target;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"       Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   "<<bowling_1st<<" needs "<<target-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\t"<<batting_1st<<", just type your guess. \n\n\n\t***Make sure, "<<bowling_1st<<" is looking away!*** \n\n\n\tThen, "<<bowling_1st<<" will guess too.";
                    cout<<"\n\n\n\tIf both guesses match, "<<bowling_1st<<" will be out. If not, we will add it to "<<bowling_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    ceb2 = getch();


                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<bowling_1st<<" is now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<bowling_1st<<"-"<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"\t\t\tTarget-"<<target;
                    if (bc2>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr2<<"       Required Run Rate: "<<fixed<<setprecision(2)<<rrr;
                    cout<<"\n\n\t                   "<<bowling_1st<<" needs "<<target-s2<<" more run(s) from "<<30-bc2<<" ball(s) to win.";}
                    cout<<"\n\n\n\t"<<bowling_1st<<", just type your guess.";
                    cout<<"\n\n\n\tIf both guesses match, "<<bowling_1st<<" will be out. If not, we will add it to "<<bowling_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tYou are guessing...";
                    eb2 = getch();


                    system("CLS");
                    system("color 0b");

                    if      (eb2=='1'){ebi2=1;}
                    else if (eb2=='2'){ebi2=2;}
                    else if (eb2=='3'){ebi2=3;}
                    else if (eb2=='4'){ebi2=4;}
                    else if (eb2=='6'){ebi2=6;}
                    else {legalbat2=0;}

                    if      (ceb2=='1'){cebi2=1;}
                    else if (ceb2=='2'){cebi2=2;}
                    else if (ceb2=='3'){cebi2=3;}
                    else if (ceb2=='4'){cebi2=4;}
                    else if (ceb2=='6'){cebi2=6;}
                    else {legalball2=0;}



                    if((cebi2==ebi2 || legalbat2==0) && legalball2 != 0)
                    {   w2 = w2+1;
                        bc2++;
                       out();
                        getch();
                    }

                    else if (legalball2 != 0 && legalbat2 != 0 && cebi2 != ebi2)
                    {
                        s2 = s2+ebi2;
                        bc2++;
if(ebi2 == 4)
                        {
four();

                        }
                        else if (ebi2 == 6)
                            {
six();

                            }
                        else{
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<" in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        }

                        getch();
                    }
                    else if (legalball2 == 0 && legalbat2 != 0)
                    {
                        s2 = s2+ebi2+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<"+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    else if (legalball2 == 0 && legalbat2 == 0)
                    {
                        s2 = s2+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored 0+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }


                }   while(bc2<30 && w2 < 3 && target > s2);
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t        "<<bowling_1st;
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<target;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
 getch();
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t "<<name_1<<" vs "<<name_2;
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<batting_1st<<"-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<bowling_1st<<"-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
if(s1>s2)
     {
         cout<<"\n\n\n\n\n\n\n"<<setw(76)<<batting_1st<<" won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t           Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else if (s1<s2)
        {
         cout<<"\n\n\n\n\n\n\n"<<setw(76)<<bowling_1st<<" won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }


            }
void out(){

system("color 0c");
system("CLS");

cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<R"(
                                                        ллллллл         лллл         лллл   лллллллллллллллл     лллл
                                                     ллллллллллллл      лллл         лллл   лллллллллллллллл     лллл
                                                    лллл       лллл     лллл         лллл         лллл           лллл
                                                   лллл         лллл    лллл         лллл         лллл           лллл
                                                   лллл         лллл    лллл         лллл         лллл           лллл
                                                   лллл         лллл    лллл         лллл         лллл           лллл
                                                   лллл         лллл    лллл         лллл         лллл           лллл
                                                    лллл       лллл     ллллл       ллллл         лллл
                                                     ллллллллллллл       ллллллллллллллл          лллл           лллл
                                                        ллллллл            ллллллллллл            лллл           лллл		)";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";

}
void four(){

system("CLS");
system("color 0a");

cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<R"(
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл
                                                                                         лллллл              )";
cout<<"\n\n\n\n\n\n\n\n\n\nPress any key to continue....";

}
void six(){

system("CLS");
system("color 0e");

cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<R"(
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  лллллл
                                                                  лллллл
                                                                  лллллл
                                                                  лллллл
                                                                  лллллл
                                                                  лллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  лллллл                 лллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл
                                                                  ллллллллллллллллллллллллллллл              )";
cout<<"\n\n\n\n\n\n\n\n\n\nPress any key to continue....";

}
void loading_screen(){

system("CLS");
Sleep(90);
char BOX=254;
for(int loop = 0; loop < 2; loop++)
            {
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t            __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t           /           \n";
cout<<"\t\t\t\t\t\t\t\t          /             \n";
cout<<"\t\t\t\t\t\t\t\t         /               \n";
cout<<"\t\t\t\t\t\t\t\t         \\            / \n";
cout<<"\t\t\t\t\t\t\t\t          \\          / \n";
cout<<"\t\t\t\t\t\t\t\t           \\__ __ __/ \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t            __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t           /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t          /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t         /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t         \\              \n";
cout<<"\t\t\t\t\t\t\t\t          \\            \n";
cout<<"\t\t\t\t\t\t\t\t           \\__ __ __  \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t            __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t           /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t          /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t         /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t         \\            / \n";
cout<<"\t\t\t\t\t\t\t\t          \\          / \n";
cout<<"\t\t\t\t\t\t\t\t           \\        / \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t            __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t           /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t          /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t         /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t                      / \n";
cout<<"\t\t\t\t\t\t\t\t                     / \n";
cout<<"\t\t\t\t\t\t\t\t            __ __ __/ \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t            __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t                    \\ \n";
cout<<"\t\t\t\t\t\t\t\t                     \\ \n";
cout<<"\t\t\t\t\t\t\t\t                      \\ \n";
cout<<"\t\t\t\t\t\t\t\t         \\            / \n";
cout<<"\t\t\t\t\t\t\t\t          \\          / \n";
cout<<"\t\t\t\t\t\t\t\t           \\__ __ __/ \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t                      \n";
cout<<"\t\t\t\t\t\t\t\t           /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t          /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t         /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t         \\            / \n";
cout<<"\t\t\t\t\t\t\t\t          \\          / \n";
cout<<"\t\t\t\t\t\t\t\t           \\__ __ __/ \n";
Sleep(90);
system("CLS");

             }

}
