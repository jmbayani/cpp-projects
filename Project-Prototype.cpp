#include <iostream> //this library is needed for input and output statements
#include <iomanip> //this library is needed for setw
#include <stdio.h>
#include <fstream>
#include <conio.h> ////this library is needed for kbhit()
#include <windows.h> //this library is needed for color foregrounds and backgrounds
#include <unistd.h> 
#include <stdlib.h> //this library is needed for system()
#include <ctime>
#include <algorithm> // this is used for sorting 
using namespace std;
int num1 = 0, num2 = 0, prod, ans;
int easy = 0;
int normal = 0;
int hard = 0;

void loadScreen(){
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	system("Color 30");
	
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<setw(65)<<"Loading...";
	cout<<"	\n\n             ";
	
	for(int a=0;a<=100;a++){
		SetConsoleTextAttribute(hConsole, 11);
		Sleep(100);
		cout<< char(219);
		 
	}
	system("cls");
}
int mainTitle(int Start){
	system("Color 30");
	
	cout<<"\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";	
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(55)<<" W W W  EEEEE  LL       CCC   OOO   M   M  EEEEE       TTTTT   OOO "<<endl;
	cout<<setw(55)<<" W W W  EE     LL      C     O   O  MM MM  EE            T    O   O"<<endl;
	cout<<setw(55)<<" W W W  EEEEE  LL     C      O   O  M M M  EEEEE         T    O   O"<<endl;
	cout<<setw(55)<<" W W W  EE     LL      C     O   O  M   M  EE            T    O   O"<<endl;
	cout<<setw(55)<<"  WWW   EEEEE  LLLLL    CCC   OOO   M   M  EEEEE         T     OOO "<<endl;
	cout<<"\n";
	cout<<"\n M   M  EEEEE  M   M   OOO   RRRR   IIIII  ZZZZZ    A    TTTTT  IIIII   OOO   N   N          GGG     A    M   M  EEEEE";
	cout<<"\n MM MM  EE     MM MM  O   O  R   R    I       Z    A A     T      I    O   O  NN  N         G       A A   MM MM  EE   ";
	cout<<"\n M M M  EEEEE  M M M  O   O  RRRRR    I      Z    AAAAA    T      I    O   O  N N N         G GGG  AAAAA  M M M  EEEEE";
	cout<<"\n M   M  EE     M   M  O   O  R  R     I     Z     A   A    T      I    O   O  N  NN         G   G  A   A  M   M  EE   ";
	cout<<"\n M   M  EEEEE  M   M   OOO   R   R  IIIII  ZZZZZ  A   A    T    IIIII   OOO   N   N          GGGG  A   A  M   M  EEEEE";
	cout<<"\n";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n\n";
	cout<<setw(62)<<"[1] START GAME"<<endl;
	cout<<setw(63)<<"[2] HIGH SCORES"<<endl;
	cout<<setw(59)<<"[3] TO EXIT"<<endl;
	cout<<setw(50)<<" "; cin>>Start;
	system("cls");
	return Start;
}
int highScores(int Scores){
	system("Color 70");
	char listE[100], listN[100], listH[100];
	int ChooseHighScore;
	
	ifstream listEasy("hScore.txt");
	ifstream listNorm("hScoreMid.txt");
	ifstream listHard("hScoreHrd.txt");
	
	listEasy.getline(listE,100);
	listNorm.getline(listN,100);
	listHard.getline(listH,100);
	
		
	int e = sizeof(listE) / sizeof(listE[0]);
	int n = sizeof(listN) / sizeof(listN[0]);
	int h = sizeof(listH) / sizeof(listH[0]);
	
	cout<<"\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";	
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(59)<<"HIGH SCORES"<<endl;
	cout<<setw(59)<<"\n";
	cout<<setw(59)<<"\n[1] MULTIPLICATION TABLE";
	cout<<setw(59)<<"\n[X] MORSE CODE";
	cout<<setw(59)<<"\n[X] PERIODIC TABLE OF ELEMENTS\n";
	cout<<setw(50)<<" "; cin>>ChooseHighScore;
	
	system("cls");
	
	switch(ChooseHighScore)
	{
	case 1:
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"MULTIPLICATION TABLE - EASY"<<endl;

    cout<<setw(75)<<listE<<endl;

	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"MULTIPLICATION TABLE - NORMAL"<<endl;
	
    cout<<setw(75)<<listN<<endl;
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";;
	cout<<setw(65)<<"MULTIPLICATION TABLE - HARD"<<endl;
	
    cout<<setw(75)<<listH<<endl;
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"PRESS 0 TO GO MAIN MENU"<<endl;
	cout<<setw(50)<<" "; cin>>Scores;
	}
	system("cls");


	return Scores;
}
int mainMenu(int Category){
	
	cout<<"\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~";
	cout<<setw(65)<<"\n";
	cout<<setw(65)<<"CHOOSE A CATEGORY TO MEMORIZE"<<endl;
	cout<<setw(65)<<"\n";
	cout<<setw(66)<<"CATEGORY                        CODE"<<endl;
	cout<<setw(65)<<"\n";
	cout<<setw(65)<<"MULTIPLICATION TABLE            [1]"<<endl;
	cout<<setw(65)<<"MORSE CODE                      [2]"<<endl;
	cout<<setw(65)<<"PERIODIC TABLE OF ELEMENTS      [X]"<<endl;
	cout<<setw(65)<<"\n";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"PRESS 0 TO GO MAIN MENU\t";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"\n";
	cout<<setw(62)<<"ENTER CATEGORY CODE: ";
	cin>>Category;
	system("cls");
	return Category;
}
int multiTable(int Table1){
	system("Color B0");
	
	int choice = 0, difficulty;
	
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"MULTIPLICATION TABLE"<<endl;
	cout<<"\nA multiplication chart is a table that shows the products of two numbers. ";
	cout<<"Usually, one set of numbers is written on the left column and another set is written as the top row. ";
	cout<<"The products are listed as a rectangular array of numbers.";
	
 	cout<<setw(65)<<"\n";
 	cout<<setw(80)<<"\t =================================================\n";
	cout<<setw(80)<<"\t| 1|  2|  3|  4|  5|  6|  7|  8|  9|  10|  11|  12| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 2|  4|  6|  8| 10| 12| 14| 16| 18|  20|  22|  24| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 3|  6|  9| 12| 15|18 | 21| 24| 27|  30|  33|  36| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 4|  8| 12| 16| 20| 24| 28| 32| 36|  40|  44|  48| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 5| 10| 15| 20| 25| 30| 35| 40| 45|  50|  55|  60| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 6| 12| 18| 24| 30| 36| 42| 48| 54|  60|  66|  72| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 7| 14| 21| 28| 35| 42| 49| 56| 63|  70|  77|  84| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 8| 16| 24| 32| 40| 48| 56| 64| 72|  80|  88|  96| \n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t| 9| 18| 27| 36| 45| 54| 63| 72| 81|  90|  99| 106|\n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t|10| 20| 30| 40| 50| 60| 70| 80| 90| 100| 110| 120|\n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t|11| 22| 33| 44| 55| 66| 77| 88| 99| 110| 121| 132|\n";
	cout<<setw(80)<<"\t|--+---+---+---+---+---+---+---+---+----+----+----|\n";
	cout<<setw(80)<<"\t|12| 24| 36| 48| 60| 72| 84| 96|108| 120| 132| 144|\n";
	cout<<setw(80)<<"\t =================================================";
	cout<<setw(80)<<"\n";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"PRESS 1 TO TAKE MEMORIZATION QUIZ"<<endl;
	cout<<setw(50)<<" "; cin>>choice;
	system("cls");
	
	cout<<"\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"CHOOSE YOUR DIFFICULTY"<<endl;
	cout<<setw(65)<<"\n";
	cout<<setw(58)<<"[1] EASY"<<endl;
	cout<<setw(60)<<"[2] NORMAL"<<endl;
	cout<<setw(58)<<"[3] HARD"<<endl;
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(50)<<" "; cin>>difficulty;
	system("cls");
	
		switch(difficulty){
			case 1:
	    		srand(time(0));
	 			
			    for(int i=1; i<=10; i++){
		        int num1 = (rand() % 10)+1;
		 		int num2 = (rand() % 10)+1;
		        
				cout<<"\n\n\n\n\n\n";
	
				cout<<setw(60)<<"/|_______/|\n";
   				cout<<setw(60)<<"|  o   o  |\n";
 				cout<<setw(60)<<"| == ^ == |\n";
				cout<<setw(49)<<"|"<<i<<". "<<num1 <<"x"<<num2 <<"= ";
		        cin>>ans;
		        
		        prod = num1 * num2;
	        

		        if(prod==ans){
		        	cout<<setw(55)<<"(^-^)"<<endl;
		        	cout<<setw(65)<<"Correct! 10 pts added"<<endl;
		        	easy+=10;
				}
				else{
					cout<<setw(55)<<"(-_-#)"<<endl;
					cout<<setw(65)<<"Wrong! 5 pts deducted"<<endl;
					easy-=5;
				}
				Sleep(1000);
				system("cls");
				}
				
 			break;
 			case 2:
 				srand(time(0));
	 			
			    for(int i=1; i<=20; i++){
		        int num1 = (rand() % 15)+1;
		 		int num2 = (rand() % 15)+1;
		        
				cout<<"\n\n\n\n\n\n";
				
				cout<<setw(60)<<"/|_______/|\n";
   				cout<<setw(60)<<"|  o   o  |\n";
 				cout<<setw(60)<<"| == ^ == |\n";
				cout<<setw(49)<<"|"<<i<<". "<<num1 <<"x"<<num2 <<"= ";
		        cin>>ans;
		        
		        prod = num1 * num2;
	        

		        if(prod==ans){
		        	
		        	cout<<setw(55)<<"(^-^)"<<endl;
		        	cout<<setw(65)<<"Correct! 25 pts added"<<endl;
		        	normal+=25;
				}
				else{
					cout<<setw(55)<<"(-_-#)"<<endl;
					cout<<setw(65)<<"Wrong! 10 pts deducted"<<endl;
					normal-=10;
				}
				Sleep(1000);
				system("cls");
				}
 			break;
 			case 3:
 				srand(time(0));
	 			
			    for(int i=1; i<=30; i++){
		        int num1 = (rand() % 20)+1;
		 		int num2 = (rand() % 20)+1;
	 		
				cout<<"\n\n\n\n\n\n";	
				
				cout<<setw(60)<<"/|_______/|\n";
   				cout<<setw(60)<<"|  o   o  |\n";
 				cout<<setw(60)<<"| == ^ == |\n";	
				cout<<setw(49)<<"|"<<i<<". "<<num1 <<"x"<<num2 <<"= ";
		        cin>>ans;
		        
		        prod = num1 * num2;
	        

		        if(prod==ans){
		        	cout<<setw(55)<<"(^-^)"<<endl;
		        	cout<<setw(65)<<"Correct! 50 pts added"<<endl;
		        	hard+=50;
				}
				else{
					cout<<setw(55)<<"(-_-#)"<<endl;
					cout<<setw(65)<<"Wrong! 15 pts deducted"<<endl;
					hard-=15;
				}
				Sleep(1000);
				system("cls");
				}
 			break;
		}
	return Table1;
}
int morseCode(int Morse_Code){
	
	int choice = 0, difficulty;
	int r1, r2, r3; int chk; string ans, ans2 ,ans3;
	
	string printcode [26]{".-","-..","-.-.","-..",".","..-.","--.","....","..","-.-",".-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-.--","-.--","--..",};
	string numcode [26]{"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
	
	printcode[0] = numcode[0];
	
	system("Color A0");
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"MORSE CODE\n";
	cout<<" ";
	cout<<"   An alphabet or code in which letters are represented by combinations of long and short signals of light or sound.";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	
		cout<<"\n\t\tA .-\t\tU ..-"; 
		cout<<"\n\t\tB -..\t\tV ...-";
		cout<<"\n\t\tC -.-.\t\tW .--";
		cout<<"\n\t\tD -..\t\tX -.--";
		cout<<"\n\t\tE .\t\tY -.--";
		cout<<"\n\t\tF ..-.\t\tZ --..";
		cout<<"\n\t\tG --.";
		cout<<"\n\t\tH ....";
		cout<<"\n\t\tI ..\t\tJ .---";
		cout<<"\n\t\tK -.-\t\t1 .----";
		cout<<"\n\t\tL .-..\t\t2 ..---";
		cout<<"\n\t\tM --\t\t3 ...--";
		cout<<"\n\t\tN -.\t\t4 ....-";
		cout<<"\n\t\tO ---\t\t5 .....";
		cout<<"\n\t\tP .--.\t\t6-....";
		cout<<"\n\t\tQ --.-\t\t7 --...";
		cout<<"\n\t\tR .-.\t\t8 ---..";
		cout<<"\n\t\tS ...\t\t9 ----.";
		cout<<"\n\t\tT -\t\t0-----";
		
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"PRESS 1 TO TAKE MORSE QUIZ"<<endl;
	cout<<setw(50)<<" "; cin>>choice;
	system("cls");

	cout<<"\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(65)<<"CHOOSE YOUR DIFFICULTY"<<endl;
	cout<<setw(65)<<"\n";
	cout<<setw(58)<<"[1] EASY"<<endl;
	cout<<setw(60)<<"[2] NORMAL"<<endl;
	cout<<setw(58)<<"[3] HARD"<<endl;
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(50)<<" "; cin>>difficulty;
	system("cls");
	
		switch(difficulty){
			case 1:
    		srand (time(NULL));    
    		for (int i=0; i<10; i++){    
				r1 = rand() % 26;	
				cout<<"\n\n\n\n\n\n";		
				cout<<setw(60)<<"/|_______/|\n";
   				cout<<setw(60)<<"|  o   o  |\n";
 				cout<<setw(60)<<"| == ^ == |\n";			
	    		cout<<setw(50)<<"| "<<printcode[r1]<<" "<<endl;
	    		cin>>ans;
          
	    	if (numcode[r1]==ans){
	        	cout<< "Correct";
	        	easy+=10;
			}
			else{
				cout<< "Wrong";
				easy-=5;
			}
			Sleep(1000);
			system("cls");
    		}
			break;
			case 2:
    		srand (time(NULL));    
    		for (int i=0; i<15; i++){    
				r1 = rand() % 26;
				r2 = rand() % 26;
				cout<<"\n\n\n\n\n\n";
				cout<<setw(60)<<"/|_______/|\n";
   				cout<<setw(60)<<"|  o   o  |\n";
 				cout<<setw(60)<<"| == ^ == |\n";	
	    		cout << setw(50)<<"| "<<printcode[r1]<<" "<<printcode[r2];
	    		cin >> ans;
	    		cin >> ans2;
          
	    	if (numcode[r1]==ans && numcode[r2]==ans2){
	        	cout<< "Correct";
	        	normal+=15;
			}
			else{
				cout<< "Wrong";
				normal-=10;
			}
			Sleep(1000);
			system("cls");
    		}
			break;
			case 3:
    		srand (time(NULL));    
    		for (int i=0; i<20; i++){    
				r1 = rand() % 26;
				r2 = rand() % 26;
				r3 = rand() % 26;
				cout<<"\n\n\n\n\n\n";
				cout<<setw(60)<<"/|_______/|\n";
   				cout<<setw(60)<<"|  o   o  |\n";
 				cout<<setw(60)<<"| == ^ == |\n";
	    		cout << setw(50)<<"| "<<printcode[r1]<<" "<<printcode[r2]<<" "<<printcode[r3];
	    		cin >> ans;
	    		cin >> ans2;
	    		cin >> ans3;
          
	    	if (numcode[r1]==ans && numcode[r2]==ans2 && numcode[r3]==ans3){
	        	cout<< "Correct";
	        	normal+=20;
			}
			else{
				cout<< "Wrong";
				normal-=15;
			}
			Sleep(1000);
			system("cls");
    		}
			break;
		}
	return Morse_Code;
}
int setupHighscore(char userChoice = 'a'){
	system("Color 70");
	char ch = 'a';
	
	cout<<"\n\n\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(60)<<"CONGRATULATIONS"<<endl;
	
	if(easy>=1){
	cout<<setw(45)<<"Your Score: "<<setw(25)<<easy<<" / 100pts"<<endl;
	if(easy==100){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*****"<<endl;
	}
	else if(easy<=90 && easy>=70){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"****"<<endl;
	}
	else if(easy<=60 && easy>=40){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"***"<<endl;
	}
	else if(easy<=30 && easy>=10){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"**"<<endl;
	}
	else{
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*"<<endl;
	}
	int div = easy/10;
	int mis = 10-div;
	cout<<setw(45)<<"Corrects: "<<setw(25)<<div<<" / 10"<<endl;
	cout<<setw(45)<<"Mistakes: "<<setw(25)<<mis<<" / 10"<<endl;
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		char name[10];
		cin.ignore();
		cout<<setw(65)<<"Enter Player's Name"<<endl;
		cout<<setw(55)<<" "; cin.getline(name,10);
		
		ofstream hScore("hScore.txt");
		hScore<<name<<"----------------------------"<<easy<<"pts"<<endl;
		hScore.close();
		
	}
	
	else if(normal>=1){
	cout<<setw(45)<<"Your Score: "<<setw(30)<<normal<<" / 500pts"<<endl;
	if(normal==100){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*****"<<endl;
	}
	else if(normal<=90 && normal>=70){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"****"<<endl;
	}
	else if(normal<=60 && normal>=40){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"***"<<endl;
	}
	else if(normal<=30 && normal>=10){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"**"<<endl;
	}
	else{
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*"<<endl;
	}
	
	int div = normal/20;
	int mis = 20-normal;
	cout<<setw(45)<<"Corrects: "<<setw(25)<<div<<" / 20"<<endl;
	cout<<setw(45)<<"Mistakes: "<<setw(25)<<mis<<" / 20"<<endl;
	
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		char name[10];
		cin.ignore();
		cout<<setw(65)<<"Enter Player's Name"<<endl;
		cout<<setw(55)<<" "; cin.getline(name,10);
		
		ofstream hScore("hScore_Mid.txt");
		hScore<<name<<"----------------------------"<<normal<<"pts"<<endl;
		hScore.close();
	}
	
	else if(hard>=1){
	cout<<setw(45)<<"Your Score: "<<setw(30)<<hard<<" / 1500pts"<<endl;
	if(hard==100){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*****"<<endl;
	}
	else if(hard<=90 && hard>=70){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"****"<<endl;
	}
	else if(hard<=60 && hard>=40){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"***"<<endl;
	}
	else if(hard<=30 && hard>=10){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"**"<<endl;
	}
	else{
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*"<<endl;
	}
	
	int div = hard/30;
	int mis = 30-hard;
	cout<<setw(45)<<"Corrects: "<<setw(25)<<div<<" / 30"<<endl;
	cout<<setw(45)<<"Mistakes: "<<setw(25)<<mis<<" / 30"<<endl;
	
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		char name[10];
		cin.ignore();
		cout<<setw(65)<<"Enter Player's Name"<<endl;
		cout<<setw(55)<<" "; cin.getline(name,10);
		
		ofstream hScore("hScore_Hrd.txt");
		hScore<<name<<"----------------------------"<<hard<<"pts"<<endl;
		hScore.close();
	}
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	
		cout<<setw(65)<<"Do you want to try again?"<<endl;
		cout<<setw(50)<<" "; cin>>userChoice;
		
	return userChoice;
}
int morseHighscore(char userMorse = 'a'){
	system("Color 70");
	char ch = 'a';
	
	cout<<"\n\n\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(75)<<"CONGRATULATIONS"<<endl;
	
	if(easy>=1){
	cout<<setw(45)<<"Your Score: "<<setw(25)<<easy<<" / 100pts"<<endl;
	if(easy==100){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*****"<<endl;
	}
	else if(easy<=90 && easy>=70){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"****"<<endl;
	}
	else if(easy<=60 && easy>=40){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"***"<<endl;
	}
	else if(easy<=30 && easy>=10){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"**"<<endl;
	}
	else{
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*"<<endl;
	}
	int div = easy/10;
	int mis = 10-div;
	cout<<setw(45)<<"Corrects: "<<setw(25)<<div<<" / 10"<<endl;
	cout<<setw(45)<<"Mistakes: "<<setw(25)<<mis<<" / 10"<<endl;
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		char name[10];
		cin.ignore();
		cout<<setw(65)<<"Enter Player's Name"<<endl;
		cout<<setw(55)<<" "; cin.getline(name,10);
		
		ofstream hScore("morseScore.txt");
		hScore<<name<<"----------------------------"<<easy<<"pts"<<endl;
		hScore.close();
		
	}
	
	else if(normal>=1){
	cout<<setw(45)<<"Your Score: "<<setw(30)<<normal<<" / 500pts"<<endl;
	if(normal==100){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*****"<<endl;
	}
	else if(normal<=90 && normal>=70){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"****"<<endl;
	}
	else if(normal<=60 && normal>=40){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"***"<<endl;
	}
	else if(normal<=30 && normal>=10){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"**"<<endl;
	}
	else{
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*"<<endl;
	}
	
	int div = normal/15;
	int mis = 15-normal;
	cout<<setw(45)<<"Corrects: "<<setw(25)<<div<<" / 20"<<endl;
	cout<<setw(45)<<"Mistakes: "<<setw(25)<<mis<<" / 20"<<endl;
	
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		char name[10];
		cin.ignore();
		cout<<setw(65)<<"Enter Player's Name"<<endl;
		cout<<setw(55)<<" "; cin.getline(name,10);
		
		ofstream hScore("morseScore_Mid.txt");
		hScore<<name<<"----------------------------"<<normal<<"pts"<<endl;
		hScore.close();
	}
	
	else if(hard>=1){
	cout<<setw(45)<<"Your Score: "<<setw(30)<<hard<<" / 1500pts"<<endl;
	if(hard==100){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*****"<<endl;
	}
	else if(hard<=90 && hard>=70){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"****"<<endl;
	}
	else if(hard<=60 && hard>=40){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"***"<<endl;
	}
	else if(hard<=30 && hard>=10){
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"**"<<endl;
	}
	else{
		cout<<setw(45)<<"Ranking: "<<setw(30)<<"*"<<endl;
	}
	
	int div = hard/20;
	int mis = 20-hard;
	cout<<setw(45)<<"Corrects: "<<setw(25)<<div<<" / 30"<<endl;
	cout<<setw(45)<<"Mistakes: "<<setw(25)<<mis<<" / 30"<<endl;
	
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		char name[10];
		cin.ignore();
		cout<<setw(65)<<"Enter Player's Name"<<endl;
		cout<<setw(55)<<" "; cin.getline(name,10);
		
		ofstream hScore("morseScore_Hrd.txt");
		hScore<<name<<"----------------------------"<<hard<<"pts"<<endl;
		hScore.close();
	}
	cout<<"\n*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	
		cout<<setw(65)<<"Do you want to try again?"<<endl;
		cout<<setw(50)<<" "; cin>>userMorse;
		
	return userMorse;
}
char quitGame(char ch = 'a'){
	system("Color 80");
	
	cout<<"\n\n\n\n\n";
	cout<<setw(65)<<" |\\__/,|    (` \\ \n";
	cout<<setw(65)<<" |_ _  |.--. )  ) \n";
	cout<<setw(65)<<" ( T   )       /  \n";
	cout<<setw(65)<<" (((^_(((/(((_/   \n";	
	
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
	cout<<setw(60)<<"WANT TO QUIT?"<<endl;
	cout<<setw(70)<<"Do you wanted to quit this game?"<<endl;
	cout<<setw(50)<<" "; cin>>ch;
	if(ch=='y'){
		cout<<"\t\t\t"<<"Thank you for playing our proj. This program will now be closed"<<endl;
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~\n";
		Sleep(2000);
		system("cls");
	}
	return ch;
}
int main(){
	int Start,Category,Multiplication,Table1,Morse_Code,userChoice,userMorse,Scores;
	loadScreen();
	
	start:
	int st = mainTitle(Start);
	
	if (st==1){	
		menu:
		int cat = mainMenu(Category);
		
			if (cat==0){	
			goto start;
			}
			if (cat==1){	
			retry:
			multiTable(Table1);
			char uch = setupHighscore(userChoice);
			if(uch=='y'){
				system("cls");
				goto retry;
			}
			else{
				system("cls");
				goto menu;
			}
			}
			else if (cat==2){
			morseCode(Morse_Code);
			char mch = morseHighscore(userMorse);
			if(mch=='y'){
				system("cls");
			}
			else{
				system("cls");
				goto menu;
			}
			}
			
		
		goto menu;
	}
	if (st==2){	
	int hs = highScores(Scores);
		if(hs==0){
		system("cls");
		goto start;
		}
	}
	if (st==3){
	char ch = quitGame();
		if(ch=='n'){
		system("cls");
		goto start;
		}
	}
	return 0;
	}

