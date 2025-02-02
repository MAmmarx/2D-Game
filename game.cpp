//********
//*                    PROGRAMMING II PROJECT                          *
//*    GAME MADE BY -- SALAH ELABD , ERFAN NADA , MOHAMMED AMMAR --    *
//********




#include <iostream>
#include <conio.h>

using namespace std;


void Clear_and_Draw_Map(char Map[][300])
{

    //CLEAR THE SCREEN
    for (int row = 0; row < 200; row++)
    {
        for (int col = 0; col < 300; col++)
        {
            Map[row][col] = ' ';
        }
    }

    //RIGHT SIDE FRAME
    for (int RightSideFrame = 0 ; RightSideFrame < 200 ; RightSideFrame++)
    {
        Map[RightSideFrame][299] = 179;
    }
}

// LEVELS

void DrawLevel1(char Map[][300])
{
    //////////////////////////////////////
    //(LEVEL 1)------------> First Floor.


    //FLOOR
    for (int ColumnFirstFlood = 0 ; ColumnFirstFlood < 300 ; ColumnFirstFlood++)
    {
        Map[191][ColumnFirstFlood] = 219;
    }


    //SPACE FOR WATER TRAP
    for (int columnspaceWaterTrap = 200 ; columnspaceWaterTrap < 220 ; columnspaceWaterTrap++)
    {
        Map [191][columnspaceWaterTrap] = ' ';
    }

    //WATER TRAP LEFT SIDE
    int k = 192;
    Map[k++][199] = 219;
    Map[k++][199] = 219;
    Map[k++][199] = 219;
    Map[k++][199] = 219;
    Map[k++][199] = 219;
    
    //WATER TRAP RIGHT SIDE
    k = 192;
    Map[k++][220] = 219;
    Map[k++][220] = 219;
    Map[k++][220] = 219;
    Map[k++][220] = 219;
    Map[k++][220] = 219;

    //WATER TRAP FLOOR

    for (int columnWaterTrapFloor = 200 ; columnWaterTrapFloor < 220 ; columnWaterTrapFloor++)
    {
        Map[196][columnWaterTrapFloor] = 219;
    }

    //WATER TRAP

   for(int rowWaterTrap = 193 ; rowWaterTrap < 196 ; rowWaterTrap++)
   {
    for (int columnWaterTrap = 201 ; columnWaterTrap < 219 ;columnWaterTrap++)
    {
        Map[rowWaterTrap][columnWaterTrap] = '~';
    }
   }
   


   //STAIRS ABOVE THE WATER [1st]

   for(int floorStair1 = 242 ; floorStair1 < 252 ; floorStair1++)
   {
        Map[186][floorStair1] = 219;
   }

   //STAIRS ABOVE THE WATER [2nd]
   for(int floorStairs2 = 223 ; floorStairs2 < 231 ; floorStairs2++)
   {
        Map[181][floorStairs2] = 219;
   }

   //FLOOR AFTER ELEVATOR [ABOVE THE WATER]

   for (int FloorAfterElevator = 160 ; FloorAfterElevator < 180 ; FloorAfterElevator++)
   {
        Map[181][FloorAfterElevator] = 219;
   }

   for (int BarrierFloorAfterElevator = 181 ; BarrierFloorAfterElevator > 170 ; BarrierFloorAfterElevator--)
   {
    Map[BarrierFloorAfterElevator][160] = 219;
   }
   
   for(int CeilingFloorAfterElevator = 160 ; CeilingFloorAfterElevator < 252 ; CeilingFloorAfterElevator++)
   {
    Map[171][CeilingFloorAfterElevator] = 219;
   }

     //OBSTACLE 1

    for (int rowObstacle1 = 20 ; rowObstacle1 < 24 ; rowObstacle1 ++)
    {
        Map[187][rowObstacle1] = ' ';
    }

    for (int rowObstacle1 = 24 ; rowObstacle1 < 26 ; rowObstacle1 ++)
    {
        Map[187][rowObstacle1] = '_';
    }

    for (int rowObstacle1 = 26 ; rowObstacle1 < 31 ; rowObstacle1 ++)
    {
        Map[187][rowObstacle1] = ' ';
    }

    for (int rowObstacle1 = 31 ; rowObstacle1 < 33 ; rowObstacle1 ++)
    {
        Map[187][rowObstacle1] = '_';
    }

    for (int rowObstacle1 = 20 ; rowObstacle1 < 23 ; rowObstacle1 ++)
    {
        Map[188][rowObstacle1] = ' ';
    }

    Map[188][23] = '/';

    for (int rowObstacle1 = 24 ; rowObstacle1 < 26 ; rowObstacle1 ++)
    {
        Map[188][rowObstacle1] = ' ';
    }

    Map[188][26] = '\\';

    for (int rowObstacle1 = 27 ; rowObstacle1 < 30 ; rowObstacle1 ++)
    {
        Map[188][rowObstacle1] = '~';
    }

    Map[188][30] = '/';
    
    for (int rowObstacle1 = 31 ; rowObstacle1 < 33 ; rowObstacle1 ++)
    {
        Map[188][rowObstacle1] = ' ';
    }   
    
    Map[188][33] = '\\';
    
    for (int rowObstacle1 = 34 ; rowObstacle1 < 37 ; rowObstacle1 ++)
    {
        Map[188][rowObstacle1] = ' ';
    }

    for (int rowObstacle1 = 20 ; rowObstacle1 < 27 ; rowObstacle1 ++)
    {
        if (rowObstacle1 != 22)
            Map[189][rowObstacle1] = ' ';
    }

    Map[189][22] = '/';
    Map[189][27] = '\\';
    Map[189][28] = '_';
    Map[189][29] = '/';

    for (int rowObstacle1 = 31 ; rowObstacle1 < 34 ; rowObstacle1 ++)
    {
        Map[189][rowObstacle1] = ' ';
    }
    
    Map[189][34] = '\\';

    Map[190][20] = ' ';
    Map[190][21] = '/';
    
  
    Map[190][35] = '\\';


    //OBSTACLE 2


    for (int rowObstacle2 = 56 ; rowObstacle2 < 60 ; rowObstacle2 ++)
    {
        Map[187][rowObstacle2] = ' ';
    }

    for (int rowObstacle2 = 60 ; rowObstacle2 < 62 ; rowObstacle2 ++)
    {
        Map[187][rowObstacle2] = '_';
    }

    for (int rowObstacle2 = 62 ; rowObstacle2 < 67 ; rowObstacle2 ++)
    {
        Map[187][rowObstacle2] = ' ';
    }

    for (int rowObstacle2 = 67 ; rowObstacle2 < 69 ; rowObstacle2 ++)
    {
        Map[187][rowObstacle2] = '_';
    }

    for (int rowObstacle2 = 56 ; rowObstacle2 < 59 ; rowObstacle2 ++)
    {
        Map[188][rowObstacle2] = ' ';
    }

    Map[188][59] = '/';

    for (int rowObstacle2 = 60 ; rowObstacle2 < 62 ; rowObstacle2 ++)
    {
        Map[188][rowObstacle2] = ' ';
    }

    Map[188][62] = '\\';

    for (int rowObstacle2 = 63 ; rowObstacle2 < 66 ; rowObstacle2 ++)
    {
        Map[188][rowObstacle2] = '~';
    }

    Map[188][66] = '/';
    
    for (int rowObstacle2 = 67 ; rowObstacle2 < 69 ; rowObstacle2 ++)
    {
        Map[188][rowObstacle2] = ' ';
    }   
    
    Map[188][69] = '\\';
    
    for (int rowObstacle2 = 70 ; rowObstacle2 < 72 ; rowObstacle2 ++)
    {
        Map[188][rowObstacle2] = ' ';
    }



    for (int rowObstacle2 = 56 ; rowObstacle2 < 63 ; rowObstacle2 ++)
    {
        if (rowObstacle2 != 58)
            Map[189][rowObstacle2] = ' ';
    }

    Map[189][58] = '/';
    Map[189][63] = '\\';
    Map[189][64] = '_';
    Map[189][65] = '/';

    for (int rowObstacle2 = 66 ; rowObstacle2 < 68 ; rowObstacle2 ++)
    {
        Map[189][rowObstacle2] = ' ';
    }
    
    Map[189][70] = '\\';

    Map[190][56] = ' ';
    Map[190][57] = '/';
    Map[190][71] = '\\';

    //CLOUD
    int C = 113;
    Map[175][C++] = '.';
    Map[175][C++] = '-';
    Map[175][C++] = '~';
    Map[175][C++] = '~';
    Map[175][C++] = '-';
    Map[175][C++] = '.';
    C=112;
    Map[176][C--] = '-';
    Map[176][C--] = '~';
    Map[176][C--] = ' ';
    Map[176][C--] = '~';
    Map[176][C--] = ' ';
    Map[176][C--] = '-';
    Map[176][C--] = '.';
    Map[176][C] = ' ';
    Map[177][C--] = '/';
    Map[178][C++] = '|';
    Map[179][C] = '\\';
    C+=2;
    Map[180][C++] = '~';
    Map[180][C++] = '-';
    Map[180][C++] = ' ';
    Map[180][C++] = '.';
    Map[180][C++] = '_';
    Map[180][C++] = ' ';
    Map[180][C++] = ',';
    Map[180][C++] = '.';
    Map[180][C++] = ' ';
    Map[180][C++] = ',';
    Map[180][C++] = '.';
    Map[180][C++] = ',';
    Map[180][C++] = '.';
    Map[180][C++] = ',';
    Map[180][C++] = ' ';
    Map[180][C++] = ',';
    Map[180][C++] = '.';
    Map[180][C++] = '.';
    Map[180][C++] = ' ';
    Map[180][C++] = '-';
    Map[180][C++] = '~';
    Map[177][124] = '~';
    Map[177][125] = ' ';
    Map[177][126] = '-';
    Map[177][127] = '.';
    Map[178][129] = '"';
    Map[178][130] = ',';
    Map[179][129] = '.';
    Map[179][130] = '"';
    C=112;
    Map[176][C++] = '(';
    Map[176][C++] = ' ';
    Map[176][C++] = ' ';
    Map[176][C++] = ' ';
    Map[176][C++] = ' ';
    Map[176][C++] = ' ';
    Map[176][C++] = ' ';
    Map[176][C++] = ')';
    Map[176][C++] = '_';
    Map[176][C++] = ' ';
    Map[176][C++] = '_';


    //KEY TO DESTROY BARRIER

    Map[180][170] = '!';
    //LADDER TO LEVEL 2

    Map[190][275] = 'o';
    Map[190][276] = '-';
    Map[190][277] = 'o';

    Map[189][275] = '|';
    Map[189][276] = ' ';
    Map[189][277] = '|';

    Map[188][275] = '+';
    Map[188][276] = '-';
    Map[188][277] = '+';

    Map[187][275] = '|';
    Map[187][276] = ' ';
    Map[187][277] = '|';

    Map[186][275] = '+';
    Map[186][276] = '-';
    Map[186][277] = '+';

    Map[185][275] = '|';
    Map[185][276] = ' ';
    Map[185][277] = '|';

    Map[184][275] = '+';
    Map[184][276] = '-';
    Map[184][277] = '+';

    Map[183][275] = '|';
    Map[183][276] = ' ';
    Map[183][277] = '|';

    Map[182][275] = '+';
    Map[182][276] = '-';
    Map[182][277] = '+';

    Map[181][275] = '|';
    Map[181][276] = ' ';
    Map[181][277] = '|';

    Map[180][275] = '+';
    Map[180][276] = '-';
    Map[180][277] = '+';

    Map[179][275] = '|';
    Map[179][276] = ' ';
    Map[179][277] = '|';

    Map[178][275] = '+';
    Map[178][276] = '-';
    Map[178][277] = '+';

    Map[177][275] = '|';
    Map[177][276] = ' ';
    Map[177][277] = '|';

    Map[176][275] = '+';
    Map[176][276] = '-';
    Map[176][277] = '+';

    Map[175][275] = '|';
    Map[175][276] = ' ';
    Map[175][277] = '|';

    Map[174][275] = '+';
    Map[174][276] = '-';
    Map[174][277] = '+';

    Map[173][275] = '|';
    Map[173][276] = ' ';
    Map[173][277] = '|';

    Map[172][275] = '+';
    Map[172][276] = '-';
    Map[172][277] = '+';

    Map[171][275] = '|';
    Map[171][276] = ' ';
    Map[171][277] = '|';

    Map[170][275] = 'o';
    Map[170][276] = '-';
    Map[170][277] = 'o';

    

    Map[187][288] = 'L';
    Map[187][289] = 'E';
    Map[187][290] = 'V';
    Map[187][291] = 'E';
    Map[187][292] = 'L';
    Map[187][293] = ' ';
    Map[187][294] = '2';

    Map[185][291] = '|';
    Map[184][291] = '^';

}

