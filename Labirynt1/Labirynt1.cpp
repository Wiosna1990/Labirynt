// Labirynt1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    char matrix[25][25];
    

    
    string row = "######################  #" ;
    char char_array[25];
    for (int i = 0; i < 25; i++)
        matrix[0][i] = row[i];
    // 1
    row = "#                       #";
    for (int i = 0; i < 25; i++)
        matrix[1][i] = row[i];
    // 2
    row = "#                       #";
    for (int i = 0; i < 25; i++)
        matrix[2][i] = row[i];
    // 3
    row = "#   #### ##### ##  #### #";
    for (int i = 0; i < 25; i++)
        matrix[3][i] = row[i];
    // 4
    row = "#   #      #  #  # #  # #";
    for (int i = 0; i < 25; i++)
        matrix[4][i] = row[i];
    // 5
    row = "### ###### ###### ##### #";
    for (int i = 0; i < 25; i++)
        matrix[5][i] = row[i];
    // 6
    row = "# # #    # #         #  #";
    for (int i = 0; i < 25; i++)
        matrix[6][i] = row[i];
    // 7
    row = "# # #    # # ######### ##";
    for (int i = 0; i < 25; i++)
        matrix[7][i] = row[i];
    // 8
    row = "### ###### # ######### ##";
    for (int i = 0; i < 25; i++)
        matrix[8][i] = row[i];
    // 9
    row = "#          # #########  #";
    for (int i = 0; i < 25; i++)
        matrix[9][i] = row[i];
    // 10
    row = "# ##########  #         #";
    for (int i = 0; i < 25; i++)
        matrix[10][i] = row[i];
    // 11
    row = "# #         #   #########";
    for (int i = 0; i < 25; i++)
        matrix[11][i] = row[i];
    // 12
    row = "# #############         #";
    for (int i = 0; i < 25; i++)
        matrix[12][i] = row[i];
    // 13
    row = "##              #########";
    for (int i = 0; i < 25; i++)
        matrix[13][i] = row[i];
    // 14
    row = "#  ############ #########";
    for (int i = 0; i < 25; i++)
        matrix[14][i] = row[i];
    // 15
    row = "#  #      #   #         #";
    for (int i = 0; i < 25; i++)
        matrix[15][i] = row[i];
    // 16
    row = "# #      #  #  #  ### # #";
    for (int i = 0; i < 25; i++)
        matrix[16][i] = row[i];
    // 17
    row = "#  #      #   #   ### ###";
    for (int i = 0; i < 25; i++)
        matrix[17][i] = row[i];
    // 18
    row = "# #        # #  #####    ";
    for (int i = 0; i < 25; i++)
        matrix[18][i] = row[i];
    // 19
    row = "            |    |       ";
    for (int i = 0; i < 25; i++)
        matrix[19][i] = row[i];
    // 20
    row = "            |    |       ";
    for (int i = 0; i < 25; i++)
        matrix[20][i] = row[i];
    // 21
    row = "            |    |       ";
    for (int i = 0; i < 25; i++)
        matrix[21][i] = row[i];
    // 22
    row = "            |    |       ";
    for (int i = 0; i < 25; i++)
        matrix[22][i] = row[i];
    // 23
    row = "            |    |       ";
    for (int i = 0; i < 25; i++)
        matrix[23][i] = row[i];
    // 24
    row = "            |    |       ";
    for (int i = 0; i < 25; i++)
        matrix[24][i] = row[i];

    char ludzik = 'x';
    int pozycjaY = 0;
    int pozycjaX = 23;
    matrix[pozycjaY][pozycjaX] = ludzik;

    char znak = '0';
    
    do {
        int i;

        system("cls");

        cout << "Witam w grze !" << endl;
 
        // rysowanie        
        for (int inxRow = 0; inxRow < 25; inxRow++)
        {
            for (int inxCol = 0; inxCol < 25; inxCol++)
            {
                cout << matrix[inxRow][inxCol];
            }
            cout << endl;
        }

        cout << "Wcisnij 'a' oraz ENTER - aby skrecic w lewo, 's' - zejsc w dol, 'd' - w prawo, 'w' - do gory, 0 - aby zakonczyc" << endl << endl;

        cin >> znak;
        
        switch (znak)
        {
            case'a':                
                if (pozycjaX > 0 && matrix[pozycjaY][pozycjaX - 1] == ' ')
                {
                    char stara = matrix[pozycjaY][pozycjaX];
                    pozycjaX--;
                    matrix[pozycjaY][pozycjaX] = stara;
                    matrix[pozycjaY][pozycjaX+1] = ' ';
                }
                break;
            case's':
                if (pozycjaY < 25 && matrix[pozycjaY + 1][pozycjaX] == ' ')
                {
                    char stara = matrix[pozycjaY][pozycjaX];
                    pozycjaY++;
                    matrix[pozycjaY][pozycjaX] = stara;
                    matrix[pozycjaY-1][pozycjaX] = ' ';
                }
                break;
            case'd':
                if (pozycjaX < 25 && matrix[pozycjaY][pozycjaX + 1] == ' ')
                {
                    char stara = matrix[pozycjaY][pozycjaX];
                    pozycjaX++;
                    matrix[pozycjaY][pozycjaX] = stara;
                    matrix[pozycjaY][pozycjaX-1] = ' ';
                }
                break;
            case'w':
                if (pozycjaY > 0 && matrix[pozycjaY - 1][pozycjaX] == ' ')
                {
                    char stara = matrix[pozycjaY][pozycjaX];
                    pozycjaY--;
                    matrix[pozycjaY][pozycjaX] = stara;
                    matrix[pozycjaY+1][pozycjaX] = ' ';
                }
                break;
            default:
                break;
        }

    } while (znak != '0' && pozycjaY < 24);
}
    

  