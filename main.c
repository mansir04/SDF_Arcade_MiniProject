// This project was created by a group of three 1st year students as part of the college coursework.

// GITHUB LINK : https://github.com/mrdv54/SDF_Arcade_MiniProject

// Project is entirely made in C++ to demonstrate the use of classes and understand object oriented programming. 

/*---------------------------S D F___M I N I___L A B___P R O J E C T-------------------------------*/

/*---------------------------S D F___M I N I___L A B___P R O J E C T-------------------------------*/

/*---------------------------S D F___M I N I___L A B___P R O J E C T-------------------------------*/



//LIBRARIES
#include <iostream>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
#include <windows.h>
#include <iomanip>
#include <string>
#include <vector>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

using namespace std;

void printChar(char ch,int n)        //function to print patterns
{
    while(n--)
    {
        putchar(ch);
    }
}
void title()
{
    system("cls");                   //setting the console for program
    system("COLOR 11");
    cout<<"\n\n\t";
    printChar('=',30);
    cout<<" A R C A D E ";
    printChar('=',30);
    cout<<"\n";
}

void gotoxy(int x,int y)
{
	COORD CRD;                      //setting cursor position
    CRD.X = x;
    CRD.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),CRD);
}


/*------------------------------------------------Q U I Z----------------------------------------------------------
--------------------------------------------------Q U I Z----------------------------------------------------------
--------------------------------------------------Q U I Z----------------------------------------------------------*/

class Questions                     //prints ques
{
public:
    void printQues(int k)
    {
if(k==0)
    {
        cout<<"\t\t\tWhich of these medical conditions is most likely to cause dehydration?\n\n";
        cout<<"\t\t\t(A)MALARIA\t\t\t\t\t(B)TETANUS\n";
        cout<<"\t\t\t(C)DIARRHOEA\t\t\t\t\t(D)BERI BERI";
        }
        else if(k==1)
            {
        cout<<"\t\t\tWho is the only MP in the current Lok Sabha who is also an Olympic medalist?\n\n";
        cout<<"\t\t\t(A) Abhinav Bindra\t\t\t\t\t(B) Rajyavardan Singh Rathore\n";
        cout<<"\t\t\t(C) Karnam Maleshwari\t\t\t\t\t(D) Gagan Narang";
        }
        else if(k==2)
            {
        cout<<"\t\t\tIn which state is the Larji Hydroelectric Power Project located?\n\n";
        cout<<"\t\t\t(A) Uttarakhand\t\t\t\t\t(B) Jammu and Kashmir\n";
        cout<<"\t\t\t(C) Sikkim\t\t\t\t\t(D) Himachal Pradesh";
        }
        else if(k==3)
            {
        cout<<"\t\t\tDuring which of these legendary events did Lord Vishnu take the form of Kurma?\n\n";
        cout<<"\t\t\t(A) Kurukshetra Yudh\t\t\t\t\t(B) Hiranyakashipu Sanhar\n";
        cout<<"\t\t\t(C) Kaliya Naag Mardan\t\t\t\t\t(D) Samudra Manthan";
        }
        else if(k==4)
            {
        cout<<"\t\t\tEffective on may 2014,the European union imposed a temporary ban on the import of which of thesefruits from India?\n\n";
        cout<<"\t\t\t(A) Mango\t\t\t\t\t(B) Banana\n";
        cout<<"\t\t\t(C)  Litchi\t\t\t\t\t(D) Pineapple";
        }
        else if(k==5)
            {
        cout<<"\t\t\tDuring World War II, in which year did Germany attack France?\n\n";
        cout<<"\t\t\t(A) 1940\t\t\t\t\t(B) 1941\n";
        cout<<"\t\t\t(C)  1942\t\t\t\t\t(D) 1943";
    }
        else if(k==6)
            {
        cout<<"\t\t\tGolf player Vijay Singh belongs to which country?\n\n";
        cout<<"\t\t\t(A) USA\t\t\t\t\t(B) Fiji\n";
        cout<<"\t\t\t(C) India\t\t\t\t(D) UK";
    }

        else if(k==7)
            {
        cout<<"\t\t\tGrand Central Terminal, Park Avenue, New York is the world's :\n\n";
        cout<<"\t\t\t(A) largest railway station\t\t\t\t\t(B) highest railway station\n";
        cout<<"\t\t\t(C) longest railway station\t\t\t\t\t(D) None of the above";
    }

        else if(k==8)
            {
        cout<<"\t\t\tThe 'Black flag' signifies :\n\n";
        cout<<"\t\t\t(A) revolution/danger\t\t\t\t\t(B) peace\n";
        cout<<"\t\t\t(C) protest\t\t\t\t\t\t(D) truce";
    }
        else if(k==9)
            {
        cout<<"\t\t\tWhat Galileo invented?\n\n";
        cout<<"\t\t\t(A) Barometer\t\t\t\t\t(B) Pendulum clock\n";
        cout<<"\t\t\t(C) Microscope\t\t\t\t\t(D) Thermometer";
    }
    }
};