void DrawLevel2(char Map[][300])
{
    
    //FLOOR

    for (int ColumnSecondFloor = 0 ; ColumnSecondFloor < 300 ; ColumnSecondFloor++)
    {
        if(ColumnSecondFloor != 275 && ColumnSecondFloor != 276 && ColumnSecondFloor != 277)
        Map[171][ColumnSecondFloor] = 219;
    }


    //PISTOL GUN SPAWN
    Map[169][265] = '-';
    Map[169][266] = 205;
    Map[169][267] = 209;
    Map[169][268] = 209;

    //ENEMY TO LADDER
    Map[169][290] = '/';
    Map[169][291] = '\\';

    Map[168][287] = 205;
    Map[168][288] = 209;
    Map[168][289] = 209;
    Map[168][290] = '>';
    Map[168][291] = '>';    

    Map[167][289] = '(';
    Map[167][290] = '#';
    Map[167][291] = 'x';
    Map[167][292] = ')';

    Map[166][290] = '/';
    Map[166][292] = '\\';


   


}
void DrawEnemyLevel2(char Map[][300], int rEnemyLevel2, int cEnemyLevel2)
{
     
     //ENEMY1
    

    Map[rEnemyLevel2+3][cEnemyLevel2-4] = '\\';
    Map[rEnemyLevel2+3][cEnemyLevel2-5] = '_';
    Map[rEnemyLevel2+3][cEnemyLevel2-6] = '_';
    Map[rEnemyLevel2+3][cEnemyLevel2-2] = 'd';
    Map[rEnemyLevel2+3][cEnemyLevel2-3] = '_';
    Map[rEnemyLevel2+3][cEnemyLevel2-1] = '|';
    Map[rEnemyLevel2+3][cEnemyLevel2] = '_';
    Map[rEnemyLevel2+3][cEnemyLevel2+1] = '|';
    Map[rEnemyLevel2+3][cEnemyLevel2+2] = 'b';
    Map[rEnemyLevel2+3][cEnemyLevel2+3] = '_';
    Map[rEnemyLevel2+3][cEnemyLevel2+4] = '_';

    Map[rEnemyLevel2+2][cEnemyLevel2-4] = '|';
    Map[rEnemyLevel2+2][cEnemyLevel2+2] = '|';
    Map[rEnemyLevel2+2][cEnemyLevel2+1] = '|';
    Map[rEnemyLevel2+2][cEnemyLevel2-1] = '|';
    Map[rEnemyLevel2+2][cEnemyLevel2-2] = '|';

    Map[rEnemyLevel2+1][cEnemyLevel2-4] = '|';
    Map[rEnemyLevel2+1][cEnemyLevel2+4] = '0';
    Map[rEnemyLevel2+1][cEnemyLevel2+3] = '`';
    Map[rEnemyLevel2+1][cEnemyLevel2-2] = '/';
    Map[rEnemyLevel2+1][cEnemyLevel2-1] = '_';
    Map[rEnemyLevel2+1][cEnemyLevel2] = '^';
    Map[rEnemyLevel2+1][cEnemyLevel2+1] = '_';
    Map[rEnemyLevel2+1][cEnemyLevel2+2] = '\\';


    Map[rEnemyLevel2][cEnemyLevel2] = '+';
    Map[rEnemyLevel2][cEnemyLevel2+1] = '/';
    Map[rEnemyLevel2][cEnemyLevel2+4] = '|';
    Map[rEnemyLevel2][cEnemyLevel2-1] = '\\';
    Map[rEnemyLevel2][cEnemyLevel2-4] = '|';
    Map[rEnemyLevel2][cEnemyLevel2-4] = '0';
    Map[rEnemyLevel2][cEnemyLevel2-3] = '/';
    Map[rEnemyLevel2][cEnemyLevel2-1] = '\\';
    Map[rEnemyLevel2][cEnemyLevel2+1] = '/';
    Map[rEnemyLevel2][cEnemyLevel2+3] = 'o';
    Map[rEnemyLevel2][cEnemyLevel2+4] = '=';
    Map[rEnemyLevel2][cEnemyLevel2+5] = 'o';
    Map[rEnemyLevel2][cEnemyLevel2+2] = '/';
    Map[rEnemyLevel2][cEnemyLevel2] = '^';
    Map[rEnemyLevel2][cEnemyLevel2-2] = '\\';
    Map[rEnemyLevel2][cEnemyLevel2-3] = '/';


    Map[rEnemyLevel2-1][cEnemyLevel2+4] = '|';
    Map[rEnemyLevel2-1][cEnemyLevel2-4] = '|';
    Map[rEnemyLevel2-1][cEnemyLevel2+2] = '_';
    Map[rEnemyLevel2-1][cEnemyLevel2+1] = '>';
    Map[rEnemyLevel2-1][cEnemyLevel2] = '=';
    Map[rEnemyLevel2-1][cEnemyLevel2-1] = '<';
    Map[rEnemyLevel2-1][cEnemyLevel2-2] = '_';

    
    Map[rEnemyLevel2-2][cEnemyLevel2] = '+';
    Map[rEnemyLevel2-2][cEnemyLevel2+1] = '/';
    Map[rEnemyLevel2-2][cEnemyLevel2-1] = '\\';
    Map[rEnemyLevel2-2][cEnemyLevel2-4] = '|';

    Map[rEnemyLevel2-3][cEnemyLevel2-4] = '+';
    
}
void MoveEnemyLevel2(char Map[][300], int &rEnemyLevel2, int &cEnemyLevel2, char UserMove, int &flagJump)
{
    int Constant = 4;
    int Constant2 = 5;


    if (UserMove == 'w')
    {
        flagJump = 1;
    }
    
    if (UserMove == 'a' && Map[rEnemyLevel2][cEnemyLevel2 - Constant] == ' ' && Map[rEnemyLevel2][cEnemyLevel2 - Constant2 ] == ' '&& Map[rEnemyLevel2+1][cEnemyLevel2-Constant] == ' '&& Map[rEnemyLevel2+1][cEnemyLevel2-Constant2] == ' ')
    {
        cEnemyLevel2-=2;
    
    }
    if (UserMove == 'd' && Map[rEnemyLevel2][cEnemyLevel2 + Constant] == ' ' && Map[rEnemyLevel2][cEnemyLevel2 + Constant2] == ' '&& Map[rEnemyLevel2+1][cEnemyLevel2+Constant] == ' '&& Map[rEnemyLevel2+1][cEnemyLevel2+Constant2] == ' ')
    {
        cEnemyLevel2+=2;
    }
}


