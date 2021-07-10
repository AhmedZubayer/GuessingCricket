/*
***Don't run this code here as it is a interactive program. Use other C++ IDE ***
**Just copy the whole code and paste in the IDE that you use for practice and run it.**

Cricket game....v1.0.3

[Last update: July 10, 2021, FIXED ALL THE BUGS]

This game is mainly based on random numbers! That's why computer's strategy was too poor.(But not now!)

Challenge yourself and try to beat your previous records!

Have fun playing!

Best wishes to from Zubayer from BANGLADESH!

*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<ctime>
using namespace std;
//Function Declarations
int quit();
int intro();
int toss();
int howto();
int about();
int batting_1st();
int bowling_1st();
//Main Function
int main(){
    intro();
}
//Custom Function
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
cout<<"\t\t\t\t\t\t\t\t\tAbout this game\n\nThis game is made by Ahmed Zubayer. This is made just for fun. Have fun playing with your luck. This game is at beginning stage. We are upgrading it.\nFeel free to share your idea with us. Hope you will enjoy it. \n\n\nContact me: E-mail: zubayerforyou@gmail.com\n\n\n\n***Made with LOVE in Bangladesh***"<<endl<<endl;
cout<<"\n\n\nPress any key to continue ....";
getch();
intro();
}
int toss(){
system("CLS");
system("color 0d");
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t....TOSS....\n";
cout<< "\n\n\n\t\t\t\t\t\t\tChoose between Head and Tail."<<endl;
cout<< "\n\n\n\t\t\t\t\t\t\tType H/h for head and T/t for tail. \n\t\t\t\t\t\t\tYou are choosing: ";
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
batting_1st();
case 2:
bowling_1st();
default :
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss();
}
}
else{
cout<<endl<<endl<<endl<<endl<<"Sorry, " <<toss_result_declare <<" is the call! Let computer choose between batting and bowling.\nPress any key to continue...."<<endl;
getch();
int qwerty;
string comp_chose;
srand(time(0));
qwerty = rand() %2;
if (qwerty==0){
cout<<endl<<endl<<"Computer has chosen to bat first.\nPress any key to continue...."<<endl;
getch();
bowling_1st();
}
else{
cout<<endl<<endl<<"Computer has chosen to bowl first.\nPress any key to continue...."<<endl;
getch();
batting_1st();
}
}
}else{
cout<<endl<<endl<<endl<<endl<<"You have pressed the wrong key.\nPress any key to toss again...."<<endl;
getch();
toss();
}
}
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
toss();
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
int batting_1st(){
//player bat
int s1, w1, bc1, eb1, ebi1, ceb1,cebi1,over1,over1a,t1;
s1=0;
w1=0;
bc1=0;

do
    {

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
                                ebi1=0;
                                w1=w1+1;
                                cout<<"OUT !";
                                 break;
                            }
                    srand(time(0));
                    ceb1= rand()%3;
                    srand(time(0));
                    int ceb11 = rand()%2;
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

                            }
                   switch(ceb11)
                            {
                                    case 0:
                                        cebi11=4;
                                         break;
                                     case 1:
                                        cebi11=6;
                                         break;

                            }


                    if(cebi1==ebi1 || cebi11 ==ebi1)
                    {   w1 = w1+1;
                        cout<<"OUT !";
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
                                ebi2=5;
                                break;

                            }

                    if(cebi2==ebi2)
                    {   w2=w2+1;
                        cout<<"OUT !";
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
            }while(bc2<=30 && w2<3 && s1>=s2);


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
int bowling_1st(){
   //comp bat
   int s3, w3, bc3, eb3, ebi3, ceb3,cebi3,over3,over3a;
s3=0;
w3=0;
bc3=0;
do{

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
                                ebi3=5;
                                break;
                            }

                    if(cebi3==ebi3)
                    {   w3=w3+1;
                        cout<<"OUT !";
                        cout<< "\n\n\nPress any key to continue....";
                        getch();
                        bc3++;
                    }
                    else if(ebi3==5)
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

    //you bat
   int s4, w4, bc4, eb4, ebi4, ceb4,cebi4,over4,over4a,t2;
s4=0;
w4=0;
bc4=0;
t2= s3+1;
do{

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
                                ebi4=0;
                                w4=w4+1;
                                cout<<"OUT !";
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


                    if(cebi4==ebi4 || cebi44==ebi4)
                    {   w4 = w4+1;
                        cout<<"OUT !";
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
    }while(bc4<=30 && w4<3 && s3>=s4);


                    if(s4>s3)
     {  system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tCongratulations, You won the game!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
         getch();
         intro();
     }else if ( s3 == s4)
        {    system("CLS");
         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tMatch Tied!\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nPress any key to continue....";
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



