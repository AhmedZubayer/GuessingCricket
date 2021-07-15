/*

** I can assure you that you will love it if you try at least once! **
__________________________________________________________________________

                        *************************
                        * Guessing Cricket v2.1 *
                        *************************

[ Last update: July 16, 2021, Added new feature: TWO PLAYER MODE ]

Also available on: https://github.com/AhmedZubayer/GuessingCricketGame
__________________________________________________________________________

Get all the previous version files from the link:
**************************************************************************
*       https://github.com/AhmedZubayer/GuessingCricketGame/releases     *
**************************************************************************
History of the major previous releases:
v1.0.0----> First initial release
v2.0  ----> Added new feature: Game difficulty selection
v2.1   ----> Added new feature: Two player mode
_________________________________________________________________________

This game is mainly based on random numbers!

Challenge yourself and try to beat your previous records!

Have fun playing!

Best wishes to you from Zubayer from BANGLADESH!

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
#include<string>
using namespace std;
//Function Declarations
int intro();
int howto();
int about();
int quit();
int lvl_selection();
int toss_easy();
int batting_1st_easy();
int bowling_1st_easy();
int toss_medium();
int batting_1st_medium();
int bowling_1st_medium();
int toss_hard();
int batting_1st_hard();
int bowling_1st_hard();
int twoplayer_mode();

//Main Function
int main(){
    srand(time(0));
    intro();
}
//Custom Function
int intro(){
system("CLS");
system("color a");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(96)<<"     Hi there! What's up! \n\n";
cout<<setw(98)<<"Welcome back to \"CRICKET\" \n";
cout<<endl<<endl<<endl;
cout<<setw(125)<<"***We are recommending you to use your keyboard Number pad to play this game***"<<endl;
cout<<setw(110)<<"***Press the corresponding key of each commands***";
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t   1. Start game\n\t\t\t\t\t\t\t\t\t   2. How to play\n\t\t\t\t\t\t\t\t\t   3. About this game\n\t\t\t\t\t\t\t\t\t   4. Quit Game"<<endl<<endl;
int introinput;
cout<<"\t\t\t\t\t\t\t\t\t     Your input : ";
cin>>introinput;
switch(introinput){
case 1:
lvl_selection();
break;
case 2:
howto();
break;
case 3:
about();
break;
case 4:
quit();
break;
default:
cout<<endl<<"\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch;
intro();
}
}
int howto(){
system("CLS");
system("color f");
cout<<endl<<endl<<endl<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tHOW TO PLAY\n\n\n\n\n\n\t#Just press the the corresponding key of each command.\n\n\t#Don't press any extra key as that may crash the game. \n\n\t#Guess the run and type it and hit enter. \n\n\t#Type 1 , 2, 3, 4, 6 during batting and bowling. "<<endl<<"\t (Typing 0, 5 or more than 6 will be considered as 'Hit Wicket' during batting and 'No Ball' during balling.)"<<endl;
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"Press any key to continue ....";
getch();
intro();
}
int about(){
system("CLS");
system ("color e");
cout<<endl;
cout<<"                                                                        ********************"<<endl;
cout<<"                                                                        * Guessing Cricket *"<<endl;
cout<<"                                                                        ********************"<<endl;
cout<<endl;
cout<<"    Game Vesion: 2.1                                                                                                                Version Released: July 16, 2021"<<endl;
cout<<endl;
cout<<endl;
cout<<"    Also available on: https://github.com/AhmedZubayer/GuessingCricketGame  [Visit for further updates and releases]"<<endl;
cout<<"    _______________________________________________________________________________________________________________________________________________________________"<<endl;
cout<<endl;
cout<<"    Get all the previous versions from the link:"<<endl;
cout<<endl;
cout<<"                                           **************************************************************************"<<endl;
cout<<"                                           *       https://github.com/AhmedZubayer/GuessingCricketGame/releases     *\n";
cout<<"                                           **************************************************************************"<<endl;
cout<<endl;
cout<<"    History of previous major releases:"<<endl;
cout<<endl;
cout<<"         v1.0.0 ----> First initial release"<<endl;
cout<<"         v2.0   ----> Added new feature: Game difficulty selection"<<endl;
cout<<"         v2.1   ----> Added new feature: Two player mode"<<endl;
cout<<"    _______________________________________________________________________________________________________________________________________________________________"<<endl;
cout<<endl;
cout<<"    This game is made by Ahmed Zubayer. Playing this is lot of fun. Have fun playing with your luck. I am upgrading it frequently. Feel free to share your ideas"<<endl;
cout<<"    with me. Hope you will enjoy."<<endl;
cout<<endl;
cout<<"	   HAPPY GAMING AGAINST YOUR LUCK!"<<endl;
cout<<endl;
cout<<endl;
cout<<"	   Contact with me:"<<endl;
cout<<endl;
cout<<"                          E-mail: zubayerforyou@gmail.com"<<endl;
cout<<"                          Github: github.com/AhmedZubayer"<<endl;
cout<<endl;
cout<<endl;
cout<<"                                                                   ***Made with LOVE in Bangladesh***"<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"Press any key to continue ....";

getch();
intro();
}
int quit(){
system("CLS");
system("color 0c");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tAre you sure to quit this game?\n\n\n\t\t\t\t\t\t\t\tPress '1' to Yes or '2' to No.\n\n\t\t\t\t\t\t\t\t     You are choosing: ";
int quit1;
cin>>quit1;
if (quit1==1)
        {   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            return 0 ;
        }
else{

    intro();
        }
}
int lvl_selection(){
system("CLS");
system ("color e");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSelect game type\n";
cout<<"\n\n\n\t\t\t\t\t\t\t\t1. Easy (Opponent Level: Noob)\n\n\t\t\t\t\t\t\t\t2. Medium (Opponent Level: Pro)\n\n\t\t\t\t\t\t\t\t3. Hard (Opponent Level: Master)\n\n\t\t\t\t\t\t\t\t4. Two Player Mode\n"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t     Selected game type: ";
int level_selection;
cin>>level_selection;
switch (level_selection){
case 1:
toss_easy();
break;
case 2:
toss_medium();
break;
case 3:
toss_hard();
break;
case 4:
twoplayer_mode();
break;
default:
cout<<endl<<"\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch();
lvl_selection();
}
}
int toss_easy(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
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
{ cout<<endl<<endl<<endl<<endl<< toss_result_declare<<" is the call! Choose between batting and bowling...\nType '1' for batting and '2' for bowling\nYou are choosing: ";
int player_choose;
cin>>player_choose;
switch (player_choose){
case 1:
batting_1st_easy();
case 2:
bowling_1st_easy();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_easy();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowling_1st_easy();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st_easy();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_easy();
}
}
int batting_1st_easy(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
s1=0;
w1=0;
bc1=0;

do
    {               legalbat1=1;

                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                    }

                    else
                    {
                        s1 = s1+ebi1;
                        cout<< "\n\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    bc1++;
                }   while(bc1<=30 && w1 < 3);



t1 = s1 +1;

//comp bat
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
s2=0;
w2=0;
bc2=0;
do {
                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget-"<<t1;
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
                                ebi2 = 0;
                                legalball1 = 0;
                                break;

                            }

                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\tNo Ball !";
                        cout<< "\n\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;
                        cout<< "\n\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
            }while(bc2<=30 && w2<3 && t1>s2);


     if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
int bowling_1st_easy(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a,legalball2;
s3=0;
w3=0;
bc3=0;
do{

                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over3=bc3 / 6;
                    over3a = bc3 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s3      <<    "/"    <<   w3   <<    "                            Over-"     <<   over3    <<"."<<over3a;
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb3;

                    ceb3= rand()%5;
                        switch(ceb3)
                            {
                                    case 1:
                                        cebi3=1;
                                         break;
                                     case 2:
                                        cebi3=2;
                                         break;
                                     case 3:
                                        cebi3=3;
                                         break;
                                     case 4:
                                        cebi3=4;
                                         break;
                                     case 0:
                                        cebi3=6;
                                         break;
                            }
                    switch(eb3)
                            {
                            case 1:
                                ebi3=1;
                                break;
                            case 2:
                                ebi3=2;
                                 break;
                            case 3:
                                ebi3=3;
                                 break;
                            case 4:
                                ebi3=4;
                                 break;
                            case 6:
                                ebi3=6;
                                 break;
                            default:
                                ebi3=0;
                                legalball2=0;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(legalball2==0)
                        {bc3=bc3;
                         cout<<"\n\tNo Ball !";
                         cout<< "\n\tComputer has scored "<<cebi3<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s3= s3+cebi3+1;}
                    else
                    {
                        s3= s3+cebi3;
                        cout<< "\n\tComputer has scored "<<cebi3<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
    }while(bc3<=30 && w3 < 3);

//player bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2,legalbat2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over4=bc4 / 6;
                    over4a = bc4 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s4<<"/"<<w4<<"                            Over-"<<over4<<"."<<over4a<<"                       Target-"<<t2;
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb4;
                    switch(eb4)
                            {
                            case 1:
                                ebi4=1;
                                break;
                            case 2:
                                ebi4=2;
                                 break;
                            case 3:
                                ebi4=3;
                                 break;
                            case 4:
                                ebi4=4;
                                 break;
                            case 6:
                                ebi4=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

                    ceb4= rand()%5;
                        switch(ceb4)
                            {
                                    case 1:
                                        cebi4=1;
                                         break;
                                     case 2:
                                        cebi4=2;
                                         break;
                                     case 3:
                                        cebi4=3;
                                         break;
                                     case 4:
                                        cebi4=4;
                                         break;
                                     case 0:
                                        cebi4=6;
                                         break;
                            }

                    if(cebi4==ebi4 || legalbat2==0)
                    {   w4 = w4+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
                    else
                    {
                        s4 = s4+ebi4;
                        cout<< "\n\tYou have scored "<<ebi4<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
    }while(bc4<=30 && w4<3 && t2>s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
int toss_medium(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
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
{ cout<<endl<<endl<<endl<<endl<< toss_result_declare<<" is the call! Choose between batting and bowling...\nType '1' for batting and '2' for bowling\nYou are choosing: ";
int player_choose;
cin>>player_choose;
switch (player_choose){
case 1:
batting_1st_medium();
case 2:
bowling_1st_medium();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_medium();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowling_1st_medium();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st_medium();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_medium();
}
}
int batting_1st_medium(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
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

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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
                   switch(ceb11)
                            {
                                    case 0:
                                        cebi11=4;
                                         break;
                                     case 1:
                                        cebi11=6;
                                         break;
                                    case 2:
                                        cebi11=1;
                                         break;
                                    case 3:
                                        cebi11=2;
                                         break;
                                    case 4:
                                        cebi11=3;
                                         break;

                            }


                    if(cebi1==ebi1 || cebi11 ==ebi1 || legalbat1==0)
                    {   w1 = w1+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                    }
                    else
                    {
                        s1 = s1+ebi1;
                        cout<< "\n\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    bc1++;
                }   while(bc1<=30 && w1 < 3);



t1 = s1 +1;

//comp bat
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
s2=0;
w2=0;
bc2=0;
do {
                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget-"<<t1;
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
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\tNo Ball !";
                        cout<< "\n\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;
                        cout<< "\n\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
            }while(bc2<=30 && w2<3 && t1>s2);


     if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
int bowling_1st_medium(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a,legalball2;
s3=0;
w3=0;
bc3=0;
do{
                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over3=bc3 / 6;
                    over3a = bc3 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s3      <<    "/"    <<   w3   <<    "                            Over-"     <<   over3    <<"."<<over3a;
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb3;

                    ceb3= rand()%5;
                        switch(ceb3)
                            {
                                    case 1:
                                        cebi3=1;
                                         break;
                                     case 2:
                                        cebi3=2;
                                         break;
                                     case 3:
                                        cebi3=3;
                                         break;
                                     case 4:
                                        cebi3=4;
                                         break;
                                     case 0:
                                        cebi3=6;
                                         break;
                            }
                    switch(eb3)
                            {
                            case 1:
                                ebi3=1;
                                break;
                            case 2:
                                ebi3=2;
                                 break;
                            case 3:
                                ebi3=3;
                                 break;
                            case 4:
                                ebi3=4;
                                 break;
                            case 6:
                                ebi3=6;
                                 break;
                            default:
                                ebi3=0;
                                legalball2=0;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(legalball2==0)
                        {bc3=bc3;
                         cout<<"\n\tNo Ball !";
                         cout<< "\n\tComputer has scored "<<cebi3<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s3= s3+cebi3+1;}
                    else
                    {
                        s3= s3+cebi3;
                        cout<< "\n\tComputer has scored "<<cebi3<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
    }while(bc3<=30 && w3<3);

//player bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2,legalbat2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over4=bc4 / 6;
                    over4a = bc4 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s4<<"/"<<w4<<"                            Over-"<<over4<<"."<<over4a<<"                       Target-"<<t2;
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb4;
                    switch(eb4)
                            {
                            case 1:
                                ebi4=1;
                                break;
                            case 2:
                                ebi4=2;
                                 break;
                            case 3:
                                ebi4=3;
                                 break;
                            case 4:
                                ebi4=4;
                                 break;
                            case 6:
                                ebi4=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

                    ceb4= rand()%5;
                        switch(ceb4)
                            {
                                    case 1:
                                        cebi4=1;
                                         break;
                                     case 2:
                                        cebi4=2;
                                         break;

                                     case 0:
                                        cebi4=3;
                                         break;
                                    case 3:
                                        cebi4=4;
                                         break;
                                    case 4:
                                        cebi4=6;
                                         break;
                            }

                    int ceb44=rand()%5;
                    int cebi44;
                    switch(ceb44)
                            {
                                    case 1:
                                        cebi44=4;
                                         break;
                                     case 0:
                                        cebi44=6;
                                         break;
                                    case 2:
                                        cebi44=1;
                                         break;
                                    case 3:
                                        cebi44=2;
                                         break;
                                    case 4:
                                        cebi44=3;
                                         break;
                            }


                    if(cebi4==ebi4 || cebi44==ebi4 || legalbat2==0)
                    {   w4 = w4+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
                    else
                    {
                        s4 = s4+ebi4;
                        cout<< "\n\tYou have scored "<<ebi4<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
    }while(bc4<=30 && w4<3 && t2>s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
int toss_hard(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
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
{ cout<<endl<<endl<<endl<<endl<< toss_result_declare<<" is the call! Choose between batting and bowling...\nType '1' for batting and '2' for bowling\nYou are choosing: ";
int player_choose;
cin>>player_choose;
switch (player_choose){
case 1:
batting_1st_hard();
case 2:
bowling_1st_hard();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_hard();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowling_1st_hard();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st_hard();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_hard();
}
}
int batting_1st_hard(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
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

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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

                    ceb1= rand()%3;

                    int ceb11 = rand()%2;
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

                            }
                   int cebi11;
                   switch(ceb11)
                            {
                                    case 0:
                                        cebi11=4;
                                         break;
                                     case 1:
                                        cebi11=6;
                                         break;

                            }


                    if(cebi1==ebi1 || cebi11==ebi1 || legalbat1==0)
                    {   w1 = w1+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                    }
                    else
                    {
                        s1 = s1+ebi1;
                        cout<< "\n\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    bc1++;
                }   while(bc1<=30 && w1 < 3);



t1 = s1 +1;

//comp bat
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
s2=0;
w2=0;
bc2=0;
do {

                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget-"<<t1;
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
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\tNo Ball !";
                        cout<< "\n\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;
                        cout<< "\n\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
            }while(bc2<=30 && w2<3 && t1>s2);


     if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
int bowling_1st_hard(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a,legalball2;
s3=0;
w3=0;
bc3=0;
do{

                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over3=bc3 / 6;
                    over3a = bc3 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s3      <<    "/"    <<   w3   <<    "                            Over-"     <<   over3    <<"."<<over3a;
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb3;

                    ceb3= rand()%5;
                        switch(ceb3)
                            {
                                    case 1:
                                        cebi3=1;
                                         break;
                                     case 2:
                                        cebi3=2;
                                         break;
                                     case 3:
                                        cebi3=3;
                                         break;
                                     case 4:
                                        cebi3=4;
                                         break;
                                     case 0:
                                        cebi3=6;
                                         break;
                            }
                    switch(eb3)
                            {
                            case 1:
                                ebi3=1;
                                break;
                            case 2:
                                ebi3=2;
                                 break;
                            case 3:
                                ebi3=3;
                                 break;
                            case 4:
                                ebi3=4;
                                 break;
                            case 6:
                                ebi3=6;
                                 break;
                            default:
                                ebi3=6;
                                legalball2=0;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(legalball2==0)
                        {bc3=bc3;
                         cout<<"\n\tNo Ball !";
                         cout<< "\n\tComputer has scored "<<cebi3<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s3= s3+cebi3+1;}
                    else
                    {
                        s3= s3+cebi3;
                        cout<< "\n\tComputer has scored "<<cebi3<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
    }while(bc3<=30 && w3 < 3);

//player bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2, legalbat2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over4=bc4 / 6;
                    over4a = bc4 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s4<<"/"<<w4<<"                            Over-"<<over4<<"."<<over4a<<"                       Target-"<<t2;
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb4;
                    switch(eb4)
                            {
                            case 1:
                                ebi4=1;
                                break;
                            case 2:
                                ebi4=2;
                                 break;
                            case 3:
                                ebi4=3;
                                 break;
                            case 4:
                                ebi4=4;
                                 break;
                            case 6:
                                ebi4=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }

                    ceb4= rand()%3;
                        switch(ceb4)
                            {
                                    case 1:
                                        cebi4=1;
                                         break;
                                     case 2:
                                        cebi4=2;
                                         break;

                                     case 0:
                                        cebi4=3;
                                         break;
                            }

                    int ceb44=rand()%2;
                    int cebi44;
                    switch(ceb44)
                            {
                                    case 1:
                                        cebi44=4;
                                         break;

                                     case 0:
                                        cebi44=6;
                                         break;
                            }


                    if(cebi4==ebi4 || cebi44==ebi4 || legalbat2==0)
                    {   w4 = w4+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
                    else
                    {
                        s4 = s4+ebi4;
                        cout<< "\n\tYou have scored "<<ebi4<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
    }while(bc4<=30 && w4<3 && t2>s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
int twoplayer_mode(){
system("CLS");
system("color 0d");

//Two Player Mode: Name Input
string name_1, name_2, toss_winner, toss_loser, batting_1st, bowling_1st;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter name of Player 1: ";
cin>>name_1;
cout<<endl<<endl<<"\t\t\t\t\t\t\t\tEnter name of Player 2: ";
cin>>name_2;

//Two Player Mode: Toss
system("CLS");
system("color 0d");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(100)<<"Computer will decide who is going to call";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
getch();

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
    cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<name_1<<", choose between Head and Tail."<<endl;
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


    else { toss_winner==name_2;
            toss_loser=name_1;}

}else{


    cout<<"\t\t\t\t\t\t\t\t\t"<<name_2<<", you will call!";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";

    getch();

    system("CLS");
    system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<name_2<<", choose between Head and Tail."<<endl;
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

            cout<<endl<<endl<<endl<<endl<<"\n\n\n\n\n\t\t\t\t\t\t\t\t            "<< toss_result_declare<<" is the call!\n\n\n\n\t\t\t\t\t\t\t\t"<<toss_winner<<", choose between batting and bowling...\n\n\t\t\t\t\t\t\t\tType '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\tYou are choosing: ";
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
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,legalbat1,legalball1;
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
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<bowling_1st<<" is now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
                    cout<<"\n\n\n\t"<<bowling_1st<<", just type your guess. \n\n\n\t***Make sure, "<<batting_1st<<" is looking away!*** \n\n\n\tThen, "<<batting_1st<<" will guess too.";
                    cout<<"\n\n\n\tIf both guesses match, "<<batting_1st<<" will be out. If not, we will add it to "<<batting_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>ceb1;


                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;
                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<batting_1st<<" is now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     OUT!";
                        cout<< "\n\n\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }

                    else if (legalball1 != 0 && legalbat1 != 0 && cebi1 != ebi1)
                    {
                        s1 = s1+ebi1;
                        bc1++;
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"<<batting_1st<<" has scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    else if (legalball1 == 0 && legalbat1 != 0)
                    {
                        s1 = s1+ebi1+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\nt\t\t"<<batting_1st<<" has scored "<<ebi1<<"+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    else if (legalball1 == 0 && legalbat1 == 0)
                    {
                        s1 = s1+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t"<<batting_1st<<" has scored 0+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }


                }   while(bc1<=30 && w1 < 3);


    int target = s1 + 1;

//2nd innings

int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalbat2,legalball2;
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
                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<batting_1st<<" is now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"\t\t\tTarget-"<<target;
                    cout<<"\n\n\n\t"<<batting_1st<<", just type your guess. \n\n\n\t***Make sure, "<<bowling_1st<<" is looking away!*** \n\n\n\tThen, "<<bowling_1st<<" will guess too.";
                    cout<<"\n\n\n\tIf both guesses match, "<<bowling_1st<<" will be out. If not, we will add it to "<<bowling_1st<<"'s total!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>ceb2;


                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;
                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each has 3 wickets\n\n\t"<<bowling_1st<<" is now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s2<<"/"<<w2<<"                            Over-"<<over2<<"."<<over2a<<"\t\t\tTarget-"<<target;
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
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     OUT!";
                        cout<< "\n\n\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }

                    else if (legalball2 != 0 && legalbat2 != 0 && cebi2 != ebi2)
                    {
                        s2 = s2+ebi2;
                        bc2++;
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    else if (legalball2 == 0 && legalbat2 != 0)
                    {
                        s2 = s2+ebi2+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<"+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    else if (legalball2 == 0 && legalbat2 == 0)
                    {
                        s2 = s2+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\nt\t\t"<<bowling_1st<<" has scored 0+1 in this ball\n\n\n\n\n\n\nPress any key to continue....";
                        getch();
                    }


                }   while(bc2<=30 && w2 < 3 && target > s2);


if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations!  "<<batting_1st<<" won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t           Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else if (s1<s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tCongratulations!  "<<bowling_1st<<" won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }


            }



/*
***Don't run this code here as it is a interactive program. Use other C++ IDE ***
**Just copy the whole code and paste in the IDE that you use for practice and run it.**

** I can assure you that you will love it if you try at least once! **
__________________________________________________________________________

                        ***************************
                        * Guessing Cricket v2.0.1 *
                        ***************************

[Last update: July 11, 2021, Added new feature: Difficulty selector ]

Also available on: https://github.com/AhmedZubayer/GuessingCricketGame
__________________________________________________________________________

Get all the previous version files from the link:
**************************************************************************
*       https://github.com/AhmedZubayer/GuessingCricketGame/releases     *
**************************************************************************
History of the major previous releases:
v1.0.0----> First initial release
v2.0  ----> Added new feature: Game difficulty selection
__________________________________________________________________________

This game is mainly based on random numbers!

Challenge yourself and try to beat your previous records!

Have fun playing!

Best wishes to you from Zubayer from BANGLADESH!

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
using namespace std;
//Function Declarations
int intro();
int howto();
int about();
int quit();
int lvl_selection();
int toss_easy();
int batting_1st_easy();
int bowing_1st_easy();
int toss_medium();
int batting_1st_medium();
int bowing_1st_medium();
int toss_hard();
int batting_1st_hard();
int bowing_1st_hard();
//Main Function
int main(){
    intro();
}
//Custom Function
int intro(){
system("CLS");
system("color a");
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<setw(95)<<"Hi there! What's up! \n";
cout<<setw(98)<<"Welcome back to \"CRICKET\" \n";
cout<<endl<<endl<<endl;
cout<<setw(123)<<"***We are recommending you to use your keyboard's Number pad to play this game***"<<endl;
cout<<setw(110)<<"***Press the corresponding key of each commands***";
cout<<endl<<endl<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t\t1. Start game\n\t\t\t\t\t\t\t\t\t2. How to play\n\t\t\t\t\t\t\t\t\t3. About this game\n\t\t\t\t\t\t\t\t\t4. Quit Game"<<endl<<endl;
int introinput;
cout<<"\t\t\t\t\t\t\t\t\t Your input : ";
cin>>introinput;
switch(introinput){
case 1:
lvl_selection();
break;
case 2:
howto();
break;
case 3:
about();
break;
case 4:
quit();
break;
default:
cout<<endl<<"\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch;
intro();
}
}
int howto(){
system("CLS");
system("color f");
cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\tHOW TO PLAY\n#Just press the the corresponding key of each command.\n#Don't press any extra key as that will crash the game. \n#Guess the run and type it and hit enter. \n#Type 1 , 2, 3, 4, 6 during batting and bowling. "<<endl<<"(Typing 0, 5 or more than 6 will be considered as 'Hit Wicket' during batting and 'No Ball' during balling.)"<<endl;
cout<<endl<<"Press any key to continue ....";
getch();
intro();
}
int about(){
system("CLS");
system ("color e");
cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\tAbout this game\n\nThis game is made by Ahmed Zubayer. Playing this is a lot of fun. Have fun playing with your luck. This game is at beginning stage. We are upgrading it.\nFeel free to share your idea. Hope you will enjoy it. HAPPY GAMING AGAINST YOUR LUCK! \n\n\nContact me: E-mail: zubayerforyou@gmail.com\n\n\n\n***Made with LOVE in Bangladesh***"<<endl<<endl;
cout<<"\n\n\nPress any key to continue ....";
getch();
intro();
}
int quit(){
system("CLS");
system("color 0c");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tAre you sure to quit this game?\n\n\n\t\t\t\t\t\t\t\tPress '1' to Yes or '2' to No.\n\t\t\t\t\t\t\t\tYou are choosing: ";
int quit1;
cin>>quit1;
if (quit1==1)
        {
            return 0 ;
        }
else{

    intro();
        }
}
int lvl_selection(){
system("CLS");
system ("color e");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSelect game level\n";
cout<<"\n\n\n\t\t\t\t\t\t\t\t1. Easy (Opponent Level: Noob)\n\n\t\t\t\t\t\t\t\t2. Medium (Opponent Level: Pro)\n\n\t\t\t\t\t\t\t\t3. Hard (Opponent Level: Master)\n"<<endl<<endl;
cout<<"\t\t\t\t\t\t\t\t     Selected game level: ";
int level_selection;
cin>>level_selection;
switch (level_selection){
case 1:
toss_easy();
break;
case 2:
toss_medium();
break;
case 3:
toss_hard();
default:
cout<<endl<<"\t\t\t\t\t\t\t\t  ***Please enter correct number***\n\t\t\t\t\t\t\t\t  Press any key to continue....";
getch();
lvl_selection();
}
}
int toss_easy(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){
srand(time(0));
toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else
{toss_result = 'T';
toss_result_declare = "Tail";}
if (player_toss==toss_result)
{ cout<<endl<<endl<<endl<<endl<< toss_result_declare<<" is the call! Choose between batting and bowling...\nType '1' for batting and '2' for bowling\nYou are choosing: ";
int player_chosse;
cin>>player_chosse;
switch (player_chosse){
case 1:
batting_1st_easy();
case 2:
bowing_1st_easy();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_easy();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int computer_decision;
string comp_chose;
srand(time(0));
computer_decision = rand() %2;
if (computer_decision==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowing_1st_easy();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st_easy();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_easy();
}
}
int batting_1st_easy(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
s1=0;
w1=0;
bc1=0;

do
    {               legalbat1=1;

                    system("CLS");
                    system("color 0b");
                    over1=bc1 / 6;
                    over1a = bc1 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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
                    srand(time(0));
                    ceb1= rand()%5;
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
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                    }

                    else
                    {
                        s1 = s1+ebi1;
                        cout<< "\n\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    bc1++;
                }   while(bc1<=30 && w1 < 3);



t1 = s1 +1;

//comp bat
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
s2=0;
w2=0;
bc2=0;
do {
                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget - "<<t1;
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
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\tNo Ball !";
                        cout<< "\n\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;
                        cout<< "\n\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
            }while(bc2<=30 && w2<3 && t1>s2);


     if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
int bowing_1st_easy(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a,legalball2;
s3=0;
w3=0;
bc3=0;
do{

                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over3=bc3 / 6;
                    over3a = bc3 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s3      <<    "/"    <<   w3   <<    "                            Over-"     <<   over3    <<"."<<over3a;
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb3;
                    srand(time(0));
                    ceb3= rand()%5;
                        switch(ceb3)
                            {
                                    case 1:
                                        cebi3=1;
                                         break;
                                     case 2:
                                        cebi3=2;
                                         break;
                                     case 3:
                                        cebi3=3;
                                         break;
                                     case 4:
                                        cebi3=4;
                                         break;
                                     case 0:
                                        cebi3=6;
                                         break;
                            }
                    switch(eb3)
                            {
                            case 1:
                                ebi3=1;
                                break;
                            case 2:
                                ebi3=2;
                                 break;
                            case 3:
                                ebi3=3;
                                 break;
                            case 4:
                                ebi3=4;
                                 break;
                            case 6:
                                ebi3=6;
                                 break;
                            default:
                                ebi3=0;
                                legalball2=0;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(legalball2==0)
                        {bc3=bc3;
                         cout<<"\n\tNo Ball !";
                         cout<< "\n\tComputer has scored "<<cebi3<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s3= s3+cebi3+1;}
                    else
                    {
                        s3= s3+cebi3;
                        cout<< "\n\tComputer has scored "<<cebi3<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
    }while(bc3<=30 && w3 < 3);

//player bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2,legalbat2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over4=bc4 / 6;
                    over4a = bc4 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s4<<"/"<<w4<<"                            Over-"<<over4<<"."<<over4a<<"                       Target- "<<t2;
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb4;
                    switch(eb4)
                            {
                            case 1:
                                ebi4=1;
                                break;
                            case 2:
                                ebi4=2;
                                 break;
                            case 3:
                                ebi4=3;
                                 break;
                            case 4:
                                ebi4=4;
                                 break;
                            case 6:
                                ebi4=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }
                    srand(time(0));
                    ceb4= rand()%5;
                        switch(ceb4)
                            {
                                    case 1:
                                        cebi4=1;
                                         break;
                                     case 2:
                                        cebi4=2;
                                         break;
                                     case 3:
                                        cebi4=3;
                                         break;
                                     case 4:
                                        cebi4=4;
                                         break;
                                     case 0:
                                        cebi4=6;
                                         break;
                            }

                    if(cebi4==ebi4 || legalbat2==0)
                    {   w4 = w4+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
                    else
                    {
                        s4 = s4+ebi4;
                        cout<< "\n\tYou have scored "<<ebi4<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
    }while(bc4<=30 && w4<3 && t2>s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
int toss_medium(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){
srand(time(0));
toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else
{toss_result = 'T';
toss_result_declare = "Tail";}
if (player_toss==toss_result)
{ cout<<endl<<endl<<endl<<endl<< toss_result_declare<<" is the call! Choose between batting and bowling...\nType '1' for batting and '2' for bowling\nYou are choosing: ";
int player_chosse;
cin>>player_chosse;
switch (player_chosse){
case 1:
batting_1st_medium();
case 2:
bowing_1st_medium();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_medium();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int computer_decision;
string comp_chose;
srand(time(0));
computer_decision = rand() %2;
if (computer_decision==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowing_1st_medium();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st_medium();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_medium();
}
}
int batting_1st_medium(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
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

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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
                    srand(time(0));
                    ceb1= rand()%5;
                    srand(time(0));
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
                   switch(ceb11)
                            {
                                    case 0:
                                        cebi11=4;
                                         break;
                                     case 1:
                                        cebi11=6;
                                         break;
                                    case 2:
                                        cebi11=1;
                                         break;
                                    case 3:
                                        cebi11=2;
                                         break;
                                    case 4:
                                        cebi11=3;
                                         break;

                            }


                    if(cebi1==ebi1 || cebi11 ==ebi1 || legalbat1==0)
                    {   w1 = w1+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                    }
                    else
                    {
                        s1 = s1+ebi1;
                        cout<< "\n\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    bc1++;
                }   while(bc1<=30 && w1 < 3);



t1 = s1 +1;

//comp bat
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
s2=0;
w2=0;
bc2=0;
do {
                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget - "<<t1;
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
                                ebi2=0;
                                legalball1=0;
                                break;

                            }

                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\tNo Ball !";
                        cout<< "\n\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;
                        cout<< "\n\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
            }while(bc2<=30 && w2<3 && t1>s2);


     if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
int bowing_1st_medium(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a,legalball2;
s3=0;
w3=0;
bc3=0;
do{
                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over3=bc3 / 6;
                    over3a = bc3 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s3      <<    "/"    <<   w3   <<    "                            Over-"     <<   over3    <<"."<<over3a;
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb3;
                    srand(time(0));
                    ceb3= rand()%5;
                        switch(ceb3)
                            {
                                    case 1:
                                        cebi3=1;
                                         break;
                                     case 2:
                                        cebi3=2;
                                         break;
                                     case 3:
                                        cebi3=3;
                                         break;
                                     case 4:
                                        cebi3=4;
                                         break;
                                     case 0:
                                        cebi3=6;
                                         break;
                            }
                    switch(eb3)
                            {
                            case 1:
                                ebi3=1;
                                break;
                            case 2:
                                ebi3=2;
                                 break;
                            case 3:
                                ebi3=3;
                                 break;
                            case 4:
                                ebi3=4;
                                 break;
                            case 6:
                                ebi3=6;
                                 break;
                            default:
                                ebi3=0;
                                legalball2=0;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(legalball2==0)
                        {bc3=bc3;
                         cout<<"\n\tNo Ball !";
                         cout<< "\n\tComputer has scored "<<cebi3<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s3= s3+cebi3+1;}
                    else
                    {
                        s3= s3+cebi3;
                        cout<< "\n\tComputer has scored "<<cebi3<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
    }while(bc3<=30 && w3<3);

//player bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2,legalbat2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over4=bc4 / 6;
                    over4a = bc4 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s4<<"/"<<w4<<"                            Over-"<<over4<<"."<<over4a<<"                       Target- "<<t2;
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb4;
                    switch(eb4)
                            {
                            case 1:
                                ebi4=1;
                                break;
                            case 2:
                                ebi4=2;
                                 break;
                            case 3:
                                ebi4=3;
                                 break;
                            case 4:
                                ebi4=4;
                                 break;
                            case 6:
                                ebi4=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }
                    srand(time(0));
                    ceb4= rand()%5;
                        switch(ceb4)
                            {
                                    case 1:
                                        cebi4=1;
                                         break;
                                     case 2:
                                        cebi4=2;
                                         break;

                                     case 0:
                                        cebi4=3;
                                         break;
                                    case 3:
                                        cebi4=4;
                                         break;
                                    case 4:
                                        cebi4=6;
                                         break;
                            }
                   srand(time(0));
                    int ceb44=rand()%5;
                    int cebi44;
                    switch(ceb44)
                            {
                                    case 1:
                                        cebi44=4;
                                         break;
                                     case 0:
                                        cebi44=6;
                                         break;
                                    case 2:
                                        cebi44=1;
                                         break;
                                    case 3:
                                        cebi44=2;
                                         break;
                                    case 4:
                                        cebi44=3;
                                         break;
                            }


                    if(cebi4==ebi4 || cebi44==ebi4 || legalbat2==0)
                    {   w4 = w4+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
                    else
                    {
                        s4 = s4+ebi4;
                        cout<< "\n\tYou have scored "<<ebi4<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
    }while(bc4<=30 && w4<3 && t2>s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}
int toss_hard(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\t         Type H/h for head and T/t for tail. \n\t\t\t\t\t\t\t         You are choosing: ";
char player_toss;
char toss_result;
int toss_initial;
string toss_result_declare;
cin>> player_toss;
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){
srand(time(0));
toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else
{toss_result = 'T';
toss_result_declare = "Tail";}
if (player_toss==toss_result)
{ cout<<endl<<endl<<endl<<endl<< toss_result_declare<<" is the call! Choose between batting and bowling...\nType '1' for batting and '2' for bowling\nYou are choosing: ";
int player_chosse;
cin>>player_chosse;
switch (player_chosse){
case 1:
batting_1st_hard();
case 2:
bowing_1st_hard();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_hard();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int computer_decision;
string comp_chose;
srand(time(0));
computer_decision = rand() %2;
if (computer_decision==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowing_1st_hard();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st_hard();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss_hard();
}
}
int batting_1st_hard(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1,legalbat1;
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

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s1<<"/"<<w1<<"                            Over-"<<over1<<"."<<over1a;
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
                    srand(time(0));
                    ceb1= rand()%3;
                    srand(time(0));
                    int ceb11 = rand()%2;
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

                            }
                   int cebi11;
                   switch(ceb11)
                            {
                                    case 0:
                                        cebi11=4;
                                         break;
                                     case 1:
                                        cebi11=6;
                                         break;

                            }


                    if(cebi1==ebi1 || cebi11==ebi1 || legalbat1==0)
                    {   w1 = w1+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                    }
                    else
                    {
                        s1 = s1+ebi1;
                        cout<< "\n\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                    }
                    bc1++;
                }   while(bc1<=30 && w1 < 3);



t1 = s1 +1;

//comp bat
int s2, w2, bc2, eb2, ebi2, ceb2,cebi2,over2,over2a,legalball1;
s2=0;
w2=0;
bc2=0;
do {

                    legalball1=1;

                    system("CLS");
                    system("color 0b");
                    over2=bc2 / 6;
                    over2a = bc2 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s2      <<    "/"    <<   w2   <<    "                            Over-"     <<   over2    <<"."<<over2a  <<"\t\t\tTarget - "<<t1;
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
                                ebi2=0;
                                legalball1=0;
                                break;

                            }

                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\tNo Ball !";
                        cout<< "\n\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        s2 = s2+cebi2+1;}
                    else
                    {
                        s2 = s2+cebi2;
                        cout<< "\n\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc2++;
                    }
            }while(bc2<=30 && w2<3 && t1>s2);


     if(s1>s2)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }

}
int bowing_1st_hard(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a,legalball2;
s3=0;
w3=0;
bc3=0;
do{

                    legalball2=1;

                    system("CLS");
                    system("color 0b");
                    over3=bc3 / 6;
                    over3a = bc3 %6;

                    cout<< "\n\n\t1st Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now bowling....\n\n\n";
                    cout<<"\tScoreboard :       "    <<   s3      <<    "/"    <<   w3   <<    "                            Over-"     <<   over3    <<"."<<over3a;
                    cout<<"\n\n\n\tJust type your guess. If it matches, Computer will be out. If not, we will add computer's score to it's score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb3;
                    srand(time(0));
                    ceb3= rand()%5;
                        switch(ceb3)
                            {
                                    case 1:
                                        cebi3=1;
                                         break;
                                     case 2:
                                        cebi3=2;
                                         break;
                                     case 3:
                                        cebi3=3;
                                         break;
                                     case 4:
                                        cebi3=4;
                                         break;
                                     case 0:
                                        cebi3=6;
                                         break;
                            }
                    switch(eb3)
                            {
                            case 1:
                                ebi3=1;
                                break;
                            case 2:
                                ebi3=2;
                                 break;
                            case 3:
                                ebi3=3;
                                 break;
                            case 4:
                                ebi3=4;
                                 break;
                            case 6:
                                ebi3=6;
                                 break;
                            default:
                                ebi3=6;
                                legalball2=0;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(legalball2==0)
                        {bc3=bc3;
                         cout<<"\n\tNo Ball !";
                         cout<< "\n\tComputer has scored "<<cebi3<<"+1 in this ball\n\n\n\nPress any key to continue....";
                         getch();
                         s3= s3+cebi3+1;}
                    else
                    {
                        s3= s3+cebi3;
                        cout<< "\n\tComputer has scored "<<cebi3<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
    }while(bc3<=30 && w3 < 3);

//player bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2, legalbat2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

                    legalbat2=1;

                    system("CLS");
                    system("color 0b");
                    over4=bc4 / 6;
                    over4a = bc4 %6;

                    cout<< "\n\n\t2nd Innings\n\n\n\t5 overs match, each team has 3 wickets\n\n\tYou are now batting....\n\n\n";
                    cout<<"\tScoreboard :       "<<s4<<"/"<<w4<<"                            Over-"<<over4<<"."<<over4a<<"                       Target- "<<t2;
                    cout<<"\n\n\n\tJust type your guess. If it matches, you will be out. If not, we will add it to your score!\n\n\n";
                    cout<<"\t\t\tType your guess here: ";
                    cin>>eb4;
                    switch(eb4)
                            {
                            case 1:
                                ebi4=1;
                                break;
                            case 2:
                                ebi4=2;
                                 break;
                            case 3:
                                ebi4=3;
                                 break;
                            case 4:
                                ebi4=4;
                                 break;
                            case 6:
                                ebi4=6;
                                 break;
                            default:
                                legalbat2=0;
                                 break;
                            }
                    srand(time(0));
                    ceb4= rand()%3;
                        switch(ceb4)
                            {
                                    case 1:
                                        cebi4=1;
                                         break;
                                     case 2:
                                        cebi4=2;
                                         break;

                                     case 0:
                                        cebi4=3;
                                         break;
                            }
                   srand(time(0));
                    int ceb44=rand()%2;
                    int cebi44;
                    switch(ceb44)
                            {
                                    case 1:
                                        cebi44=4;
                                         break;

                                     case 0:
                                        cebi44=6;
                                         break;
                            }


                    if(cebi4==ebi4 || cebi44==ebi4 || legalbat2==0)
                    {   w4 = w4+1;
                        cout<<"OUT!";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
                    else
                    {
                        s4 = s4+ebi4;
                        cout<< "\n\tYou have scored "<<ebi4<<" in this ball\n\n\n\nPress any key to continue....";
                        getch();
                        bc4++;
                    }
    }while(bc4<=30 && w4<3 && t2>s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
     else
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tSorry, Computer won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
             intro();
        }
}