void DrawLevel3(char Map[][300])
{


    //FLOOR
    for (int columnLevel3Floor = 0 ; columnLevel3Floor < 300 ; columnLevel3Floor ++)
    {
        Map[150][columnLevel3Floor] = 219;
    }
    for (int columnLevel3Floor = 71 ; columnLevel3Floor < 88 ; columnLevel3Floor++)
    {
        Map[150][columnLevel3Floor] = ' ';
    }

    //CHECKPOINT AND MACHINE GUN
    for (int rowCheckpointLevel3 = 146 ; rowCheckpointLevel3 < 150 ; rowCheckpointLevel3++)
    {
        Map[rowCheckpointLevel3][70] = 219;
    }

    Map[148][52] = 177;

    //OBSTACLE 3

    int Variable = 90;
    for (int rowObstacle3 = 56+Variable ; rowObstacle3 < 60+Variable ; rowObstacle3 ++)
    {
        Map[146][rowObstacle3] = ' ';
    }

    for (int rowObstacle3 = 60+Variable ; rowObstacle3 < 62+Variable ; rowObstacle3 ++)
    {
        Map[146][rowObstacle3] = '_';
    }

    for (int rowObstacle3 = 62+Variable ; rowObstacle3 < 67+Variable ; rowObstacle3 ++)
    {
        Map[146][rowObstacle3] = ' ';
    }

    for (int rowObstacle3 = 67+Variable ; rowObstacle3 < 69+Variable ; rowObstacle3 ++)
    {
        Map[146][rowObstacle3] = '_';
    }

    for (int rowObstacle3 = 56+Variable ; rowObstacle3 < 59+Variable ; rowObstacle3 ++)
    {
        Map[147][rowObstacle3] = ' ';
    }

    Map[147][59+Variable] = '/';

    for (int rowObstacle3 = 60+Variable ; rowObstacle3 < 62+Variable ; rowObstacle3 ++)
    {
        Map[147][rowObstacle3] = ' ';
    }

    Map[147][62+Variable] = '\\';

    for (int rowObstacle3 = 63+Variable ; rowObstacle3 < 66+Variable ; rowObstacle3 ++)
    {
        Map[147][rowObstacle3] = '~';
    }

    Map[147][66+Variable] = '/';
    
    for (int rowObstacle3 = 67+Variable ; rowObstacle3 < 69+Variable ; rowObstacle3 ++)
    {
        Map[147][rowObstacle3] = ' ';
    }   
    
    Map[147][69+Variable] = '\\';
    
    for (int rowObstacle3 = 70+Variable ; rowObstacle3 < 72+Variable ; rowObstacle3 ++)
    {
        Map[147][rowObstacle3] = ' ';
    }



    for (int rowObstacle3 = 56+Variable ; rowObstacle3 < 63+Variable ; rowObstacle3 ++)
    {
        if (rowObstacle3 != 58+Variable)
            Map[148][rowObstacle3] = ' ';
    }

    Map[148][58+Variable] = '/';
    Map[148][63+Variable] = '\\';
    Map[148][64+Variable] = '_';
    Map[148][65+Variable] = '/';

    for (int rowObstacle3 = 66+Variable ; rowObstacle3 < 68+Variable ; rowObstacle3 ++)
    {
        Map[148][rowObstacle3] = ' ';
    }
    
    Map[148][70+Variable] = '\\';

    Map[149][56+Variable] = ' ';
    Map[149][57+Variable] = '/';
    Map[149][71+Variable] = '\\';

    //CEILING
    for(int CeilingLevel3 = 0 ; CeilingLevel3 < 300 ; CeilingLevel3++)
    {
        Map[130][CeilingLevel3] = 219;
    }

}

