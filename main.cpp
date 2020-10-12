#include <iostream>
#include <cstdlib>
#include <conio.h> // pentru a folosi _kbhit, _getch
#include <windows.h>
#include <stdlib.h>
#include <time.h> // pentru a folosi time

using namespace std;
bool GameOver = false; // variabila verifica daca jocul s-a terminat sau nu
int a[4][4]; // o matrice de 3x3 numerotata de la 1, exact cum e tabelul de la X si 0. Daca elementul este 0-> bloc gol, 1->X, 2->0
void Draw() // functie care afisaza pe ecran jocul in sine
{
    system("cls"); // sterge tot din consola
    int i,j;
    for(i=1;i<=11;i++)
    {
        if(i==4 || i==8)
            cout<<"-----+-----+-----"<<endl;
        else
        {
            if(i==1 || i==3)
            {
                for(j=1;j<3;j++)
                {
                    if(a[1][j]==0)
                        cout<<"     |";
                    else
                    {
                        if(a[1][j]==1)
                            cout<<" x x |";
                        else
                            if(a[1][j]==2)
                            cout<<" ooo |";
                    }

                }
                j=3;
                if(a[1][j]==0)
                    cout<<"     "<<endl;
                else
                {
                    if(a[1][j]==1)
                        cout<<" x x "<<endl;
                    else
                        cout<<" ooo "<<endl;
                }
            }
            if(i==2)
            {
                for(j=1;j<3;j++)
                {
                    if(a[1][j]==0)
                        cout<<"  "<<j<<"  |";
                    else
                    {
                        if(a[1][j]==1)
                            cout<<"  x  |";
                        else
                            if(a[1][j]==2)
                            cout<<" o o |";
                    }

                }
                j=3;
                if(a[1][j]==0)
                    cout<<"  "<<j<<"   "<<endl;
                else
                {
                    if(a[1][j]==1)
                        cout<<"  x  "<<endl;
                    else
                        cout<<" o o "<<endl;
                }
            }
            if(i==5 || i==7)
            {
                for(j=1;j<3;j++)
                {
                    if(a[2][j]==0)
                        cout<<"     |";
                    else
                    {
                        if(a[2][j]==1)
                            cout<<" x x |";
                        else
                            if(a[2][j]==2)
                            cout<<" ooo |";
                    }

                }
                j=3;
                if(a[2][j]==0)
                    cout<<"     "<<endl;
                else
                {
                    if(a[2][j]==1)
                        cout<<" x x "<<endl;
                    else
                        cout<<" ooo "<<endl;
                }
            }
            if(i==6)
            {
                for(j=1;j<3;j++)
                {
                    if(a[2][j]==0)
                        cout<<"  "<<j+3<<"  |";
                    else
                    {
                        if(a[2][j]==1)
                            cout<<"  x  |";
                        else
                            if(a[2][j]==2)
                            cout<<" o o |";
                    }

                }
                j=3;
                if(a[2][j]==0)
                    cout<<"  "<<j+3<<"   "<<endl;
                else
                {
                    if(a[2][j]==1)
                        cout<<"  x  "<<endl;
                    else
                        cout<<" o o "<<endl;
                }
            }
            if(i==9 || i==11)
            {
                for(j=1;j<3;j++)
                {
                    if(a[3][j]==0)
                        cout<<"     |";
                    else
                    {
                        if(a[3][j]==1)
                            cout<<" x x |";
                        else
                            if(a[3][j]==2)
                            cout<<" ooo |";
                    }

                }
                j=3;
                if(a[3][j]==0)
                    cout<<"     "<<endl;
                else
                {
                    if(a[3][j]==1)
                        cout<<" x x "<<endl;
                    else
                        cout<<" ooo "<<endl;
                }
            }
            if(i==10)
            {
                for(j=1;j<3;j++)
                {
                    if(a[3][j]==0)
                        cout<<"  "<<j+6<<"  |";
                    else
                    {
                        if(a[3][j]==1)
                            cout<<"  x  |";
                        else
                            if(a[3][j]==2)
                            cout<<" o o |";
                    }

                }
                j=3;
                if(a[3][j]==0)
                    cout<<"  "<<j+6<<"   "<<endl;
                else
                {
                    if(a[3][j]==1)
                        cout<<"  x  "<<endl;
                    else
                        cout<<" o o "<<endl;
                }
            }


        }
    }
}
void gameover() // afla daca a castigat cineva
{
    if(a[1][1]==a[1][2] && a[1][1]==a[1][3] && a[1][1]!=0)
    {
        if(a[1][1]==1)
        {
            cout<<"You win!";
            GameOver=true;
        }
        if(a[1][1]==2)
        {
            cout<<"Computer win!";
            GameOver=true;
        }
    }
    else
    {
        if(a[2][1]==a[2][2] && a[2][1]==a[2][3] && a[2][1]!=0)
        {
        if(a[2][1]==1)
        {
            cout<<"You win!";
            GameOver=true;
        }
        if(a[2][1]==2)
        {
            cout<<"Computer win!";
            GameOver=true;
        }
        }
        else
        {
            if(a[3][1]==a[3][2] && a[3][1]==a[3][3] && a[3][1]!=0)
            {
        if(a[3][1]==1)
        {
            cout<<"You win!";
            GameOver=true;
        }
        if(a[3][1]==2)
        {
            cout<<"Computer win!";
            GameOver=true;
        }
            }
            else
            {
                if(a[1][1]==a[2][1] && a[1][1]==a[3][1] && a[1][1]!=0)
                {
                    if(a[1][1]==1)
                    {
                        cout<<"You win!";
                        GameOver=true;
                    }
                    if(a[1][1]==2)
                    {
                        cout<<"Computer win!";
                        GameOver=true;
                    }
                }
                else
                {
                    if(a[1][2]==a[2][2] && a[1][2]==a[3][2] && a[1][2]!=0)
                    {
                    if(a[1][2]==1)
                    {
                        cout<<"You win!";
                        GameOver=true;
                    }
                    if(a[1][2]==2)
                    {
                        cout<<"Computer win!";
                        GameOver=true;
                    }
                    }
                    else
                    {
                        if(a[1][3]==a[2][3] && a[1][3]==a[3][3] && a[1][3]!=0)
                        {
                        if(a[1][3]==1)
                        {
                        cout<<"You win!";
                        GameOver=true;
                        }
                        if(a[1][3]==2)
                        {
                        cout<<"Computer win!";
                        GameOver=true;
                        }
                        }
                        else
                        {
                            if(a[1][1]==a[2][2] && a[1][1]==a[3][3] && a[1][1]!=0)
                            {
                                if(a[1][1]==1)
                                {
                                    cout<<"You win!";
                                    GameOver=true;
                                }
                                if(a[1][1]==2)
                                {
                                    cout<<"Computer win!";
                                    GameOver=true;
                                }
                            }
                            else
                            {
                                if(a[1][3]==a[2][2] && a[1][3]==a[3][1] && a[1][3]!=0)
                                {
                                    if(a[1][3]==1)
                                    {
                                        cout<<"You win!";
                                        GameOver=true;
                                    }
                                    if(a[1][3]==2)
                                    {
                                        cout<<"Computer win!";
                                        GameOver=true;
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }
    }
}
void ComputerTurn() // alege aleatoriu un bloc in care sa puna 0
{
    int Empty=0;
    while(!Empty)
    {
        srand (time(NULL)); // alege un numar random intre 1 si 9
        int j=rand()%9+1;
        switch(j)
        {
            case 1 : {if(a[1][1]==0){a[1][1]=2; Empty++; }break;}
            case 2 : {if(a[1][2]==0){a[1][2]=2; Empty++; }break;}
            case 3 : {if(a[1][3]==0){a[1][3]=2; Empty++; }break;}
            case 4 : {if(a[2][1]==0){a[2][1]=2; Empty++; }break;}
            case 5 : {if(a[2][2]==0){a[2][2]=2; Empty++; }break;}
            case 6 : {if(a[2][3]==0){a[2][3]=2; Empty++; }break;}
            case 7 : {if(a[3][1]==0){a[3][1]=2; Empty++; }break;}
            case 8 : {if(a[3][2]==0){a[3][2]=2; Empty++; }break;}
            case 9 : {if(a[3][3]==0){a[3][3]=2; Empty++; }break;}
        }
    }
}
void Menu() // meniul jocului
{
    cout<<"TIC TAC TOE GAME"<<endl<<endl;
    cout<<"1.Start"<<endl;
    cout<<"2.Quit"<<endl;
    int apasatbuton=0;
    while(apasatbuton==0 && GameOver==false)
    {
        if(_kbhit())
    {
        switch(_getch())
        {
            case '1' : {system("cls"); apasatbuton++; break;}
            case '2' : {GameOver=true; break;}
        }
    }
    }
}
void Input() // playerul alege unde sa puna X
{
    int apasatbuton=0;
    while(!apasatbuton)
    {
        if(_kbhit())
        {
            switch(_getch())
            {
            case '1' : if(a[1][1]==0){a[1][1]=1; apasatbuton++;} break;
            case '2' : if(a[1][2]==0){a[1][2]=1; apasatbuton++;} break;
            case '3' : if(a[1][3]==0){a[1][3]=1; apasatbuton++;} break;
            case '4' : if(a[2][1]==0){a[2][1]=1; apasatbuton++;} break;
            case '5' : if(a[2][2]==0){a[2][2]=1; apasatbuton++;} break;
            case '6' : if(a[2][3]==0){a[2][3]=1; apasatbuton++;} break;
            case '7' : if(a[3][1]==0){a[3][1]=1; apasatbuton++;} break;
            case '8' : if(a[3][2]==0){a[3][2]=1; apasatbuton++;} break;
            case '9' : if(a[3][3]==0){a[3][3]=1; apasatbuton++;} break;
            }
        }

    }
    Draw();

}
int main() // functia principala
{
    Menu();
    int Tie=0; // variabila verifica daca jocul s-a terminat egal
    while(!GameOver)
    {
        Draw();
        Input();
        Tie++;
        gameover();
        if(Tie==9 && GameOver==false)
        {
            cout<<"Tie!";
            return 0;
        }
        if(GameOver==false)
        ComputerTurn();
        Draw();
        gameover();
        Tie++;

    }
    return 0;
}