class Quiz : public Questions
{

        char ch;
        int i,sc;
        string c,c1;
    public:
        Quiz()                              //Constructor to store answers
    {
        sc=0;
        c="CBDDAABACD";                     //Answers
        c1="cbddaabacd";
    }
    int PlayQuiz()
    {
        title();
        cout<<"\n\n\t\t\t#*************************************************#\n\n";
        cout<<"\t\t\t#***************WELCOME TO THE QUIZ***************#\n\n";
        cout<<"\t\t\t#*************************************************#\n\n";
        cout<<"\t\t\t#*************************************************#\n\n";
            Sleep(600);
        for(i=0;i<10;i++)
        {
        title();
        cout<<"\n\n\t\t\tQUESTION "<<i+1<<"\n\n";
        printQues(i);
        cout<<"\n\n\n\t\t\tYOUR ANSWER : \t\t";
        cin>>ch;
        if(ch==c[i]||ch==c1[i])
        {
            cout<<"\n\t\t\tCORRECT ANSWER!!!\n\n\n\n";
            sc++;
        }
        else
        {
            cout<<"\n\t\t\tINCORRECT ANSWER!!!\n";
            cout<<"\n\t\t\tCORRECT ANSWER : "<<c[i]<<"\n\n\n\n";
        }
            Sleep(800);
        }
return sc;              //returns score
    }
    void display(int a)
    {
        title();
        cout<<"\n\n\t\t\t#*************************************************#\n\n";
        cout<<"\t\t\tYOUR SCORE = "<<a<<endl;
        cout<<"\n\n\t\t\t#*************************************************#\n\n";
            Sleep(500);
    }
};

/*---------------------------------------------T I C T A C T O E---------------------------------------------------------------------
-----------------------------------------------T I C T A C T O E---------------------------------------------------------------------
-----------------------------------------------T I C T A C T O E-------------------------------------------------------------------*/

class tictactoe{
public:
char square[10] = {'0','1','2','3','4','5','6','7','8','9'};    //displays grid

    void tic();             //makes move
    int checkwin();         //checks result
    void board();           //displays board
};

void tictactoe::tic()
{
    int player = 1,i,choice;

    char mark;
    do
    {
        board();
        player=(player%2)?1:2;

        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && square[1] == '1')

            square[1] = mark;
        else if (choice == 2 && square[2] == '2')

            square[2] = mark;
        else if (choice == 3 && square[3] == '3')

            square[3] = mark;
        else if (choice == 4 && square[4] == '4')

            square[4] = mark;
        else if (choice == 5 && square[5] == '5')

            square[5] = mark;
        else if (choice == 6 && square[6] == '6')

            square[6] = mark;
        else if (choice == 7 && square[7] == '7')

            square[7] = mark;
        else if (choice == 8 && square[8] == '8')

            square[8] = mark;
        else if (choice == 9 && square[9] == '9')

            square[9] = mark;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwin();

        player++;
    }while(i==-1);
    board();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
}

int tictactoe::checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])

        return 1;
    else if (square[4] == square[5] && square[5] == square[6])

        return 1;
    else if (square[7] == square[8] && square[8] == square[9])

        return 1;
    else if (square[1] == square[4] && square[4] == square[7])

        return 1;
    else if (square[2] == square[5] && square[5] == square[8])

        return 1;
    else if (square[3] == square[6] && square[6] == square[9])

        return 1;
    else if (square[1] == square[5] && square[5] == square[9])

        return 1;
    else if (square[3] == square[5] && square[5] == square[7])

        return 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
                    && square[4] != '4' && square[5] != '5' && square[6] != '6'
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return -1;
}

void tictactoe::board()             //Function to draw board with marks
{
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

    cout << "     |     |     " << endl << endl;
}


/*------------------------------------------------S N A K E  G A M E----------------------------------------------------------
--------------------------------------------------S N A K E  G A M E----------------------------------------------------------
--------------------------------------------------S N A K E  G A M E--------------------------------------------------------*/

class gameInfo {

public:

    vector<int> score = { 60, 40, 20 };
    vector<int> snakeBodyX;
    vector<int> snakeBodyY;