void DrawAndRemoveBarrierAtLevel1(char Map[][300] , int rHero , int cHero , int &flagBarrier , int IndR , int IndC)
{

    if((IndR == 179 && IndC == 174) ||(IndR == 179 && IndC == 175))
    {
        flagBarrier = 1;
    }

        
        if(flagBarrier == 0)
        {
            for (int RowBarrier = 191 ; RowBarrier > 170 ; RowBarrier--)
        {
            Map[RowBarrier][252] = 219;
        }
        }

        if (flagBarrier == 1)
        {
            for (int RowBarrier = 190 ; RowBarrier > 171 ; RowBarrier--)
        {
            Map[RowBarrier][252] = ' ';
        }

        }

}

void DrawElevatorToLevel3(char Map[][300] , int rowElevatorToLevel3 , int columnElevatorToLevel3)
{
    for (int Constant = 0 ; Constant < 6; Constant++)
        Map[rowElevatorToLevel3][columnElevatorToLevel3+4+Constant] = 196;
}
void MoveElevatorToLevel3(int &rowElevatorToLevel3 , int &columnElevatorToLevel3 , int &DirectionElevator)
{
    
    if (DirectionElevator == 1)
    {
        if (rowElevatorToLevel3 + 10== 180)
        {
            DirectionElevator *= -1; 
        }
    }
    else 
    {
        if (rowElevatorToLevel3 == 150)
        {
            DirectionElevator *= -1;
        }
    }
    rowElevatorToLevel3+= DirectionElevator;
}


