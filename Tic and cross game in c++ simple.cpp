#include<conio.h>
#include<iostream>
#include"stdlib.h"
using namespace std;
void game_bord();
void choicep1();
void choicep2();

char khana[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
 int winer1_checking();
 int winer2_checking();
 int main() {
int i,a;
	 for ( i = 0; i < 4; i++) {
		 game_bord();
		 choicep1();
		 
		 a = winer1_checking();
		 if (a == 1) {
		 		system("CLS");
		 	 game_bord();
			 cout<<"player 1 is win the game "<<endl;
			 i = 10;
			 break;
		 }
		 if (a == 0){
			 choicep2();
				 a = winer2_checking();
				 if (a == 1) {
				 	system("CLS");
				 	 game_bord();
					 cout<<"player 2 is win the game "<<endl;
						 i = 9;
						 break;
				 }

		 }
	 }
	 if(i==4){
	 	system("CLS");
	 	game_bord();
	 
	 choicep1();
	 	a=winer1_checking();
	 		if(a==1){
	 			system("CLS");
	 			game_bord();
	 			cout<<"player 1 win the game \n";
			 }
	 	else
	 	cout<<"this game is not win from both players \n";
	 	
	 }
 
		 cout<<"Thaks for using over product \n";
	return 0;
}


//(game bord)

   void game_bord() {
	 
   
	cout << "\n\nT H I S   I S    T I C K    A N D   C R O S S   G A M E\n\n" << endl;
	//Dashbboard;
	//cout << "         |     |" << endl;
	cout << "         |     |" << endl;
	cout << "       " << khana[0][0] << " |  " << khana[0][1] << "  |  " << khana[0][2]<< endl;
	cout << "    -----|-----|-----" << endl;
//	cout << "         |     |" << endl;
	cout << "       " << khana[1][0] << " |  " << khana[1][1] << "  |  " << khana[1][2] << endl;
	cout << "    -----|-----|-----" << endl;
	//cout << "         |     |" << endl;
	cout << "       " << khana[2][0] << " |  " << khana[2][1] << "  |  " << khana[2][2] << endl;
	cout << "         |     |" << endl;


}

   // user chioce
   void  choicep1() {
	   int p1;
	   ret:
	   cout << "Enter your turn from 1,2......to 9" << endl;
	   cout << "player 1 turn (X)" << endl;

	   cin >> p1;
	   switch (p1)
	   {
	   case 1:
		   khana[0][0] = 'X';
		   break;
	   case 2:
		   khana[0][1] = 'X';
		   break;
	   case 3:
		   khana[0][2] = 'X';
		   break;
	   case 4:
		   khana[1][0] = 'X';
		   break;
	   case 5:
		   khana[1][1] = 'X';
		   break;
	   case 6:
		   khana[1][2] = 'X';
		   break;
	   case 7:
		   khana[2][0] = 'X';
		   break;
	   case 8:
		   khana[2][1] = 'X';
		   break;
	   case 9:
		   khana[2][2] = 'X';
		   break;
	   default:
		   cout << "Invalid input retry;";
		   goto ret;

	   }

	   

   }
   void choicep2() {

	   int p2;


   ret1:
	   cout << "Enter your turn from 1,2......to 9" << endl;
	   cout << "player 2 turn (Z)" << endl;

	   cin >> p2;
	   switch (p2)
	   {
	   case 1:
		   khana[0][0] = 'Z';
		   break;
	   case 2:
		   khana[0][1] = 'Z';
		   break;
	   case 3:
		   khana[0][2] = 'Z';
		   break;
	   case 4:
		   khana[1][0] = 'Z';
		   break;
	   case 5:
		   khana[1][1] = 'Z';
		   break;
	   case 6:
		   khana[1][2] = 'Z';
		   break;
	   case 7:
		   khana[2][0] = 'Z';
		   break;
	   case 8:
		   khana[2][1] = 'Z';
		   break;
	   case 9:
		   khana[2][2] = 'Z';
		   break;
	   default:
		   cout << "Invalid input retry;";
		   goto ret1;

	   }

	   system("CLS");
	   
   
   
   }
   // winer checking function
  int winer1_checking() {
	  // checking player 1 is winer or not
	  if (khana[0][0] == 'X' && khana[0][1] == 'X' && khana[0][2] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[1][0] == 'X' && khana[1][1] == 'X' && khana[1][2] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;		  
	  }
	  else if (khana[2][0] == 'X' && khana[2][1] == 'X' && khana[2][2] == 'X') {
		  cout << "player 1 have win the game " << endl;

		  return 1;

	  }
	  else if (khana[0][0] == 'X' && khana[1][0] == 'X' && khana[2][0] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[0][1] == 'X' && khana[1][1] == 'X' && khana[2][1] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[0][2] == 'X' && khana[1][2] == 'X' && khana[2][2] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[0][0] == 'X' && khana[1][1] == 'X' && khana[2][2] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;

	  }
	  else if (khana[0][2] == 'X' && khana[1][1] == 'X' && khana[2][0] == 'X') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else
		  return 0;

	 




   }
  // checking player 2 win or not
  int winer2_checking() {
	  if (khana[0][0] == 'Z' && khana[0][1] == 'Z' && khana[0][2] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[1][0] == 'Z' && khana[1][1] == 'Z' && khana[1][2] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[2][0] == 'Z' && khana[2][1] == 'Z' && khana[2][2] == 'Z') {
		  cout << "player 1 have win the game " << endl;

		  return 1;

	  }
	  else if (khana[0][0] == 'Z' && khana[1][0] == 'Z' && khana[2][0] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[0][1] == 'Z' && khana[1][1] == 'Z' && khana[2][1] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[0][2] == 'Z' && khana[1][2] == 'Z' && khana[2][2] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else if (khana[0][0] == 'Z' && khana[1][1] == 'Z' && khana[2][2] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;

	  }
	  else if (khana[0][2] == 'Z' && khana[1][1] == 'Z' && khana[2][0] == 'Z') {
		  cout << "player 1 have win the game " << endl;
		  return 1;
	  }
	  else
		  return 0;

  }