    bool isAlive = true, playerWon = false;

    int playFieldWidth = 30;
    int playFieldHeight = 20;
    int x = playFieldWidth / 2, y = playFieldHeight / 2;
    int foodPosX = rand() % (playFieldWidth - 4) + 2;
    int foodPosY = rand() % (playFieldHeight - 4) + 2;
    int min = 0, row, col, currentScore = 0, currentBest = 0, gamesPlayed = 0;
    int tillHighScore = score[2];

    void updateCurrentBest() {
        if (currentScore > currentBest) currentBest = currentScore;
    }

    void updateTillHighScore() {                                    //updating high score
        for (int i = 0; i < 3; i++) {
            if (currentScore < score[i]) tillHighScore = score[i] - currentScore;
            else if (currentScore >= score[0]) tillHighScore = 0;
        }
    }

    void updateScoreBoard() {
        for (int tracker = 0; tracker < score.size(); tracker++) {
            if (currentScore > score[tracker]) {
                score.insert(score.begin() + tracker, currentScore);    //adding user score in vector
                score.erase(score.begin()+score.size());
                return;
            }
        }
    }
};

class snakeInteractions : public gameInfo {

public:

    void getSnakeBody() {
        snakeBodyX.insert(snakeBodyX.begin(), x);  //snakes x coordinate
        snakeBodyY.insert(snakeBodyY.begin(), y);  //snakes y coordinate
    }

    void resetSnakeBody() {                                         //beginning again with new snake body
        for (int erase = 0; erase < snakeBodyX.size(); erase++) {
            snakeBodyX.erase(snakeBodyX.begin() + erase);
            snakeBodyY.erase(snakeBodyY.begin() + erase);
        }
    }

    void updateFoodPOS() {                                      // randomly places food
        bool isUnique = false;
        while (!isUnique) {
            foodPosX = rand() % (playFieldWidth - 4) + 2;
            foodPosY = rand() % (playFieldHeight - 4) + 2;

            for (int i = 0; i < snakeBodyX.size(); i++) {
                if (foodPosY == snakeBodyY[i] && foodPosX == snakeBodyX[i]) break;
                else isUnique = true;
            }
        }
    }

    void getSnakeCondition() {                  // just checks for if the snake has eaten a piece of food or died by crashing into itself or a wall.
        if (foodPosX == x && foodPosY == y) {
            currentScore += 10;
            updateTillHighScore();
            updateFoodPOS();
        }

        if (x == 0 || x == playFieldWidth - 1 || y == 0 || y == playFieldHeight - 1) {
            isAlive = false;
        }

        for (int i = 1; i <= currentScore / 10; i++) {
            if (snakeBodyX[i] == x && snakeBodyY[i] == y) {
                isAlive = false;
            }
        }
    }
};

class playSnake : public snakeInteractions {

public:

    enum directions { UP, DOWN, LEFT, RIGHT };              //moving snake from user input
    directions dir;

    void getKeyStroke() {
        if (_kbhit()) {
            switch (_getch()) {
            case 'a': case 'A': case KEY_LEFT:
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd': case 'D': case KEY_RIGHT:
                if (dir != LEFT) dir = RIGHT;
                break;
            case 'w': case 'W': case KEY_UP:
                if (dir != DOWN) dir = UP;
                break;
            case 's': case 'S': case KEY_DOWN:
                if (dir != UP) dir = DOWN;
                break;
            }
        }
    }

    void setPlayField() {

        system("cls");

        for (row = 0; row < playFieldHeight; row++) {
            for (col = 0; col < playFieldWidth; col++) {
                if (row == 0 || row == playFieldHeight - 1) cout << "*";                 //printing walls
                else if (col == 0 || col == playFieldWidth - 1) cout << "*";
                else if (row == y && col == x) cout << "X";
                else if (row == foodPosY && col == foodPosX) cout << "O";               //printing food
                else {
                    bool showSpace = true;
                    for (int body = 1; body < (currentScore+10)/10; body++) {
                        if (snakeBodyX[body] == col && snakeBodyY[body] == row) {
                            cout << "X";
                            showSpace = false;
                        }
                    }
                    if (showSpace) {
                        cout << " ";
                    }
                }
            }
            setScoreBoard(row);             //setting scoreboard
            cout << endl;
        }
    }