//ENEMIES


//SCREEN OUTPUT
void Cout_Map_to_Screen(char Map[][300], char &UserMove, int & rowMapBorderStart, int& rowMapBorderEnd, int& colMapBorderStart, int& colMapBorderEnd , int IndR , int IndC)
{

    int Constant = 2;
    
    system("cls");
    for (int rowMap = rowMapBorderStart; rowMap < rowMapBorderEnd; rowMap++)
    {
        for (int columnMap = colMapBorderStart; columnMap < colMapBorderEnd; columnMap++)
        {
            cout << Map[rowMap][columnMap];
        }
        cout << endl;
    }

    if (UserMove == 'a')
    {
        if(colMapBorderStart > 0 && Map[IndR][IndC-4] == ' '&& Map[IndR][IndC-5] == ' '&& Map[IndR+1][IndC-4] == ' '&& Map[IndR+1][IndC-5] == ' ')
        {
        colMapBorderStart-=Constant;
        colMapBorderEnd-=Constant;
        }
    }
    if (UserMove == 'd')
    {
        if(colMapBorderEnd < 300 && Map[IndR][IndC+4] == ' '&& Map[IndR][IndC+5] == ' '&& Map[IndR+1][IndC+4] == ' '&& Map[IndR+1][IndC+5] == ' ')
        {
    
        colMapBorderStart+=Constant;
        colMapBorderEnd+=Constant;
        }
    }
    
    if (UserMove == 's')
    {
        if(rowMapBorderEnd < 200)
        {
        rowMapBorderStart++;
        rowMapBorderEnd++;
        }
    }


/////////////////////////////////
    if (UserMove == 'p')
    {
        if(colMapBorderStart < 300)
        {
        colMapBorderStart+=10;
        colMapBorderEnd+=10;
        }
    }
    if (UserMove == 'o')
    {
        if(colMapBorderStart > 0)
        {
        colMapBorderStart-=10;
        colMapBorderEnd-=10;
        }
    }
    if (UserMove == '0')
    {
        rowMapBorderStart-=10;
        rowMapBorderEnd-=10;
    }
    if (UserMove == '-')
    {
        rowMapBorderStart+=10;
        rowMapBorderEnd+=10;
    }

    UserMove = 'G';
    cout.flush();
}

