/*

Cricket game....v2.1.3

[Last update of this version: MAR 17, 2022]

Created by: Ahmed Zubayer
Github: https://github.com/ThisIsZubayer

Updates:
1. Added direction for adjusting the game screen.
2. Updated the interface and texts.
3. Used more user defined functions rather than rewritten codes again and again.

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include<string>
#include<windows.h>
using namespace std;

//Function Declarations

//UI
void intro_title();
void intro();
void intro_startup();
void howto();
void about();
void quit();
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

//Main Function
int main(){
    system("mode 650");
    system("color e");
    srand(time(0));
    cout<<"\n";

cout<<"\t\t\t\t      @@@@@@@    @@@@    @@@@   @@@@@@@@   @@@@@@@@    @@@@@@@@  @@@@   @@@@     @@@     @@@@@@@@      \n";
cout<<"\t\t\t\t   @@@@@@@@@@    @@@@    @@@@   @@@@@@@@  @@@@        @@@@       @@@@   @@@@@    @@@   @@@@@@@@@@      \n";
cout<<"\t\t\t\t  @@@@           @@@@    @@@@   @@@@      @@@@@       @@@@@      @@@@   @@@@@@@  @@@  @@@@               \n";
cout<<"\t\t\t\t  @@@@  @@@@@@   @@@@    @@@@   @@@@@@@@    @@@@@@@@    @@@@@@@  @@@@   @@@ @@@@@@@@  @@@@  @@@@@@       \n";
cout<<"\t\t\t\t  @@@@@   @@@@   @@@@@  @@@@@   @@@@            @@@@       @@@@  @@@@   @@@   @@@@@@  @@@@@   @@@@       \n";
cout<<"\t\t\t\t    @@@@@@@@@@     @@@@@@@@     @@@@@@@@@ @@@@@@@@@   @@@@@@@@   @@@@   @@@     @@@@    @@@@@@@@@@       \n";


cout<<"\n";

cout<<"\t\t\t\t\t\t                           @@@@@@@@@@@@@@@@@\n";
cout<<"\t\t\t\t\t\t                    @@@@@@@@               @@@@@@@@\n";
cout<<"\t\t\t\t\t\t                @@@@                @@@@@@@@@@@    @@@@\n";
cout<<"\t\t\t\t\t\t             @@@                @@@@@@@         @@@@@@@@@@\n";
cout<<"\t\t\t\t\t\t           @@               @@@@@@       @@@@@           @@@\n";
cout<<"\t\t\t\t\t\t         @@              @@@@@      @@@@        @@@@@@@@@@@ @@\n";
cout<<"\t\t\t\t\t\t       @@             @@@@@     @@@        @@@@@@@@           @@\n";
cout<<"\t\t\t\t\t\t      @@            @@@@@    @@@      @@@@@@@                  @@\n";
cout<<"\t\t\t\t\t\t     @@           @@@@     @@      @@@@@                        @@\n";
cout<<"\t\t\t\t\t\t    @@          @@@@    @@@     @@@@                             @@\n";
cout<<"\t\t\t\t\t\t   @@          @@@@   @@@    @@@@                                 @@\n";
cout<<"\t\t\t\t\t\t   @@         @@@    @@    @@@@                                   @@\n";
cout<<"\t\t\t\t\t\t  @@        @@@@    @@    @@@                                      @@\n";
cout<<"\t\t\t\t\t\t  @@       @@@@   @@    @@@@                                       @@\n";
cout<<"\t\t\t\t\t\t  @@      @@@    @@    @@@                                         @@\n";
cout<<"\t\t\t\t\t\t  @@     @@@@   @@    @@@                                          @@\n";
cout<<"\t\t\t\t\t\t   @@   @@@@    @    @@@                                          @@\n";
cout<<"\t\t\t\t\t\t    @@  @@@    @@   @@@                                          @@\n";
cout<<"\t\t\t\t\t\t     @@ @@@   @@   @@@                                          @@\n";
cout<<"\t\t\t\t\t\t      @@@@@  @@    @@@                                         @@\n";
cout<<"\t\t\t\t\t\t        @@   @@   @@@                                        @@@\n";
cout<<"\t\t\t\t\t\t         @@@@@   @@@                                      @@@\n";
cout<<"\t\t\t\t\t\t           @@@   @@@                                     @@@\n";
cout<<"\t\t\t\t\t\t              @@@@@                                   @@@\n";
cout<<"\t\t\t\t\t\t                 @@@@                             @@@@\n";
cout<<"\t\t\t\t\t\t                      @@@@@@               @@@@@@\n";
cout<<"\t\t\t\t\t\t                             @@@@@@@@@@@@@\n";
cout<<"\n";
cout<<"                                       @@@@@@@   @@@@@@@@@@@@    @@@@@         @@@@@@@  @@@@@    @@@@@@  @@@@@@@@@@  @@@@@@@@@@@@@       \n";
cout<<"                                   @@@@@@@@@@@   @@@@@@@@@@@@@   @@@@@     @@@@@@@@@@@  @@@@@   @@@@@    @@@@@@@@@@  @@@@@@@@@@@@@       \n";
cout<<"                                  @@@@@          @@@@@   @@@@@   @@@@@    @@@@@         @@@@@  @@@@@     @@@@@           @@@@@            \n";
cout<<"                                 @@@@@           @@@@@@@@@@@@    @@@@@   @@@@@          @@@@@@@@@@       @@@@@@@@@@      @@@@@            \n";
cout<<"                                 @@@@@@          @@@@@ @@@@@     @@@@@   @@@@@@         @@@@@ @@@@@@     @@@@@           @@@@@            \n";
cout<<"                                  @@@@@@@@@@@@   @@@@@  @@@@@    @@@@@    @@@@@@@@@@@@  @@@@@   @@@@@    @@@@@@@@@@      @@@@@            \n";
cout<<"                                    @@@@@@@@@@   @@@@@   @@@@@   @@@@@      @@@@@@@@@@  @@@@@    @@@@@@  @@@@@@@@@@      @@@@@            \n";


Sleep(2500);




    intro_startup();
}
//Custom Functions
void intro_title(){
system("CLS");
system("color a");
cout<<endl<<endl;

cout<<"                                  @@@@@@@@    @@@@    @@@@   @@@@@@@@     @@@@@@      @@@@@@   @@@@   @@@@@      @@@@       @@@@@@@@ \n";
cout<<"                               @@@@@@@@@@@    @@@@    @@@@   @@@@@@@@   @@@@@@@@    @@@@@@@@   @@@@   @@@@@@     @@@@    @@@@@@@@@@@     \n";
cout<<"                              @@@@@           @@@@    @@@@   @@@@      @@@@@       @@@@@       @@@@   @@@@@@@    @@@@   @@@@@\n";
cout<<"                              @@@@            @@@@    @@@@   @@@@      @@@@        @@@@        @@@@   @@@@ @@@   @@@@   @@@@\n";
cout<<"                              @@@@            @@@@    @@@@   @@@@@@@@   @@@@@       @@@@@      @@@@   @@@@  @@@  @@@@   @@@@    \n";
cout<<"                              @@@@   @@@@@@   @@@@    @@@@   @@@@          @@@@@       @@@@@   @@@@   @@@@   @@@ @@@@   @@@@   @@@@@@   \n";
cout<<"                              @@@@@    @@@@   @@@@    @@@@   @@@@            @@@@        @@@@  @@@@   @@@@    @@@@@@@   @@@@@    @@@@       \n";
cout<<"                                @@@@@@@@@@@   @@@@@  @@@@@   @@@@@@@@  @@@@@@@@@@  @@@@@@@@@@  @@@@   @@@@     @@@@@@     @@@@@@@@@@@      \n";
cout<<"                                  @@@@@@@@@     @@@@@@@@     @@@@@@@@  @@@@@@@@    @@@@@@@@    @@@@   @@@@      @@@@@       @@@@@@@@@          \n";
cout<<"\n\n";
cout<<"                                        @@@@@@@   @@@@@@@@@@@@    @@@@@         @@@@@@@  @@@@@    @@@@@@  @@@@@@@@@@  @@@@@@@@@@@@@        \n";
cout<<"                                    @@@@@@@@@@@   @@@@@@@@@@@@@   @@@@@     @@@@@@@@@@@  @@@@@   @@@@@    @@@@@@@@@@  @@@@@@@@@@@@@        \n";
cout<<"                                   @@@@@          @@@@@   @@@@@   @@@@@    @@@@@         @@@@@  @@@@@     @@@@@           @@@@@            \n";
cout<<"                                  @@@@@           @@@@@@@@@@@@    @@@@@   @@@@@          @@@@@@@@@@       @@@@@@@@@@      @@@@@            \n";
cout<<"                                  @@@@@@          @@@@@ @@@@@     @@@@@   @@@@@@         @@@@@ @@@@@@     @@@@@           @@@@@            \n";
cout<<"                                   @@@@@@@@@@@@   @@@@@  @@@@@    @@@@@    @@@@@@@@@@@@  @@@@@   @@@@@    @@@@@@@@@@      @@@@@            \n";
cout<<"                                     @@@@@@@@@@   @@@@@   @@@@@   @@@@@      @@@@@@@@@@  @@@@@    @@@@@@  @@@@@@@@@@      @@@@@            \n";
cout<<"\n";

}
void intro_startup(){
intro_title();
cout<<endl<<endl;
cout<<"                   Note:   If the window doesn't seem to fit your screen, you can adjust it by changing the font size. Right click on the Title Bar. \n                           Then go to Properties -> Font. Select the size that fits your screen and click on \"OK\".\n\n";
cout<<endl;
cout<<setw(110)<<"***Press the corresponding key of each command***";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t   1. Start game\n\t\t\t\t\t\t\t\t\t   2. How to play\n\t\t\t\t\t\t\t\t\t   3. About this game\n\t\t\t\t\t\t\t\t\t   4. Quit Game\n"<<endl;
string introinput;
cout<<"\t\t\t\t\t\t\t\t\t     Your input : ";
cin>>introinput;
if (introinput=="1"){lvl_selection();}
else if (introinput=="2"){howto();}
else if (introinput=="3"){about();}
else if (introinput=="4"){quit();}
else {cout<<"\n\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\n\n\n  Press any key to continue....";
        getch();
        intro();
     }
}
void intro(){
intro_title();
cout<<endl<<endl;
cout<<setw(110)<<"***Press the corresponding key of each command***";
cout<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t   1. Start game\n\t\t\t\t\t\t\t\t\t   2. How to play\n\t\t\t\t\t\t\t\t\t   3. About this game\n\t\t\t\t\t\t\t\t\t   4. Quit Game\n"<<endl;
string introinput;
cout<<"\t\t\t\t\t\t\t\t\t     Your input : ";
cin>>introinput;
if (introinput=="1"){lvl_selection();}
else if (introinput=="2"){howto();}
else if (introinput=="3"){about();}
else if (introinput=="4"){quit();}
else {cout<<"\n\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\n\n\n  Press any key to continue....";
        getch();
        intro();
     }
}
void howto(){
system("CLS");
system("color f");
cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tHOW TO PLAY\n\n\n\n\n\n\t#Just press the the corresponding key of each command.\n\n\t#Don't press any extra key as that may crash the game. \n\n\t#Guess the run, type it and hit enter. \n\n\t#Type 1 , 2, 3, 4, 6 during batting and bowling. \n\t (Typing 0, 5 or more than 6 will be considered as 'Hit Wicket' during batting and 'No Ball' during balling.)\n\n\t#Play using keyboard's number pad if possible.";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue ....";
getch();
intro();
}
void about(){
system("CLS");
system("color e");
system("MODE CON COLS=168 LINES=45");
cout<<endl;
cout<<"                                                                        ********************\n";
cout<<"                                                                        * Guessing Cricket *\n";
cout<<"                                                                        ********************\n\n";
cout<<"    Game Version: 2.1.3                                                                                                            Version Released: March 17, 2022\n\n\n";
cout<<"    Also available on: https://github.com/ThisIsZubayer/GuessingCricketGame  [Visit for further updates and releases]\n";
cout<<"    _______________________________________________________________________________________________________________________________________________________________\n\n";
cout<<"    Get the latest version from the link:\n\n";
cout<<"                                                                ************************************\n";
cout<<"                                                                *  https://bit.do/GuessingCricket  *\n";
cout<<"                                                                ************************************\n\n";
cout<<"    History of previous major releases:\n\n";
cout<<"         v1.0.0 ----> First initial release\n";
cout<<"         v2.0   ----> Added new feature: Game difficulty selection\n";
cout<<"         v2.1   ----> Added new feature: Two player mode\n";
cout<<"         v2.1.2 ----> Upgraded the visuals of the entire game\n";
cout<<"    _______________________________________________________________________________________________________________________________________________________________\n\n";
cout<<"        This game is made by me, Ahmed Zubayer. Playing this is lot of fun. Have fun playing it. I am upgrading it frequently. Feel free to share your ideas\n";
cout<<"        with me. Hope you will enjoy.\n\n";
cout<<"	   HAPPY GAMING AGAINST YOUR LUCK!\n\n\n";
cout<<"	   Contact with me:\n\n";
cout<<"                          E-mail: zubayerforyou@gmail.com\n";
cout<<"                          Github: github.com/ThisIsZubayer\n\n\n";
cout<<"                                                                  --> Made with love in BANGLADESH <--\n\n\n\n\n\n";
cout<<"    Press any key to continue ....";

getch();
intro();
}
void quit(){
system("CLS");
system("color 0c");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tAre you sure to quit this game?\n\n\n\t\t\t\t\t\t\t\tPress '1' for Yes or '2' for No.\n\n\t\t\t\t\t\t\t\t     You are choosing: ";
string quit1;
cin>>quit1;
if (quit1=="1")
        {   system("CLS");
            system("color 0c");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t  Sorry to see you go.... Come back soon, bye!\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            Sleep(1000);
            return;
        }
else{

    intro();
        }
}
void lvl_selection(){
system("CLS");
system("color e");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSelect game type\n";
cout<<"\n\n\n\t\t\t\t\t\t\t\t1. Easy (Opponent Level: Noob)\n\n\t\t\t\t\t\t\t\t2. Medium (Opponent Level: Pro)\n\n\t\t\t\t\t\t\t\t3. Hard (Opponent Level: Master)\n\n\t\t\t\t\t\t\t\t4. Two Player Mode\n\n"<<endl;
cout<<"\t\t\t\t\t\t\t\t     Selected game type: ";
string level_selection;
cin>>level_selection;
if(level_selection == "1"){toss_easy();}
else if(level_selection == "2"){toss_medium();}
else if(level_selection == "3"){toss_hard();}
else if(level_selection == "4"){twoplayer_mode();}
else{
cout<<"\n\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch();
lvl_selection();
}
}
void toss_easy(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail.\n";
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
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
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   "<<toss_result_declare<<" is up! Choose between batting and bowling...\n\n\t\t\t\t\t\t\t       Type '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing: ";int player_choose;
cin>>player_choose;
switch (player_choose){
case 1:
batting_1st_easy();
case 2:
bowling_1st_easy();
default :
cout<<"\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
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
//player bat

system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";


getch();


int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;
                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                legalbat1=0;
                                 break;
                            }

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


int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;
                    srand(time(0));
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
                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                ebi2 = 0;
                                legalball1 = 0;
                                break;

                            }

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
//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t2,legalball2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;
                    srand(time(0));
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
                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                ebi1=0;
                                legalball2=0;
                                break;
                            }

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
   int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalbat2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;
                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

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
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail.\n";
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
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
int player_choose;
cin>>player_choose;
switch (player_choose){
case 1:
batting_1st_medium();
case 2:
bowling_1st_medium();
default :
cout<<"\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_medium();
}
}
else{
system("CLS");
system("color 0b");
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
//player bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";


getch();

int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;
                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                legalbat1=0;
                                 break;
                            }

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
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;

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
                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                ebi2=0;
                                legalball1=0;
                                break;

                            }

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
//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
   int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t2,legalball2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;

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
                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                ebi1=0;
                                legalball2=0;
                                break;
                            }

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
   int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalbat2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;
                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

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
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail.\n";
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
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
system("color 0b");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   "<<toss_result_declare<<" is up! Choose between batting and bowling...\n\n\t\t\t\t\t\t\t       Type '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing: ";
int player_choose;
cin>>player_choose;
switch (player_choose){
case 1:
batting_1st_hard();
case 2:
bowling_1st_hard();
default :
cout<<"\n\n\n\nYou have pressed the wrong key.\nPress any key to toss again....\n";
getch();
toss_hard();
}
}
else{
system("CLS");
system("color 0b");
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
}
void batting_1st_hard(){
//player bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";


getch();

int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,ceb11, cebi11, over1,over1a,t1,legalbat1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;
                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                legalbat1=0;
                                 break;
                            }

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
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;

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
                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                ebi2=0;
                                legalball1=0;
                                break;

                            }

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
//comp bat
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t2,legalball2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;

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
                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                ebi1=6;
                                legalball2=0;
                                break;
                            }

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
   int s2, w2, bc2, eb2, ebi2, ceb2,cebi2, cebi24, ceb24, over2,over2a, legalbat2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;
                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

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

//Two Player Mode: Name Input
string name_1, name_2, toss_winner, toss_loser, batting_1st, bowling_1st;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter name of Player 1: ";
cin>>name_1;
cout<<"\n\n\t\t\t\t\t\t\t\tEnter name of Player 2: ";
cin>>name_2;

//Two Player Mode: Toss
system("CLS");
system("color 0d");
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
    cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";

    cin>>player_1_choose;
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
    cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";

    cin>>player_2_choose;
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
            int toss_winner_choose_to;
            cin>>toss_winner_choose_to;
            if (toss_winner_choose_to == 1){
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
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,legalbat1,legalball1;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>ceb1;


                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<batting_1st<<" is now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<batting_1st<<"-"<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    if (bc1>0){cout<<"\n\n\t                   Current Run Rate: "<<fixed<<setprecision(2)<<crr1;}
                    cout<<"\n\n\n\t"<<batting_1st<<", just type your guess.";
                    cout<<"\n\n\n\tIf both guesses match, "<<batting_1st<<" will be out. If not, we will add it to "<<batting_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb1;


                    system("CLS");
                    system("color 0b");

                    switch(eb1)
                            {
                            case 1:
                                ebi1=1;
                                break;
                            case 2:
                                ebi1=2;
                                 break;
                            case 3:
                                ebi1=3;
                                 break;
                            case 4:
                                ebi1=4;
                                 break;
                            case 6:
                                ebi1=6;
                                 break;
                            default:
                                legalbat1=0;
                                 break;
                            }

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
                                     case 6:
                                        cebi1=6;
                                         break;
                                     default:
                                        legalball1=0;
                                        break;

                            }



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
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored "<<ebi1<<" in this ball";
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

int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalbat2,legalball2;
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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>ceb2;


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
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb2;


                    system("CLS");
                    system("color 0b");

                    switch(eb2)
                            {
                            case 1:
                                ebi2=1;
                                break;
                            case 2:
                                ebi2=2;
                                 break;
                            case 3:
                                ebi2=3;
                                 break;
                            case 4:
                                ebi2=4;
                                 break;
                            case 6:
                                ebi2=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

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
                                     case 6:
                                        cebi2=6;
                                         break;
                                     default:
                                        legalball2=0;
                                        break;

                            }



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
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<" in this ball";
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

cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t        @@@@@@@@@        @@@@        @@@@   @@@@@@@@@@@@@@     @@@@\n";
cout<<"\t\t\t\t\t\t      @@@@@@@@@@@@@      @@@@        @@@@   @@@@@@@@@@@@@@     @@@@\n";
cout<<"\t\t\t\t\t\t     @@@@       @@@@     @@@@        @@@@        @@@@          @@@@\n";
cout<<"\t\t\t\t\t\t    @@@@         @@@@    @@@@        @@@@        @@@@          @@@@\n";
cout<<"\t\t\t\t\t\t    @@@@         @@@@    @@@@        @@@@        @@@@          @@@@\n";
cout<<"\t\t\t\t\t\t    @@@@         @@@@    @@@@        @@@@        @@@@          @@@@\n";
cout<<"\t\t\t\t\t\t    @@@@         @@@@    @@@@        @@@@        @@@@          @@@@\n";
cout<<"\t\t\t\t\t\t     @@@@       @@@@     @@@@@      @@@@@        @@@@              \n";
cout<<"\t\t\t\t\t\t      @@@@@@@@@@@@@       @@@@@@@@@@@@@@         @@@@          @@@@\n";
cout<<"\t\t\t\t\t\t        @@@@@@@@@           @@@@@@@@@@           @@@@          @@@@\n";
cout<<"\n\n\n\n\n\n\n\nPress any key to continue....";

}
void four(){

system("CLS");
system("color 0a");
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                                         @@@@@@@@@@@@@@@      @@@@@@@@@        @@@@        @@@@    @@@@@@@@@@@@@     \n";
cout<<"                                         @@@@@@@@@@@@@@@    @@@@@@@@@@@@@      @@@@        @@@@    @@@@@@@@@@@@@@     \n";
cout<<"                                         @@@@              @@@@       @@@@     @@@@        @@@@    @@@@       @@@@  \n";
cout<<"                                         @@@@             @@@@         @@@@    @@@@        @@@@    @@@@       @@@@  \n";
cout<<"                                         @@@@@@@@@@@      @@@@         @@@@    @@@@        @@@@    @@@@@@@@@@@@@@         \n";
cout<<"                                         @@@@@@@@@@@      @@@@         @@@@    @@@@        @@@@    @@@@@@@@@@@@@        \n";
cout<<"                                         @@@@             @@@@         @@@@    @@@@        @@@@    @@@@   @@@@      \n";
cout<<"                                         @@@@              @@@@       @@@@     @@@@@      @@@@@    @@@@     @@@@     \n";
cout<<"                                         @@@@               @@@@@@@@@@@@@       @@@@@@@@@@@@@@     @@@@      @@@@    \n";
cout<<"                                         @@@@                 @@@@@@@@@           @@@@@@@@@@       @@@@       @@@@   \n";
cout<<"\n\n\n\n\n\n\n\nPress any key to continue....";
}
void six(){

system("CLS");
system("color 0e");
cout<<"\n\n\n\n\n\n\n\n\n\n\n";
cout<<"                                                           @@@@@@@@        @@@@      @@@@       @@@@   \n";
cout<<"                                                         @@@@@@@@@@@@      @@@@       @@@@     @@@@    \n";
cout<<"                                                        @@@@      @@@@     @@@@        @@@@   @@@@     \n";
cout<<"                                                        @@@@               @@@@         @@@@ @@@@      \n";
cout<<"                                                         @@@@@@@@@@@       @@@@          @@@@@@@       \n";
cout<<"                                                           @@@@@@@@@@@     @@@@          @@@@@@@       \n";
cout<<"                                                                   @@@@    @@@@         @@@@ @@@@      \n";
cout<<"                                                        @@@@       @@@@    @@@@        @@@@   @@@@     \n";
cout<<"                                                         @@@@@@@@@@@@      @@@@       @@@@     @@@@    \n";
cout<<"                                                           @@@@@@@@        @@@@      @@@@       @@@@   \n";
cout<<"\n\n\n\n\n\n\n\nPress any key to continue....";

}
void loading_screen(){

system("CLS");
Sleep(90);
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