    void setScoreBoard(int row) {
        if (row == 1) cout << setw(22) << "Current Score:" << setw(13) << currentScore;
        if (row == 2) cout << setw(26) << "Until High Score: " << setw(9) << tillHighScore;
        if (row == 5) cout << setw(35) << "Top Scores                 ";
        if (row == 6) cout << setw(35) << "===========================";
        if (row == 7) cout << setw(17) << "1st Place" << setw(18) << score[0];
        if (row == 8) cout << setw(17) << "2nd Place" << setw(18) << score[1];
        if (row == 9) cout << setw(17) << "3rd Place" << setw(18) << score[2];
        if (row == 12) cout << setw(35) << "Current Session            ";
        if (row == 13) cout << setw(35) << "===========================";
        if (row == 14) cout << setw(21) << "Games Played:" << setw(14) << gamesPlayed;
        if (row == 15) cout << setw(21) << "Current Best:" << setw(14) << currentBest;
    }

    void getSnakeMovement() {                    //moving snake
        if (dir == LEFT) x--;
        else if (dir == RIGHT) x++;
        else if (dir == UP) y--;
        else if (dir == DOWN) y++;
        else return;
    }

    void playAgain() {                          //restarting to play again

        x = playFieldWidth / 2;
        y = playFieldHeight / 2;
        gamesPlayed++;
        resetSnakeBody();
        updateFoodPOS();
        updateCurrentBest();
        updateScoreBoard();
        currentScore = 0;
        isAlive = true;
        playGame();
    }


    void playGame() {

        while (isAlive) {
            setPlayField();
            getKeyStroke();
            getSnakeMovement();
            getSnakeBody();
            getSnakeCondition();
            if (isAlive==2) playAgain(); // currently not a boolean, just takes true for testing reasons
            Sleep(100);
        }
    }
};


/*---------------------------------------------C A S I N O  G A M E---------------------------------------------------------------------
-----------------------------------------------C A S I N O  G A M E---------------------------------------------------------------------
-----------------------------------------------C A S I N O  G A M E-------------------------------------------------------------------*/

void title();
class casino{
string playerName;
    int amount;                                                 // hold player's balance amount
    int bettingAmount;
    int guess;
    int dice;                                                   // hold computer generated number
    char choice;
public:
    void casinof();                                             //plays the game
    void drawLine(int n, char symbol);
    void rules();
};

void casino::rules()                                           //printing rules of game
{
    system("cls");
    cout << "\n\n";
    drawLine(80,'-');
    cout << "\t\tRULES OF THE GAME\n";
    drawLine(80,'-');
    cout << "\t1. Choose any number between 1 to 10\n";
    cout << "\t2. If you win you will get 10 times of money you bet\n";
    cout << "\t3. If you bet on wrong number you will lose your betting amount\n\n";
    drawLine(80,'-');
}

void casino::casinof()
{
    title();
    srand(time(0));                                         // "Seed" the random number generator
    drawLine(60,'_');
    cout << "\n\n\n\t\tCASINO GAME\n\n\n\n";
    drawLine(60,'_');
    fflush(stdin);
    cout << "\n\nEnter Your Name : ";

    getline(cin, playerName);
    fflush(stdin);
    cout << "\n\nEnter Deposit amount to play game : Rs. ";
    cin >> amount;

    do
    {
        system("cls");
        rules();
        cout << "\n\nYour current balance is $ " << amount << "\n";


        do                                                      // Get player's betting amount
        {
            cout <<playerName<<", enter money to bet : Rs. ";
            cin >> bettingAmount;
            if(bettingAmount > amount)
                cout << "Your betting amount is more than your current balance\n"
                       <<"\nRe-enter data\n ";
        }while(bettingAmount > amount);


        do                                                      // Get number player guessed
        {
            cout << "Guess your number to bet between 1 to 10 :";
            cin >> guess;
            if(guess <= 0 || guess > 10)
                cout << "Please check the number!! should be between 1 to 10\n"
                    <<"\nRe-enter data\n ";
        }while(guess <= 0 || guess > 10);

        dice = rand()%10 + 1;                                   // Will hold the randomly generated integer between 1 and 10

        if(dice == guess)
        {
            cout << "\n\nGood Luck!! You won Rs." << bettingAmount * 10;
            amount = amount + bettingAmount * 10;
        }
        else
        {
            cout << "Bad Luck this time !! You lost Rs.  "<< bettingAmount <<"\n";
            amount = amount - bettingAmount;
        }

        cout << "\nThe winning number was : " << dice <<"\n";
        cout << "\n"<<playerName<<", You have Rs.  " << amount << "\n";
        if(amount == 0)
        {
            cout << "You have no money to play ";
            break;
        }
        cout << "\n\n-->Do you want to play again (y/n)? ";
        cin >> choice;
    }while(choice =='Y'|| choice=='y');

    cout << "\n\n\n";
    drawLine(70,'=');
    cout << "\n\nThanks for playing game. Your balance amount is Rs.  " << amount << "\n\n";
    drawLine(70,'=');
}