void DrawLaser(char Map[][300])
{
    for(int i = 134; i<150;i++)
    {
        Map[i][105]= 176;
    }
    int a = 105;
    for(int i = 134; i<142;i++)
    {
        Map[i][a]= 176;
        a++;
    }
   
    
    for(int i =142; i<150;i++)
    {
        Map[i][a] = 176;
        a--;
    }
   
    
  
    a = 105;
    for(int i = 134; i<142;i++)
    {
        Map[i][a]= 176;
        a--;
    }
   
    for(int i =142; i<150;i++)
    {
        Map[i][a] = 176;
        a++;
    }
    
    
    
}
//LASER TRAP
void DrawLaserTrapLevel3(char Map[][300])
{
    Map[131][105] = 203;
    Map[132][105] = 204;
    Map[133][105] = 'V';
}

// ELEVATORS
void DrawElevatorAboveWater(char Map[][300] , int rowElevatorAboveWater , int columnElevatorAboveWater , int &ElevatorMidPointRow ,int &ElevatorMidPointCol )
{
    for (int Constant = 0 ; Constant < 6; Constant++)
    {
        Map[rowElevatorAboveWater][columnElevatorAboveWater+4+Constant] = 196;
        
        if(Constant == 0)
        {
            ElevatorMidPointRow = rowElevatorAboveWater;
            ElevatorMidPointCol = columnElevatorAboveWater + 4 + Constant;
        }
    }
}
void MoveElevatorAboveWater(char Map [][300] , int &rowElevatorAboveWater , int &columnElevatorAboveWater , int &DirectionElevator , int &IndR , int &IndC , int&rHero , int &cHero , int &flagHero , int IndexElevRow , int IndexElevCol , int& ColBorderStart , int& ColBorderEnd)
{

    if (DirectionElevator == 1)
    {
        if (columnElevatorAboveWater + 10== 218)
        {
            DirectionElevator *= -1; 
        }
    }
    else 
    {
        if (columnElevatorAboveWater == 180)
        {
            DirectionElevator *= -1;
        }
    }


        if((IndR + 2 == IndexElevRow && IndC == IndexElevCol-1)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol) || (IndR + 2 == IndexElevRow && IndC == IndexElevCol+1)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol+2)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol+3)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol+4)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol+5) || (IndR + 2 == IndexElevRow && IndC == IndexElevCol+6)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol+7)|| (IndR + 2 == IndexElevRow && IndC == IndexElevCol+8))
        {
            flagHero = 1;
        }

        else {
            flagHero = 0;
        }




        if (flagHero == 1)
        {
            cHero += DirectionElevator;
            IndC += DirectionElevator;
            ColBorderEnd += DirectionElevator;
            ColBorderStart += DirectionElevator;
        }
    
    columnElevatorAboveWater+= DirectionElevator;


 

}

