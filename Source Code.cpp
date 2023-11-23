/*
Guessing Cricket....v3.0

[Last update of this version: November 24, 2023]

Updates:
-Added Background Music
-Basic Color fix
*/

/*****************SEE YOU IN 2024!***************/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<chrono>
#include<string>
#include<Windows.h>
#include <mmsystem.h>                                      //For Musics

#pragma comment(lib, "winmm.lib")                     //For Music


using namespace std;

///____________________ Global Variables Declaration ____________________///

int game_lvl, s1, w1, bc1, ebi1, ceb1, cebi1, over1, over1a, t1, legalbat1, s2, w2, bc2, ebi2, ceb2 ,cebi2 ,over2 ,over2a ,legalball1, legalball2, t2, legalbat2, ceb24, cebi24, ceb11, cebi11, toss_initial, nav;
char eb1, eb2, toss_result, gnrl_inp;
double crr1, rrr1, crr2, rrr;

///____________________ Console Manipulator ____________________///

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


///___________________ Functions Declaration ____________________///

//Hiding caret
void ShowConsoleCursor(bool showFlag);

//UI
void intro_title();
void intro();
void intro_menu();
void howto();
void about();
void update();
void quit();
void game_mode();
void lvl_selection();
void pause();

//Game graphics
void intro_startup();
void out();
void four();
void six();
void loading_screen();
void flipping_coin();

//In-game functions
void toss();
void batting_1st();
void bowling_1st();
void twoplayer_mode();

///____________________ Main Function ___________________///