void casino::drawLine(int n, char symbol)
{
    for(int i=0; i<n; i++)
        cout << symbol;
    cout << "\n" ;
}




/*------------------------------------------------M A I N  F U N C T I O N----------------------------------------------------------
--------------------------------------------------M A I N  F U N C T I O N----------------------------------------------------------
--------------------------------------------------M A I N  F U N C T I O N--------------------------------------------------------*/


int main()
{
    SetConsoleTitle("ARCADE | JIIT");                       //setting up console
    system("color F4");

    int i,ch,id,k=0;                                        // making passsword protected
    char c;
    char pas[10];
    string passw="12345",p="";
	gotoxy(42,8);
	cout<<"\t\tLOGIN";
	gotoxy(42,10);
	cout<<"____________________________________";
	gotoxy(42,11);
	cout<<"|\tEnter password :             |";
	gotoxy(42,12);
	cout<<"|__________________________________|";
	cout<<"\n\t\t\t\t\t";
	gotoxy(65,11);
	while( k<5)
	{
	    pas[k]=getch();
	    char s=k;
	    if(s>5)
		 break;
	    else cout<<"*";
	    k++;
	}
	pas[k]='\0';
	p=pas;
	if(p.compare(passw)==0)                                 //verifying password
	{
	    getch();
		system("cls");
		gotoxy(10,3);
		cout<<"<<<< Loading Please Wait >>>>";
		for(i=0; i<5; i++)
        {
            cout<<"\t*";
            Sleep(500);
        }
        //printing the welcome message
        cout<<" \n\n\n\n\n\t\t\t\t\t     *  *  *  *  *  *  *  *";
		cout<<"\n\n\t\t\t\t\t     *                    *";
		cout<<"\n\n\t\t\t\t\t     *       Welcome      *";
		cout<<"\n\n\t\t\t\t\t     *                    *";
		cout<<"\n\n\t\t\t\t\t     *  *  *  *  *  *  *  *";
		cout<<"\n\n\n\n\n\t\t\t\t\tPress any key to continue...... ";
		getch();

    title();

    //printing the team name

    cout<<"\n\n\t\t\t\tLab Final Even Semester 2022";
    cout<<"\n\n\t\t\t   Team : \n\n\t\t\t\t   ";
    cout<<"\n\n\t\t\t Jaypee Institute of Information Technology\n\t\t\t";
    printChar('=',38);
    cout<<"\n\n\n\t\t\t       Press any key to Enter";
    getch();
    while(1)
    {
        title();
        cout<<"\n\t";
        printChar('*',64);

 /*-----------------------------------------------M E N U----------------------------------------------------------
--------------------------------------------------M E N U----------------------------------------------------------
--------------------------------------------------M E N U--------------------------------------------------------*/

    //menu for user to access the different functions
        cout<<"\n\n\t\t\t\t1. Quiz";
        cout<<"\n\n\t\t\t\t2. Tic-Tac-Toe ";
        cout<<"\n\n\t\t\t\t3. Snake Game";
        cout<<"\n\n\t\t\t\t4. Casino Game";
        cout<<"\n\n\t\t\t\t5. Logout\n\n\t";
        printChar('*',64);
        int choice;
        cout<<"\n\n\t\t\t\tEnter Your Choice :\t";
        cin>>choice;

    //connecting the program using switch

        switch(choice)
        {
            case 1:
                {
                    Quiz ob;                        //creating object
                    int c=ob.PlayQuiz();            //calling function
                    ob.display(c);
                break;                              //loop control statement
                }

            case 2:
                {
                    tictactoe tn;
                    tn.tic();
                    break;
                }

            case 3:
                {
                    srand(time(NULL));              //random number generator
                    playSnake play;
                    play.playGame();
                    system("PAUSE");
                    break;
                }

            case 4:
                {
                    casino ca;
                    ca.casinof();
                    break;
                }


            case 5:
                return 1;
                break;
            default:
                cout<<"\n\t\tNo Action Detected";
                cout<<"\n\t\tPress Any Key\n\n\n";
                getch();
                system("pause");
        }
    }

	}
    else
    {
        printf("\n\n\n\n\t\t\t\t\t  Wrong Password .Please try again.\n");      //in case password is wrong
        getch();
    }
    cout<<"\n\t";
        printChar('*',64);  //printing design
    return 0;
}