//HERO
void Draw_Hero(char Map[][300], int rHero, int cHero , int &IndexRowHero , int &IndexColumnHero)
{
    int ColumnHero = cHero;
    
    Map [rHero][ColumnHero++] = ' ';
    Map [rHero][ColumnHero++] = '/';
    Map [rHero][ColumnHero++] = '\\';
    Map [rHero][ColumnHero++] = '_';
    Map [rHero][ColumnHero++] = '/';
    Map [rHero][ColumnHero++] = '\\';

    ColumnHero = cHero;
    Map [rHero+1][ColumnHero++] = '(';
    Map [rHero+1][ColumnHero++] = ' ';
    Map [rHero+1][ColumnHero++] = 'o';
    Map [rHero+1][ColumnHero++] = '.'; //INDEX
    IndexRowHero = rHero+1;
    IndexColumnHero = ColumnHero-1;

    Map [rHero+1][ColumnHero++] = 'o';
    Map [rHero+1][ColumnHero++] = ' ';
    Map [rHero+1][ColumnHero++] = ')';

    ColumnHero = cHero;
    Map [rHero+2][ColumnHero++] = '>';
    Map [rHero+2][ColumnHero++] = ' ';
    Map [rHero+2][ColumnHero++] = '^';
    Map [rHero+2][ColumnHero++] = ' ';
    Map [rHero+2][ColumnHero++] = '<';




}
void Move_Hero(char Map [][300] , int& rHero, int& cHero, char UserMove , int &flagBarrierAtLevel1 , int &IndR , int &IndC , int&flagJump)
{
    int Constant = 4;
    int Constant2 = 5;


    if (UserMove == 'w')
    {
        flagJump = 1;
    }
    if (UserMove == 's')
    {
        if(rHero+2 < 190)
            rHero++;
    }
    if (UserMove == 'a' && Map[IndR][IndC - Constant] == ' ' && Map[IndR][IndC - Constant2 ] == ' '&& Map[IndR+1][IndC-Constant] == ' '&& Map[IndR+1][IndC-Constant2] == ' ')
    {
        IndC-=2;
        cHero-=2;
    }
    if (UserMove == 'd' && Map[IndR][IndC + Constant] == ' ' && Map[IndR][IndC + Constant2] == ' '&& Map[IndR+1][IndC+Constant] == ' '&& Map[IndR+1][IndC+Constant2] == ' ')
    {
        IndC+=2;
        cHero+=2;
    }
    
}


//JUMP AND GRAVITY
void Gravity(char Map[][300] , int&rHero,int&cHero , int &ctJump , int&rowMapBorderStart , int&rowMapBorderEnd , int&JumpAgain , int &IndR , int &IndC)
{
    if(ctJump == 7 || ctJump == 0)
    {
        if (Map[IndR+2][IndC] == ' ' && Map[IndR+2][IndC+1] == ' ' && Map[IndR+2][IndC+2] == ' ' && Map[IndR+2][IndC+3] == ' ' && Map[IndR+2][IndC-1] == ' ' && Map[IndR+2][IndC-2] == ' ' && Map[IndR+2][IndC-3] == ' ')
        
        {
            rHero++;
            JumpAgain++;

            if (rHero % 2 != 0)
            {
                rowMapBorderStart ++;
                rowMapBorderEnd++;
            }
        }
    }
    
    if(Map[IndR + 2][cHero] != ' '|| Map[IndR + 2][cHero+1] !=' '|| Map[IndR + 2][cHero+2] !=' '|| Map[IndR + 2][cHero+3] !=' '|| Map[IndR + 2][cHero+4] !=' '|| Map[IndR + 2][cHero+5] !=' '|| Map[IndR + 2][cHero+6] !=' ')
    {
        ctJump = 0;
        JumpAgain = 0;
    }
}