int main(){

//Presetting the console environment

    system("mode con: cols=170 lines=45");                      //Fixing Console Screen area respect to number of lines and columns
    system("title GUESSING CRICKET");                           //Title Bar Text
    ShowConsoleCursor(false);                                   //No caret

    //Seed generation for srand()
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    srand(seed);



//Introductory Screen


cout<<"\033[38;2;255;255;0m";
cout<< R"(
                                      þþþþþþþ    þþþþ    þþþþ   þþþþþþþþ   þþþþþþþþ    þþþþþþþþ  þþþþ   þþþþ     þþþ     þþþþþþþþ
                                   þþþþþþþþþþ    þþþþ    þþþþ   þþþþþþþþ  þþþþ        þþþþ       þþþþ   þþþþþ    þþþ   þþþþþþþþþþ
                                  þþþþ           þþþþ    þþþþ   þþþþ      þþþþþ       þþþþþ      þþþþ   þþþþþþþ  þþþ  þþþþ
                                  þþþþ  þþþþþþ   þþþþ    þþþþ   þþþþþþþþ    þþþþþþþþ    þþþþþþþ  þþþþ   þþþ þþþþþþþþ  þþþþ  þþþþþþ
                                  þþþþþ   þþþþ   þþþþþ  þþþþþ   þþþþ            þþþþ       þþþþ  þþþþ   þþþ   þþþþþþ  þþþþþ   þþþþ
                                    þþþþþþþþþþ     þþþþþþþþ     þþþþþþþþþ þþþþþþþþþ   þþþþþþþþ   þþþþ   þþþ     þþþþ    þþþþþþþþþþ

)"<<"\033[38;2;255;34;34m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                                           )"<<"\033[48;2;255;0;0m"<<R"(ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛÛÛÛÛÛÛ               ÛÛÛ)"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                                 )"<<"\033[48;2;255;0;0m"<<R"(ÛÛÛÛ                )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛÛÛÛÛÛ     )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                              )"<<"\033[48;2;255;0;0m"<<R"(ÛÛÛ                )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛÛÛ        )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛÛÛÛ    )"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                            )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ               )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛÛ       )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛÛÛÛÛ        )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                          )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ              )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛ      )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛÛÛÛ     )"<<"\033[38;2;240;240;240m"<<R"(  ÛÛÛÛÛÛÛÛÛ )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                        )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ             )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛ     )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛÛÛ      )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛÛÛÛ         )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                       )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ            )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛ    )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛÛ     )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛÛÛ                )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                      )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ           )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ     )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛ     )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛÛ                      )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                     )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ          )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ    )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛ     )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ                           )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ          )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ   )"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ                               )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ         )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ    )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ                                 )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ        )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ   )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ     )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                  )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ       )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ   )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ                                   )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ      )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ    )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                     )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ     )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛÛ   )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                      )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ    )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ   )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                        )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                     )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ  )"<<"\033[38;2;240;240;240m"<<R"( ÛÛ    )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ   )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                        )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                      )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ )"<<"\033[38;2;240;240;240m"<<R"( ÛÛ   )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ   )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                        )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                       )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ)"<<"\033[38;2;240;240;240m"<<R"(Û)"<<"\033[38;2;240;240;240m"<<R"(ÛÛ  )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ    )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                       )"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;240;240;240m"<<R"(                                                         )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ   )"<<"\033[38;2;153;0;0m"<<R"(ÛÛ   )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                     )"<<"\033[38;2;255;0;0m"<<R"(ÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;240;240;240m"<<R"(                                                          )"<<"\033[48;2;255;0;0m"<<R"(Û)"<<"\033[38;2;255;0;0m"<<R"(ÛÛ)"<<"\033[38;2;153;0;0m"<<R"(ÛÛÛ   )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                    )"<<"\033[38;2;255;0;0m"<<R"(ÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                           )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ)"<<"\033[38;2;153;0;0m"<<R"(ÛÛ   )"<<"\033[38;2;240;240;240m"<<R"(ÛÛÛ                                   )"<<"\033[38;2;255;0;0m"<<R"(ÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;153;0;0m"<<R"(                                                              )"<<"\033[48;2;255;0;0m"<<R"(Û)"<<"\033[38;2;255;0;0m"<<R"(ÛÛÛ)"<<"\033[38;2;240;240;240m"<<R"(ÛÛ                                     )"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;240;240;240m"<<R"(                                                                 )"<<"\033[48;2;255;0;0m"<<R"(ÛÛ)"<<"\033[38;2;255;0;0m"<<R"(ÛÛ                             ÛÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                                    )"<<"\033[48;2;255;0;0m"<<R"(ÛÛÛÛÛÛÛÛ               ÛÛÛÛÛÛÛÛ)"<<"\033[48;2;0;0;0m"<<R"(
)"<<"\033[38;2;255;0;0m"<<R"(                                                                           )"<<"\033[48;2;255;0;0m"<<R"(ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ)"<<"\033[48;2;0;0;0m\033[38;2;255;255;0m"<<R"(

                                       þþþþþþþ   þþþþþþþþþþþþ    þþþþþ         þþþþþþþ  þþþþþ    þþþþþþ  þþþþþþþþþþ  þþþþþþþþþþþþþ
                                   þþþþþþþþþþþ   þþþþþþþþþþþþþ   þþþþþ     þþþþþþþþþþþ  þþþþþ   þþþþþ    þþþþþþþþþþ  þþþþþþþþþþþþþ
                                  þþþþþ          þþþþþ   þþþþþ   þþþþþ    þþþþþ         þþþþþ  þþþþþ     þþþþþ           þþþþþ
                                 þþþþþ           þþþþþþþþþþþþ    þþþþþ   þþþþþ          þþþþþþþþþþ       þþþþþþþþþþ      þþþþþ
                                 þþþþþþ          þþþþþ þþþþþ     þþþþþ   þþþþþþ         þþþþþ þþþþþþ     þþþþþ           þþþþþ
                                  þþþþþþþþþþþþ   þþþþþ  þþþþþ    þþþþþ    þþþþþþþþþþþþ  þþþþþ   þþþþþ    þþþþþþþþþþ      þþþþþ
                                    þþþþþþþþþþ   þþþþþ   þþþþþ   þþþþþ      þþþþþþþþþþ  þþþþþ    þþþþþþ  þþþþþþþþþþ      þþþþþ  )";

ShowConsoleCursor(false);
Sleep(2500);




    intro_startup();
}


///____________________ Custom Functions _____________________///

void intro_title(){
system("CLS");
system("color a");
ShowConsoleCursor(false);


cout<<R"(                                                                                                                                                                    )"<<"\033[38;2;90;90;90mv3.0\033[38;2;0;255;0m"<<R"(

                                  þþþþþþþþ    þþþþ    þþþþ   þþþþþþþþ     þþþþþþ      þþþþþþ   þþþþ   þþþþþ      þþþþ       þþþþþþþþ
                               þþþþþþþþþþþ    þþþþ    þþþþ   þþþþþþþþ   þþþþþþþþ    þþþþþþþþ   þþþþ   þþþþþþ     þþþþ    þþþþþþþþþþþ
                              þþþþþ           þþþþ    þþþþ   þþþþ      þþþþþ       þþþþþ       þþþþ   þþþþþþþ    þþþþ   þþþþþ
                              þþþþ            þþþþ    þþþþ   þþþþ      þþþþ        þþþþ        þþþþ   þþþþ þþþ   þþþþ   þþþþ
                              þþþþ            þþþþ    þþþþ   þþþþþþþþ   þþþþþ       þþþþþ      þþþþ   þþþþ  þþþ  þþþþ   þþþþ
                              þþþþ   þþþþþþ   þþþþ    þþþþ   þþþþ          þþþþþ       þþþþþ   þþþþ   þþþþ   þþþ þþþþ   þþþþ   þþþþþþ
                              þþþþþ    þþþþ   þþþþ    þþþþ   þþþþ            þþþþ        þþþþ  þþþþ   þþþþ    þþþþþþþ   þþþþþ    þþþþ
                                þþþþþþþþþþþ   þþþþþ  þþþþþ   þþþþþþþþ  þþþþþþþþþþ  þþþþþþþþþþ  þþþþ   þþþþ     þþþþþþ     þþþþþþþþþþþ
                                  þþþþþþþþþ     þþþþþþþþ     þþþþþþþþ  þþþþþþþþ    þþþþþþþþ    þþþþ   þþþþ      þþþþþ       þþþþþþþþþ


                                        þþþþþþþ   þþþþþþþþþþþþ    þþþþþ         þþþþþþþ  þþþþþ    þþþþþþ  þþþþþþþþþþ  þþþþþþþþþþþþþ
                                    þþþþþþþþþþþ   þþþþþþþþþþþþþ   þþþþþ     þþþþþþþþþþþ  þþþþþ   þþþþþ    þþþþþþþþþþ  þþþþþþþþþþþþþ
                                   þþþþþ          þþþþþ   þþþþþ   þþþþþ    þþþþþ         þþþþþ  þþþþþ     þþþþþ           þþþþþ
                                  þþþþþ           þþþþþþþþþþþþ    þþþþþ   þþþþþ          þþþþþþþþþþ       þþþþþþþþþþ      þþþþþ
                                  þþþþþþ          þþþþþ þþþþþ     þþþþþ   þþþþþþ         þþþþþ þþþþþþ     þþþþþ           þþþþþ
                                   þþþþþþþþþþþþ   þþþþþ  þþþþþ    þþþþþ    þþþþþþþþþþþþ  þþþþþ   þþþþþ    þþþþþþþþþþ      þþþþþ
                                     þþþþþþþþþþ   þþþþþ   þþþþþ   þþþþþ      þþþþþþþþþþ  þþþþþ    þþþþþþ  þþþþþþþþþþ      þþþþþ             )"<<"\n\n\n\n";

}
void intro_startup(){
ShowConsoleCursor(false);
intro_title();
cout<<"\t\033[38;2;255;0;0m     Note:   If the window doesn't seem to fit your screen, you can easily adjust it by pressing the CTRL key and scrolling upwards or downwards\n\n";
intro_menu();
}
void intro(){
system("CLS");
ShowConsoleCursor(false);
intro_title();
intro_menu();
}
void intro_menu(){
ShowConsoleCursor(false);
PlaySound(TEXT("Audio/intro.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP | SND_NOSTOP);

cout<<"\t\t\t\t\t\t\t\t\033[38;2;224;7;72m  [Enter the number of each command]\n\n\n";
cout<<"\t\t\t\t\t\t\t\t\t\033[38;2;0;255;255m  (1) Start game\n\t\t\t\t\t\t\t\t\t  (2) How to play\n\t\t\t\t\t\t\t\t\t  (3) About this game\n\t\t\t\t\t\t\t\t\t  (4) Check for update\n\t\t\t\t\t\t\t\t\t  (5) Quit Game\n\n";
intro_input:
char introinput = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
if      (introinput=='1'){game_mode();}
else if (introinput=='2'){howto();}
else if (introinput=='3'){about();}
else if (introinput=='4'){update();}
else if (introinput=='5' || introinput==27){quit();}
else {goto intro_input;}
}
void game_mode(){

ShowConsoleCursor(false);system("CLS");
system("color e");
cout<<"\033[38;2;255;230;0m\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tSelect game mode\n";
cout<<"\n\n\n\t\t\t\t\t\t\t\t\033[38;2;0;255;170m     (1) Single Player Mode\n\n\t\t\t\t\t\t\t\t     (2) Multiplayer Mode\n\n\n";
gamemode_select:
char gamemode_selection = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
if(gamemode_selection == '1'){lvl_selection();}
else if(gamemode_selection == '2'){twoplayer_mode();}
else if(gamemode_selection == 27){intro();}
else{
goto gamemode_select;
}
}
void howto(){
ShowConsoleCursor(false);
system("CLS");
cout<<"\033[38;2;179;237;31m"<<R"(



                                     ÛÛ     ÛÛ  ÛÛÛÛÛÛÛÛ  ÛÛ        ÛÛ      ÛÛÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛ      ÛÛÛÛÛÛÛÛ  ÛÛ         ÛÛÛÛ   ÛÛ    ÛÛ
                                     ÛÛ     ÛÛ  ÛÛ    ÛÛ  ÛÛ        ÛÛ         ÛÛ     ÛÛ    ÛÛ      ÛÛ    ÛÛ  ÛÛ        ÛÛ  ÛÛ   ÛÛ  ÛÛ
                                     ÛÛÛÛÛÛÛÛÛ  ÛÛ    ÛÛ  ÛÛ   ÛÛ   ÛÛ         ÛÛ     ÛÛ    ÛÛ      ÛÛÛÛÛÛÛÛ  ÛÛ       ÛÛ    ÛÛ   ÛÛÛÛ
                                     ÛÛ     ÛÛ  ÛÛ    ÛÛ   ÛÛ ÛÛÛÛ ÛÛ          ÛÛ     ÛÛ    ÛÛ      ÛÛ        ÛÛ       ÛÛÛÛÛÛÛÛ    ÛÛ
                                     ÛÛ     ÛÛ  ÛÛÛÛÛÛÛÛ    ÛÛÛ  ÛÛÛ           ÛÛ     ÛÛÛÛÛÛÛÛ      ÛÛ        ÛÛÛÛÛÛÛÛ ÛÛ    ÛÛ    ÛÛ






)"<<"\033[38;2;252;121;88m"<<R"(



                                                         # Just press the corresponding number of each command.

                                                         # Guess the run and press it on the keyboard.

                                                         # Press only 1, 2, 3, 4 or 6 during batting and bowling.

                                                         # If you press anything else, it will be considered as
                                                           )"<<"\033[38;2;255;0;0m"<<R"(HIT WICKET )"<<"\033[38;2;252;121;88m"<<R"(during batting and )"<<"\033[38;2;255;0;0m"<<R"(NO BALL )"<<"\033[38;2;252;121;88m"<<R"(during bowling.

                                                         # Recommending to play using keyboard's number pad












)"<<"\033[38;2;255;255;0m"<<R"(
Press ENTER to continue....        )";
getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
intro();
}
void about(){
ShowConsoleCursor(false);
label20:
system("CLS");

COORD size = {170, 45};
SetConsoleScreenBufferSize(hConsole, size);
SMALL_RECT window = {0, 0, size.X - 1, size.Y - 1};
SetConsoleWindowInfo(hConsole, TRUE, &window);
cout<<"\033[38;2;255;230;0m";

cout << R"(
                                                                       ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»
                                                                       º Guessing Cricket v3.0 º
                                                                       ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼

         Finger cricket, also known as Hand Cricket, is a classic childhood game that we used to play in classroom with friends. It involves two players using
         hand gestures to represent runs, taking turns to bat and bowl, and the game ends when the second player loses all their wickets or scores more run than
         the other player. The main objective is to score more runs than opponent, just like real cricket.

         Guessing Cricket is a modern twist on the traditional Finger Cricket game that adds an exciting new element to the game-play. In Guessing Cricket, the
         bowler chooses a number between 1 and 6 except 5, and the batsman must guess the run correctly before making their move. If the batsman's guess matches
         with that of the bowler's, the bowler gets a wicket. Otherwise, batsman's guess is added to the total runs.

         Guessing Cricket allows players to choose to play against the computer or another human player, with the added feature of selecting the difficulty level
         when playing against the computer. This feature ensures that the game remains challenging and engaging for all levels of players.

         Unlike Finger Cricket, where players need coordination and quick mental math skills to keep track of runs and wickets, Guessing Cricket takes the game
         to a whole new level of excitement and challenge. The game starts with a toss to determine who will bat or bowl first, and the player who wins the toss
         can choose to bat or bowl first.

         In conclusion, Guessing Cricket is a fun and modern twist on the traditional Finger Cricket game. With its innovative gameplay and features, players can
         enjoy an exciting and challenging experience, whether playing against the computer or another human player. So, gather your friends or family and enjoy
         Guessing Cricket today!

     ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ

         As the developer of this game, I am Ahmed Zubayer, and I assure you that playing this game will be an amazing experience. Though it is based on a simple
         idea, I have been working on it for a long time, ever since I started coding in 2019 as a high school student. I have generated ideas and researched on
         the internet to implement the syntax and techniques. Through this process, I have learned a lot of things, from clearing the console screen to coloring
         texts and even adding animations! My ultimate goal is to transform a simple black and white console screen into a colorful environment for the users but
         using only codes. Whole process accelerated when I started using ChatGPT, an AI chat engine by OpenAI, which helped me to learn things and resolve the
         issues. It proved to me that AI can be a powerful tool to enhance productivity instead of being a job deleter! Imagination is only the limit now! I am
         always open to new ideas. So, join me and get ready for an exciting ride!

            HAPPY GAMING!     :)

            Contact with me:
                              E-mail: thisiszubayer@gmail.com
                              Github: github.com/ThisIsZubayer
                              Website: thisiszubayer.github.io

                                                                   Made with love in )";
//Multicolored Text: BANGLADESH
cout<<"\033[38;2;0;163;120mBAN\033[38;2;255;34;38mGLAD\033[38;2;0;163;120mESH\033[38;2;255;34;38m  \033[48;2;0;163;120m ";
//Flag of Bangladesh
DWORD dwBytesWritten;
WCHAR wcCircle = 0x25CF; // Unicode value of the circle disc character
WriteConsoleW(hConsole, &wcCircle, 1, &dwBytesWritten, NULL);
cout << " \033[48;2;0;0;0m\033[38;2;255;255;0m";
cout<<"\nPress ENTER to continue....";
gnrl_inp = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
if(gnrl_inp == 27){intro();}
system("CLS");
system("color f");
printf( R"(

                          Also available on: https://github.com/ThisIsZubayer/GuessingCricket  [Visit for further updates and releases]




                                                    ÛÛÛÛÛÛÛÛÛÛÛÛÛÛ      ÛÛ    ÛÛÛÛÛÛÛÛ  ÛÛ      ÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                    ÛÛ          ÛÛ  ÛÛ  ÛÛ  ÛÛ  ÛÛÛÛ        ÛÛ  ÛÛ          ÛÛ
                                                    ÛÛ  ÛÛÛÛÛÛ  ÛÛ  ÛÛÛÛ        ÛÛ  ÛÛÛÛÛÛÛÛÛÛ  ÛÛ  ÛÛÛÛÛÛ  ÛÛ
                                                    ÛÛ  ÛÛÛÛÛÛ  ÛÛ  ÛÛÛÛ    ÛÛ  ÛÛ  ÛÛ  ÛÛ      ÛÛ  ÛÛÛÛÛÛ  ÛÛ
                                                    ÛÛ  ÛÛÛÛÛÛ  ÛÛ    ÛÛ  ÛÛÛÛ  ÛÛ              ÛÛ  ÛÛÛÛÛÛ  ÛÛ
                                                    ÛÛ          ÛÛ  ÛÛ              ÛÛÛÛ    ÛÛ  ÛÛ          ÛÛ
                                                    ÛÛÛÛÛÛÛÛÛÛÛÛÛÛ  ÛÛ  ÛÛ  ÛÛ  ÛÛ  ÛÛ  ÛÛ  ÛÛ  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                      ÛÛ  ÛÛÛÛ    ÛÛÛÛ  ÛÛ  ÛÛ
                                                      ÛÛÛÛ      ÛÛ    ÛÛ      ÛÛÛÛÛÛÛÛÛÛÛÛ  ÛÛÛÛ  ÛÛ  ÛÛÛÛÛÛ
                                                            ÛÛÛÛ            ÛÛÛÛÛÛ  ÛÛ    ÛÛ  ÛÛ    ÛÛ  ÛÛÛÛÛÛ
                                                        ÛÛÛÛÛÛÛÛÛÛÛÛ  ÛÛÛÛ          ÛÛ  ÛÛÛÛ  ÛÛ    ÛÛ  ÛÛÛÛÛÛ
                                                      ÛÛÛÛÛÛÛÛ        ÛÛÛÛ  ÛÛÛÛÛÛ        ÛÛÛÛ  ÛÛ  ÛÛ
                                                          ÛÛÛÛ  ÛÛÛÛ    ÛÛÛÛ  ÛÛ  ÛÛ          ÛÛÛÛÛÛ  ÛÛÛÛ  ÛÛ
                                                    ÛÛ  ÛÛ  ÛÛÛÛ  ÛÛÛÛ  ÛÛ      ÛÛ  ÛÛÛÛÛÛÛÛÛÛ  ÛÛÛÛÛÛ
                                                      ÛÛ        ÛÛ              ÛÛ  ÛÛÛÛ  ÛÛÛÛ        ÛÛÛÛÛÛ
                                                      ÛÛ  ÛÛ      ÛÛ  ÛÛÛÛÛÛÛÛ      ÛÛ  ÛÛ        ÛÛÛÛ  ÛÛ  ÛÛ
                                                      ÛÛ  ÛÛÛÛ  ÛÛÛÛÛÛ      ÛÛÛÛÛÛ  ÛÛÛÛÛÛ  ÛÛÛÛÛÛÛÛ  ÛÛÛÛÛÛ
                                                    ÛÛÛÛ  ÛÛÛÛ    ÛÛ    ÛÛ  ÛÛ  ÛÛÛÛÛÛ  ÛÛÛÛÛÛ  ÛÛ      ÛÛ
                                                    ÛÛÛÛÛÛ  ÛÛ  ÛÛÛÛ      ÛÛ  ÛÛÛÛÛÛÛÛ  ÛÛ    ÛÛ  ÛÛÛÛÛÛÛÛÛÛÛÛ
                                                      ÛÛ  ÛÛÛÛÛÛ    ÛÛ        ÛÛÛÛ  ÛÛ    ÛÛÛÛ  ÛÛ    ÛÛ  ÛÛÛÛ
                                                    ÛÛÛÛÛÛ  ÛÛÛÛÛÛ      ÛÛÛÛ    ÛÛÛÛ  ÛÛ  ÛÛÛÛÛÛÛÛÛÛÛÛ  ÛÛ  ÛÛ
                                                                      ÛÛ    ÛÛ  ÛÛÛÛÛÛ    ÛÛÛÛ      ÛÛ    ÛÛÛÛ
                                                    ÛÛÛÛÛÛÛÛÛÛÛÛÛÛ    ÛÛÛÛ    ÛÛÛÛ    ÛÛÛÛÛÛÛÛ  ÛÛ  ÛÛ    ÛÛÛÛ
                                                    ÛÛ          ÛÛ    ÛÛÛÛÛÛÛÛÛÛÛÛ    ÛÛÛÛÛÛÛÛ      ÛÛ  ÛÛ  ÛÛ
                                                    ÛÛ  ÛÛÛÛÛÛ  ÛÛ    ÛÛ        ÛÛÛÛÛÛ      ÛÛÛÛÛÛÛÛÛÛÛÛ  ÛÛ
                                                    ÛÛ  ÛÛÛÛÛÛ  ÛÛ    ÛÛÛÛ  ÛÛÛÛÛÛÛÛÛÛ    ÛÛÛÛÛÛ    ÛÛ  ÛÛÛÛ
                                                    ÛÛ  ÛÛÛÛÛÛ  ÛÛ  ÛÛÛÛ      ÛÛ          ÛÛ    ÛÛ  ÛÛ  ÛÛ  ÛÛ
                                                    ÛÛ          ÛÛ  ÛÛ  ÛÛ  ÛÛ      ÛÛ        ÛÛÛÛÛÛ  ÛÛ  ÛÛÛÛ
                                                    ÛÛÛÛÛÛÛÛÛÛÛÛÛÛ    ÛÛ  ÛÛÛÛÛÛÛÛ  ÛÛ    ÛÛ  ÛÛ    ÛÛ  ÛÛ

                                                             SCAN FOR VISITING THE GITHUB REPOSITORY


)");
       cout<<"\033[38;2;255;255;0m"<<R"(
Press ENTER to continue....
)";



gnrl_inp = getch();
if(gnrl_inp == 27){goto label20;}
intro();
}
void update(){
system("CLS");
system("title GUESSING CRICKET --------------> VERSION: 3.0");
cout<<"\n\n\n\n\n\n\n\n\n\n     Game Version: 3.0                                                                                                          Version Released: November 24, 2023\n\n\n\n\n\t\t\t\t\t\t\t\t       Your game version is: \033[38;2;210;0;0m\033[48;2;250;250;0m 3.0 \033[48;2;0;0;0m\n\n\n\t\t\t\t\t\t\t          \033[38;2;255;255;0mPress ENTER to check latest version...";
cout<<"\033[38;2;250;90;0m"<<R"(


    ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ

         History of previous major releases:

            v1.0.0 ----> First initial release
            v2.0   ----> Added new feature: Game difficulty selection
            v2.1   ----> Added new feature: Two player mode
            v2.1.2 ----> Upgraded the visuals of the entire game
            v2.2   ----> Simple input without requiring to press enter everytime
            v2.3   ----> Easier navigation, Allowed to pause, Multicolor Screen, Added new feature: Update Checker
            v3.0   ----> Added new feature: Musics and sound effects

    ÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ
)";
gnrl_inp = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
if(gnrl_inp == 27){intro();}
system("start https://github.com/ThisIsZubayer/GuessingCricket/releases/latest ");
system("title GUESSING CRICKET");
intro();
}
void quit(){
ShowConsoleCursor(false);
system("CLS");
system("color 0c");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tAre you sure to quit this game?\n\n\n\t\t\t\t\t\t\t\tPress 'y' for Yes or 'n' for No\n\n";
char quit1 = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
if (quit1=='y' || quit1=='Y')
        {   system("CLS");
            system("color 0c");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t    Heartbroken to see you go, please come back soon. Goodbye for now.\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
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
cout<<"\033[38;2;255;230;0m\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t Select difficulty\n";
cout<<"\n\n\n\t\t\t\t\t\t\t     \033[38;2;0;255;0m    (1) Easy [Opponent Level: Noob]\n\n\t\t\t\t\t\t\t         (2) Medium [Opponent Level: Pro]\n\n\t\t\t\t\t\t\t         (3) Hard [Opponent Level: Master]\n\n\n";
lvl_select:
char level_selection = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

if     (level_selection == '1'){game_lvl=1;  toss();}
else if(level_selection == '2'){game_lvl=2;  toss();}
else if(level_selection == '3'){game_lvl=3;  toss();}
else if(level_selection == 27){game_mode();}
else{goto lvl_select;}
}
void toss(){
ShowConsoleCursor(false);
system("CLS");
system("color 0d");
cout<<"\033[38;2;0;120;255m\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t         TOSS\n";
cout<< "\n\n\n\t\t\t\t\t\t\t            Choose between Head and Tail\n";
cout<< "\n\n\n\t\t\t\t\t\t\t           Type H for head and T for tail. \n\n\t\t\t\t\t\t\t                You are choosing...";
toss_inp:
char player_toss = getch();

sndPlaySound(NULL, SND_ASYNC | SND_PURGE);             //STOPS ALL MUSIC

PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

char toss_result;
string toss_result_declare;
player_toss=toupper(player_toss);
if(player_toss == 'H' || player_toss == 'T'){

toss_initial = (rand() %2) ;
if (toss_initial==0)
{ toss_result= 'H';
toss_result_declare = "Head";}
else if (toss_initial==1)
{toss_result = 'T';
toss_result_declare = "Tail";}
flipping_coin();    //Flipping coin animation
if (player_toss==toss_result)
{label2:
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t   "<<toss_result_declare<<" is up! Choose between batting and bowling...\n\n\t\t\t\t\t\t\t       Type '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing.... ";
choose_inp:
char player_choose = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

if      (player_choose == '1'){
batting_1st();}
else if (player_choose == '2'){
bowling_1st();}
else if (player_choose == 27){pause(); goto label2;}
else{goto choose_inp;}
}
else{
label3:
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   Sorry, "<<toss_result_declare<<" is up! Let computer choose between batting and bowling\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

if(gnrl_inp == 27){pause(); goto label3;}
int computer_decision;
string comp_chose;

computer_decision = rand() %2;
if (computer_decision==0){
label4:
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bat first\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....\n";
gnrl_inp = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

if(gnrl_inp == 27){pause(); goto label4;}
bowling_1st();
}
else{
label5:
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t Computer has chosen to bowl first\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....\n";
gnrl_inp = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

if(gnrl_inp == 27){pause(); goto label5;}
batting_1st();
}
}
}
else if(player_toss == 27){lvl_selection();}
else{
goto toss_inp;
}
}
void batting_1st(){
ShowConsoleCursor(false);
/** Player batting **/

//Screen-1
label6:
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp =
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

if(gnrl_inp == 27){pause();goto label6;}


//Screen-2
s1=0;
w1=0;
bc1=0;

do
    {               label7:
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
                    else if (eb1==27){pause(); goto label7;}
                    else {legalbat1=0;}

                    if (game_lvl==1)                //Game Level: Easy
                    {
						ceb1= rand()%10;
						cebi1 = ceb1;

						if(cebi1==ebi1 || legalbat1==0)
						{
							w1 = w1+1;

							if(eb1==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
							out();
						}

						else
						{   s1 = s1+ebi1;

							if(ebi1==4)
								{four();}

							else if (ebi1==6)
								{six();}
							else
							{
							    PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                                cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress ENTER to continue....";}

						}

                    }
                    else if (game_lvl==2)           //Game Level: Medium
                    {
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
						{

						     w1 = w1+1;
							 if(eb1==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
							 out();
						}
						else
						{

							 s1 = s1+ebi1;

							 if       (ebi1==4){four();}
							 else if  (ebi1==6){six();}
							 else     {PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                                        cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress ENTER to continue....";}
						}

                    }
                    else if (game_lvl==3)           //Game Level: Hard
                    {
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
						ceb11 = (rand()+rand())%5;
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
							if(eb1==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
							out();
						}
						else
						{
							s1 = s1+ebi1;

							if(ebi1==4)
								{four();}

							else if (ebi1==6)
								{six();}
							else
							{PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                            cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi1<<" in this ball\n\n\n\nPress ENTER to continue....";}
						}
                    }
						getch();
                        bc1++;
                }while(bc1<30 && w1 < 3);


//Screen-3
t1 = s1 +1;
over1=bc1 / 6;
over1a = bc1 %6;
label8:
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t        You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label8;}


/** Computer Batting **/

//Screen-1
system("CLS");
system("color 0b");
rrr1 = (double) t1/5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\t\t\t\t\t      Computer needs "<<t1<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
getch();


//Screen-2
s2=0;
w2=0;
bc2=0;
do {                label9:
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
                    else if (eb2==27){pause(); goto label9;}
                    else {ebi2 = 0;
                          legalball1=0;}


                    if(cebi2==ebi2)
                    {
                        w2=w2+1;
                        if(ebi2==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
                        out();
                        getch();
                        bc2++;
                    }
                    else if(legalball1 == 0)
                        {bc2=bc2;
                        cout<<"\n\n\n\t\t\t\tNo Ball !";
                        cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<"+1 in this ball\n\n\n\nPress ENTER to continue....";
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
                        {   PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                            cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi2<<" in this ball\n\n\n\nPress ENTER to continue....";}

                        getch();

                        bc2++;
                    }
            }while(bc2<30 && w2<3 && t1>s2);

/** End of the match & result declaration  **/
PlaySound(TEXT("Audio/scorecard.wav"), NULL, SND_FILENAME | SND_ASYNC);
//Screen-1
label10:
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t       Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label10;}


//Screen-2
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"You-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"Computer-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
     if(s1>s2)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t     Congratulations! You won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
         intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
         intro();
        }

}
void bowling_1st(){
ShowConsoleCursor(false);

/** Computer Batting **/

//Screen-1
label15:
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     Computer is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label15;}

//Screen-2
s1=0;
w1=0;
bc1=0;
do{
                    label11:
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
                    else if (eb1==27){pause(); goto label11;}
                    else {  ebi1=0;
                            legalball2=0;}

                    if(cebi1==ebi1)
                    {   w1=w1+1;
                        if(ebi1==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
                        system("color 0c");
                        system("CLS");
						out();
						getch();
                        bc1++;
                    }
                    else if(legalball2==0)
                    {
						 bc1=bc1;
                         cout<<"\n\n\n\t\t\t\tNo Ball !";
                         cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<"+1 in this ball\n\n\n\nPress ENTER to continue....";
                         getch();
                         s1= s1+cebi1+1;
					}
                    else
                    {
                        s1= s1+cebi1;

                        if(cebi1==4)
                            {four();}

                        else if (cebi1==6)
                            {six();}
                        else
                        {PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                            cout<< "\n\n\n\t\t\t\tComputer has scored "<<cebi1<<" in this ball\n\n\n\nPress ENTER to continue....";}

                        getch();

                        bc1++;
                    }

    }while(bc1<30 && w1 < 3);

//Screen-3
t2= s1+1;
over1=bc1 / 6;
over1a = bc1 %6;
label12:
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t      Computer";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause();goto label12;}

/** Player Batting **/

//Screen-1
label13:
system("CLS");
system("color 0b");
rrr1 = (double) t2/5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t       You are now batting";
cout<<"\n\n\t\t\t\t\t\t  You need "<<t2<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label13;}

//Screen-2
s2=0;
w2=0;
bc2=0;

do{
                    label14:
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
                    else if (eb2==27){pause(); goto label14;}
                    else {legalbat2=0;}


                    if      (game_lvl==1)                   //Game Level: Easy
                    {
						ceb2= rand()%10;
						cebi2 = ceb2;

						if(cebi2==ebi2 || legalbat2==0)
						{   w2 = w2+1;
							if(eb2==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
							out();

						}
						else
						{
							s2 = s2+ebi2;

							if(ebi2==4)
								{four();}

							else if (ebi2==6)
								{six();}
							else
							{
								PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                                 cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi2<<" in this ball\n\n\n\nPress ENTER to continue....";
							}

						}
                    }
                    else if (game_lvl==2)                   //Game Level: Medium
                    {
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
							if(eb2==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
							out();
						}
						else
						{
							s2 = s2+ebi2;

							if(ebi2==4)
								{four();}

							else if (ebi2==6)
								{six();}
							else
							{PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                             cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi2<<" in this ball\n\n\n\nPress ENTER to continue....";}


						}
                    }
                    else if (game_lvl==3)                   //Game Level: Hard
                    {
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
							if(eb2==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
							out();
						}
						else
						{
							s2 = s2+ebi2;

							if(ebi2==4)
								{four();}

							else if (ebi2==6)
								{six();}
							else
							{PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
							    cout<< "\n\n\n\t\t\t\tYou have scored "<<ebi2<<" in this ball\n\n\n\nPress ENTER to continue....";}
						}
                    }

                        bc2++;
                        getch();

                    }while(bc2<30 && w2<3 && t2>s2);

//Screen-3
label17:
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;

/** End of the match & result declaration  **/

PlaySound(TEXT("Audio/scorecard.wav"), NULL, SND_FILENAME | SND_ASYNC);

//Screen-1
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t         You";
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<t2;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause();goto label17;}

//Screen-2
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     You vs Computer";
cout<<"\n\n\n\t\t\t\t\t\t1st Innings:\n\n"<<setw(73)<<"Computer-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t2nd Innings:\n\n"<<setw(73)<<"You-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
                    if(s2>s1)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t    Congratulations! You won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
         intro();
     }else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t         Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
             intro();
        }
     else
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t       Sorry! Computer won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
             intro();
        }
}
void twoplayer_mode(){
label30:
system("CLS");
system("color 0d");
ShowConsoleCursor(true);
//Two Player Mode: Name Input

string name_1="\033[38;2;0;143;252m", name_2="\033[38;2;252;111;3m", toss_winner, toss_loser, batting_1st, bowling_1st;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter name of Player 1: \033[38;2;0;143;252m";
while (true) {
        char c = getch();
        if (c == 27) {
            game_mode();
        } else if (c == '\r') {
            break;
        }
        else if (c == '\b') {
            cout<<"\b \b";
            name_1 += "\b";
        }else {
            name_1 += c;
            cout << c;
        }
    }
name_1 += "\033[38;2;255;0;255m";
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
cout<<"\033[38;2;255;0;255m\n\n\t\t\t\t\t\t\t\tEnter name of Player 2: \033[38;2;252;111;3m";
while (true) {
        char c = getch();
        if (c == 27) {
            game_mode();
        }
        else if (c == '\r') {
            break;
        }
        else if (c == '\b') {
            cout<<"\b \b";
            name_2 += "\b";
        }
        else {
            name_2 += c;
            cout << c;
        }
    }
name_2 += "\033[38;2;255;0;255m";
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
//Two Player Mode: Toss
label31:
system("CLS");
system("color 0d");
ShowConsoleCursor(false);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<setw(100)<<"Computer will decide who is going to call";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
if(gnrl_inp == 27){pause(); goto label30;}
loading_screen();
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
int two_player_toss_caller_decider;
char toss_result, player_1_choose, player_2_choose;
string toss_result_declare;


two_player_toss_caller_decider = (rand() %2);

if (two_player_toss_caller_decider == 0){

    cout<<"\t\t\t\t\t\t\t\t\t"<<name_1<<", you will call!";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
    gnrl_inp = getch();
    PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
    if(gnrl_inp == 27){pause(); goto label31;}
    system("CLS");
    system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t         TOSS\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t          "<<name_1<<", choose between Head and Tail\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t             Type H for head and T for tail \n\t\t\t\t\t\t\t\t           You are choosing...";
label32:
player_1_choose = getch();
PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
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
    else if (player_1_choose==27){pause(); goto label32;}

    else { toss_winner=name_2;
            toss_loser=name_1;}

}else{


    cout<<"\t\t\t\t\t\t\t\t\t"<<name_2<<", you will call!";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";

    getch();
    PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

    system("CLS");
    system("color 0d");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t         TOSS\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t         "<<name_2<<", choose between Head and Tail\n";
    cout<< "\n\n\n\t\t\t\t\t\t\t             Type H for head and T for tail \n\n\n\t\t\t\t\t\t\t\t           You are choosing...";
    label33:
    player_2_choose = getch();
    PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
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
    else if(player_2_choose==27){pause(); goto label33;}

    else { toss_winner=name_1;
            toss_loser=name_2; }

}
//Toss winner choosing between batting and bowling first
flipping_coin();
label34:
system("cls");
system("color 0d");
            cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t               "<< toss_result_declare<<" is up!\n\n\n\n\t\t\t\t\t\t\t\t"<<toss_winner<<", choose between batting and bowling...\n\n\t\t\t\t\t\t\t\tType '1' for batting and '2' for bowling\n\n\t\t\t\t\t\t\t\t\tYou are choosing.... ";
            char toss_winner_choose_to = getch();
            PlaySound(TEXT("Audio/click.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
            if (toss_winner_choose_to == '1'){
            batting_1st = toss_winner;
            bowling_1st = toss_loser;
            }
            else if(toss_winner_choose_to==27){pause(); goto label34;}
            else
            {
            bowling_1st = toss_winner;
            batting_1st = toss_loser;
            }


batting_1st.erase(batting_1st.find("\033[38;2;255;0;255m"), 18);
bowling_1st.erase(bowling_1st.find("\033[38;2;255;0;255m"), 18);
batting_1st += "\033[38;2;0;255;255m";
bowling_1st += "\033[38;2;0;255;255m";

//1st Innings
label35:
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   1st Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     "<<batting_1st<<" is now batting";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
    if(gnrl_inp == 27){pause(); goto label35;}
int s1, w1, bc1, ebi1, cebi1,over1,over1a,legalbat1,legalball1;
char eb1, ceb1;
double crr1;
s1=0;
w1=0;
bc1=0;

do
    {               label36:
                    legalbat1=1;
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
                    gnrl_inp = getch();
                    if(gnrl_inp == 27){pause(); goto label36;}
                    else{ceb1 = gnrl_inp;}


                    label37:
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
                    gnrl_inp = getch();
                    if(gnrl_inp == 27){pause(); goto label37;}
                    else{eb1 = gnrl_inp;}


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
                        if(ebi1==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}

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
                        PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored "<<ebi1<<" in this ball\n\n\n\n\n\n\nPress ENTER to continue....";
                        }

                        getch();
                    }
                    else if (legalball1 == 0 && legalbat1 != 0)
                    {
                        s1 = s1+ebi1+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored "<<ebi1<<"+1 in this ball\n\n\n\n\n\n\nPress ENTER to continue....";
                        getch();;
                    }
                    else if (legalball1 == 0 && legalbat1 == 0)
                    {
                        s1 = s1+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<batting_1st<<" has scored 0+1 in this ball\n\n\n\n\n\n\nPress ENTER to continue....";
                        getch();
                    }


                }   while(bc1<30 && w1 < 3);


                int target = s1 + 1;

over1=bc1 / 6;
over1a = bc1 %6;
label40:
system("CLS");
system("color 0b");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 1st Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t     "<<batting_1st;
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s1<<"\t\tWicket: "<<w1;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over1<<"."<<over1a;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label40;}

//2nd innings
label41:
system("CLS");
system("color 0b");
double rrr1 = (double)target / 5;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t   2nd Innings";
cout<<"\n\n\n\t\t\t\t\t\t\t\t     "<<bowling_1st<<" is now batting";
cout<<"\n\n\t\t\t\t\t\t  "<<bowling_1st<<" need "<<target<<" run(s) from 30 balls to win at a run rate of "<<fixed<<setprecision(2)<<rrr1;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label41;}

int s2, w2, bc2, ebi2, cebi2,over2,over2a,legalbat2,legalball2;
char eb2, ceb2;
double crr2, rrr;
s2=0;
w2=0;
bc2=0;

do
    {               label42:
                    legalbat2=1;
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
                    gnrl_inp = getch();
                    if(gnrl_inp == 27){pause(); goto label42;}
                    else{ceb2 = gnrl_inp;}

                    label43:
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
                    gnrl_inp = getch();
                    if(gnrl_inp == 27){pause(); goto label43;}
                    else{eb2 = gnrl_inp;}


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
                       if(ebi2==6){PlaySound(TEXT("Audio/caught.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}else{PlaySound(TEXT("Audio/bowled.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);}
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
                        PlaySound(TEXT("Audio/bat.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);
                        cout<< "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<" in this ball\n\n\n\n\n\n\nPress ENTER to continue....";
                        }

                        getch();
                    }
                    else if (legalball2 == 0 && legalbat2 != 0)
                    {
                        s2 = s2+ebi2+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored "<<ebi2<<"+1 in this ball\n\n\n\n\n\n\nPress ENTER to continue....";
                        getch();
                    }
                    else if (legalball2 == 0 && legalbat2 == 0)
                    {
                        s2 = s2+1;
                        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     No Ball!";
                        cout<< "\n\n\n\t\t\t\t\t\t\t\t"<<bowling_1st<<" has scored 0+1 in this ball\n\n\n\n\n\n\nPress ENTER to continue....";
                        getch();
                    }


                }   while(bc2<30 && w2 < 3 && target > s2);

PlaySound(TEXT("Audio/scorecard.wav"), NULL, SND_FILENAME | SND_ASYNC);
label44:
system("CLS");
system("color 0b");
over2=bc2 / 6;
over2a = bc2 %6;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t       End of the 2nd Innings";
cout<<"\n\n\n\n\n\t\t\t\t\t\t      Scoreboard :\t        "<<bowling_1st;
cout<<"\n\n\n\t\t\t\t\t\t\t\t   Total: "<<s2<<"\t\tWicket: "<<w2;
cout<<"\n\n\t\t\t\t\t\t\t\t   Over: "<<over2<<"."<<over2a<<"\t\tTarget: "<<target;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
gnrl_inp = getch();
if(gnrl_inp == 27){pause(); goto label44;}
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t "<<batting_1st<<" vs "<<bowling_1st;
cout<<"\n\n\n\t\t\t\t\t\t\t\t\t    1st Innings:\n\n\t\t\t    "<<setw(76)<<batting_1st<<"-"<<s1<<"/"<<w1<<"                Over-"<<over1<<"."<<over1a;
cout<<"\n\n\n\t\t\t\t\t\t\t\t\t    2nd Innings:\n\n\t\t\t    "<<setw(76)<<bowling_1st<<"-"<<s2<<"/"<<w2<<"                Over-"<<over2<<"."<<over2a;
if(s1>s2)
     {
         cout<<"\n\n\n\n\n\n\n\t\t\t"<<setw(82)<<batting_1st<<" won the game by "<<s1-s2<<" run(s)!\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
         intro();
     }
     else if ( s1 == s2)
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t           Match Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
             intro();
        }
     else if (s1<s2)
        {
         cout<<"\n\n\n\n\n\n\n\t\t\t"<<setw(82)<<bowling_1st<<" won the game by "<<3-w2<<" wicket(s)!\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";
         getch();
             intro();
        }


            }
void out(){

system("color 0c");
system("CLS");
ShowConsoleCursor(false);
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\033[38;2;255;0;0m";
cout<<R"(
                                                        ÛÛÛÛÛÛÛ         ÛÛÛÛ         ÛÛÛÛ   ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ     ÛÛÛÛ
                                                     ÛÛÛÛÛÛÛÛÛÛÛÛÛ      ÛÛÛÛ         ÛÛÛÛ   ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ     ÛÛÛÛ
                                                    ÛÛÛÛ       ÛÛÛÛ     ÛÛÛÛ         ÛÛÛÛ         ÛÛÛÛ           ÛÛÛÛ
                                                   ÛÛÛÛ         ÛÛÛÛ    ÛÛÛÛ         ÛÛÛÛ         ÛÛÛÛ           ÛÛÛÛ
                                                   ÛÛÛÛ         ÛÛÛÛ    ÛÛÛÛ         ÛÛÛÛ         ÛÛÛÛ           ÛÛÛÛ
                                                   ÛÛÛÛ         ÛÛÛÛ    ÛÛÛÛ         ÛÛÛÛ         ÛÛÛÛ           ÛÛÛÛ
                                                   ÛÛÛÛ         ÛÛÛÛ    ÛÛÛÛ         ÛÛÛÛ         ÛÛÛÛ           ÛÛÛÛ
                                                    ÛÛÛÛ       ÛÛÛÛ     ÛÛÛÛÛ       ÛÛÛÛÛ         ÛÛÛÛ
                                                     ÛÛÛÛÛÛÛÛÛÛÛÛÛ       ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ          ÛÛÛÛ           ÛÛÛÛ
                                                        ÛÛÛÛÛÛÛ            ÛÛÛÛÛÛÛÛÛÛÛ            ÛÛÛÛ           ÛÛÛÛ		)";
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";

}
void four(){

system("CLS");
system("color 0a");
ShowConsoleCursor(false);
PlaySound(TEXT("Audio/four.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_NOSTOP);

cout<<"\033[38;2;255;0;200m\n\n\n\n\n\n\n\n\n\n";
cout<<R"(
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ
                                                                                         ÛÛÛÛÛÛ              )";
Sleep(4000);
cout<<"\n\n\n\n\n\n\n\n\n\nPress ENTER to continue....";

}
void six(){

PlaySound(TEXT("Audio/six.wav"), NULL, SND_FILENAME | SND_ASYNC);
system("CLS");
system("color 0e");
ShowConsoleCursor(false);
cout<<"\n\n\n\n\n\n\n\n\n\n\033[38;2;252;111;3m";
cout<<R"(
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛ                 ÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ
                                                                  ÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛÛ              )";
Sleep(4000);
cout<<"\n\n\n\n\n\n\n\n\n\n\033[38;2;255;0;255mPress ENTER to continue....";

}
void loading_screen(){
ShowConsoleCursor(false);
system("CLS");
for(int loop = 0; loop < 2; loop++)
            {
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t              __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t             /           \n";
cout<<"\t\t\t\t\t\t\t\t            /             \n";
cout<<"\t\t\t\t\t\t\t\t           /               \n";
cout<<"\t\t\t\t\t\t\t\t           \\            / \n";
cout<<"\t\t\t\t\t\t\t\t            \\          / \n";
cout<<"\t\t\t\t\t\t\t\t             \\__ __ __/ \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t              __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t             /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t            /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t           /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t           \\              \n";
cout<<"\t\t\t\t\t\t\t\t            \\            \n";
cout<<"\t\t\t\t\t\t\t\t             \\__ __ __  \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t              __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t             /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t            /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t           /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t           \\            / \n";
cout<<"\t\t\t\t\t\t\t\t            \\          / \n";
cout<<"\t\t\t\t\t\t\t\t             \\        / \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t              __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t             /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t            /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t           /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t                        / \n";
cout<<"\t\t\t\t\t\t\t\t                       / \n";
cout<<"\t\t\t\t\t\t\t\t              __ __ __/ \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t              __ __ __ \n";
cout<<"\t\t\t\t\t\t\t\t                      \\ \n";
cout<<"\t\t\t\t\t\t\t\t                       \\ \n";
cout<<"\t\t\t\t\t\t\t\t                        \\ \n";
cout<<"\t\t\t\t\t\t\t\t           \\            / \n";
cout<<"\t\t\t\t\t\t\t\t            \\          / \n";
cout<<"\t\t\t\t\t\t\t\t             \\__ __ __/ \n";
Sleep(90);
system("CLS");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
cout<<"\t\t\t\t\t\t\t\t                        \n";
cout<<"\t\t\t\t\t\t\t\t             /        \\ \n";
cout<<"\t\t\t\t\t\t\t\t            /          \\ \n";
cout<<"\t\t\t\t\t\t\t\t           /            \\ \n";
cout<<"\t\t\t\t\t\t\t\t           \\            / \n";
cout<<"\t\t\t\t\t\t\t\t            \\          / \n";
cout<<"\t\t\t\t\t\t\t\t             \\__ __ __/ \n";
Sleep(90);
system("CLS");

             }

}
void flipping_coin(){
ShowConsoleCursor(false);
PlaySound(TEXT("Audio/coin.wav"), NULL, SND_FILENAME | SND_ASYNC);

cout<<"\033[38;2;150;125;10m";
for (int i=0;i<3;i++)
                                                                     {
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"( ÛÛÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"( ÛÛÛÛÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(    ÛÛ    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(    ÛÛ    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                             )"<<"\033[48;2;255;255;0m"<<R"(        )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛÛÛÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                           )"<<"\033[48;2;255;255;0m"<<R"(     ÛÛ     )"<<"\033[48;2;0;0;0m"<<R"(
                                                                           )"<<"\033[48;2;255;255;0m"<<R"(     ÛÛ     )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(    ÛÛ    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(        )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     if(i==2 && toss_initial==1){
                                                                     Sleep(1500);
                                                                     return;
                                                                     }
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"( ÛÛÛÛÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(    ÛÛ    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(    ÛÛ    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"( ÛÛÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"( Û  Û )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(  ÛÜÜÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(  ÛßßÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"( Û  Û )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"( ÛÛ  ÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛÜÜÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛßßÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"( ÛÛ  ÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                             )"<<"\033[48;2;255;255;0m"<<R"(        )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛ  ÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                           )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛÜÜÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                           )"<<"\033[48;2;255;255;0m"<<R"(   ÛÛßßÛÛ   )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛ  ÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(        )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     if(i==2 && toss_initial==0){
                                                                     Sleep(1500);
                                                                     return;
                                                                     }
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"( ÛÛ  ÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛÜÜÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                            )"<<"\033[48;2;255;255;0m"<<R"(  ÛÛßßÛÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"( ÛÛ  ÛÛ )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"( Û  Û )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(  ÛÜÜÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                             )"<<"\033[48;2;255;255;0m"<<R"(  ÛßßÛ  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"( Û  Û )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     system("CLS");
                                                                     cout<<"\033[38;2;150;125;10m"<<R"(


















                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                              )"<<"\033[48;2;255;255;0m"<<R"(      )"<<"\033[48;2;0;0;0m"<<R"(
                                                                               )"<<"\033[48;2;255;255;0m"<<R"(    )"<<"\033[48;2;0;0;0m"<<R"(
                                                                                )"<<"\033[48;2;255;255;0m"<<R"(  )"<<"\033[48;2;0;0;0m"<<R"(
                                                                     )";
                                                                     Sleep(30);
                                                                     }



}
void pause(){
ShowConsoleCursor(false);
pause_label1:
system("CLS");
system("color 0c");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     Game Paused\n\n\n\t\t\t\t\t\t\tPress ESC to continue or SPACE to return to Main Menu";
pause_label:
char pause_inp = getch();
if (pause_inp == 27){return;}
else if(pause_inp == 32){
system("cls");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t        Are you sure to end this match and return to Main Menu?\n\n\t\t\t\t\t\t\t\t       Your progress will be lost\n\n\n\t\t\t\t\t\t\t Press ENTER to return to Main Menu or ESC to go back";
        pause_label0:
        char pause_return = getch();
        if (pause_return == 13){intro();}
        else if (pause_return == 27){goto pause_label1;}
        else {goto pause_label0;}
}
else{
goto pause_label;
}
}
void ShowConsoleCursor(bool showFlag){                           //ChatGPT generated
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO     cursorInfo;

    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