void Jump(char x[][300] , int &rHero , int &cHero , int &ctJump , int &flagJump , int&rowMapBorderStart , int&rowMapBorderEnd , int JumpAgain , int IndR , int IndC)
{
    if(flagJump == 1 && JumpAgain == 0 && x[rHero-1][cHero] ==' '&& x[rHero-1][cHero+1] ==' '&& x[rHero-1][cHero+2] ==' '&& x[rHero-1][cHero+3] ==' '&& x[rHero-1][cHero+4] ==' '&& x[rHero-1][cHero+5] ==' '&& x[rHero-1][cHero+6] ==' ')
    { 
        rHero--;
        ctJump++;

        if(rHero % 2 == 0 && JumpAgain == 0)
        {
        rowMapBorderStart--;
        rowMapBorderEnd --;
        }
    }

    if(ctJump >=7)
    {
        flagJump = 0;
    }

    if(x[IndR-2][IndC] != ' ' || x[IndR-2][IndC-1] != ' '|| x[IndR-2][IndC-2] != ' '|| x[IndR-2][IndC-3] != ' '|| x[IndR-2][IndC+1] != ' ' || x[IndR-2][IndC+2] != ' '|| x[IndR-2][IndC+3] != ' ')
    {
        ctJump = 7;
    }
    
    
}



int main()
{
    char Map[200][300];
    int rowElevatorAboveWater = 182 , columnEleveatorAboveWater = 191 , DirectionElevatorAboveWater = 1; 
    char UserMove = 'G';
    int rowMapBorderStart = 170, rowMapBorderEnd = 200, colMapBorderStart = 0, colMapBorderEnd = 90;
    int FlagBarrierAtLevel1 = 0;
    int rowElevatorToLevel3 = 170  , columnElevatorToLevel3 = 73 , DirectionElevatorToLevel3 = 1;
    int rHero = 188 , cHero = 5 , flagHeroElevatorAboveWater = 0;
    int IndexRowHero , IndexColumnHero;
    int ctJump = 0 , flagJump = 0 , JumpAgain = 0;
    int MidPointRowElev , MidPointColElev;
    int SingleBulletRow = -1, SingleBulletCol = -1;
    int ctActivateLaser=0;
    int rEnemyLevel2 = 167;
    int cEnemyLevel2 = 220;
    

    for (;;)
    {
        for (; !_kbhit() ;)
        {
            ctActivateLaser++;

            Clear_and_Draw_Map(Map);

            DrawLevel1(Map);
            DrawLevel2(Map);
            DrawLevel3(Map);

            DrawEnemyLevel2(Map, rEnemyLevel2, cEnemyLevel2);

            MoveElevatorAboveWater(Map , rowElevatorAboveWater , columnEleveatorAboveWater ,DirectionElevatorAboveWater , IndexRowHero , IndexColumnHero , rHero , cHero , flagHeroElevatorAboveWater ,MidPointRowElev , MidPointColElev ,colMapBorderStart , colMapBorderEnd);
            DrawElevatorAboveWater(Map , rowElevatorAboveWater , columnEleveatorAboveWater , MidPointRowElev , MidPointColElev);

            DrawAndRemoveBarrierAtLevel1(Map , rHero , cHero , FlagBarrierAtLevel1 , IndexRowHero , IndexColumnHero);

            MoveElevatorToLevel3(rowElevatorToLevel3 , columnElevatorToLevel3 ,DirectionElevatorToLevel3);
            DrawElevatorToLevel3(Map , rowElevatorToLevel3 , columnElevatorToLevel3);

            DrawLaserTrapLevel3(Map);
            if(ctActivateLaser%15==0 ||ctActivateLaser%20==0)
            {
                DrawLaser(Map);
            }

            Jump(Map , rHero ,cHero , ctJump , flagJump , rowMapBorderStart , rowMapBorderEnd , JumpAgain , IndexRowHero , IndexColumnHero);
            Gravity(Map , rHero ,cHero , ctJump , rowMapBorderStart , rowMapBorderEnd , JumpAgain , IndexRowHero , IndexColumnHero);

            Draw_Hero(Map , rHero , cHero , IndexRowHero , IndexColumnHero);

            Cout_Map_to_Screen(Map, UserMove, rowMapBorderStart, rowMapBorderEnd, colMapBorderStart, colMapBorderEnd , IndexRowHero , IndexColumnHero);

        }
        UserMove = _getch();
        

        Move_Hero(Map ,rHero , cHero , UserMove , FlagBarrierAtLevel1 , IndexRowHero , IndexColumnHero , flagJump);
        Draw_Hero(Map , rHero , cHero , IndexRowHero , IndexColumnHero);

        
        DrawEnemyLevel2(Map, rEnemyLevel2, cEnemyLevel2);
        MoveEnemyLevel2(Map, rEnemyLevel2,cEnemyLevel2,UserMove,flagJump);

        

    }



}