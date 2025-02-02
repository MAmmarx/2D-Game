
//************************************************************************
//**                    PROGRAMMING II PROJECT                          **
//**    GAME MADE BY -- SALAH ELABD , ERFAN NADA , MOHAMMED AMMAR --    **
//************************************************************************




#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>

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
    //(**LEVEL 1**)------------> First Floor.


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

    for (int columnObstacle1 = 20 ; columnObstacle1 < 24 ; columnObstacle1 ++)
    {
        Map[187][columnObstacle1] = ' ';
    }

    for (int columnObstacle1 = 24 ; columnObstacle1 < 26 ; columnObstacle1 ++)
    {
        Map[187][columnObstacle1] = '_';
    }

    for (int columnObstacle1 = 26 ; columnObstacle1 < 29 ; columnObstacle1 ++)
    {
        Map[187][columnObstacle1] = ' ';
    }

    for (int columnObstacle1 = 20 ; columnObstacle1 < 23 ; columnObstacle1 ++)
    {
        Map[188][columnObstacle1] = ' ';
    }

    Map[188][23] = '/';

    for (int columnObstacle1 = 24 ; columnObstacle1 < 26 ; columnObstacle1 ++)
    {
        Map[188][columnObstacle1] = ' ';
    }

    Map[188][26] = '\\';

    Map[188][27] = '~';
    Map[188][28] = '~';
    

    

    for (int columnObstacle1 = 20 ; columnObstacle1 < 27 ; columnObstacle1 ++)
    {
        if (columnObstacle1 != 22)
            Map[189][columnObstacle1] = ' ';
    }

    Map[189][22] = '/';
    Map[189][27] = '\\';
    Map[189][28] = '_';

    
    Map[190][20] = ' ';
    Map[190][21] = '/';
    
    Map[190][29] = '|';

    //OBSTACLE 2


    for (int columnObstacle2 = 56 ; columnObstacle2 < 60 ; columnObstacle2 ++)
    {
        Map[187][columnObstacle2] = ' ';
    }

    for (int columnObstacle2 = 60 ; columnObstacle2 < 62 ; columnObstacle2 ++)
    {
        Map[187][columnObstacle2] = '_';
    }

    for (int columnObstacle2 = 62 ; columnObstacle2 < 65 ; columnObstacle2 ++)
    {
        Map[187][columnObstacle2] = ' ';
    }
    for (int columnObstacle2 = 56 ; columnObstacle2 < 59 ; columnObstacle2 ++)
    {
        Map[188][columnObstacle2] = ' ';
    }

    Map[188][59] = '/';

    for (int columnObstacle2 = 60 ; columnObstacle2 < 62 ; columnObstacle2 ++)
    {
        Map[188][columnObstacle2] = ' ';
    }

    Map[188][62] = '\\';

    for (int columnObstacle2 = 63 ; columnObstacle2 < 65 ; columnObstacle2 ++)
    {
        Map[188][columnObstacle2] = '~';
    }


    for (int columnObstacle2 = 56 ; columnObstacle2 < 63 ; columnObstacle2 ++)
    {
        if (columnObstacle2 != 58)
            Map[189][columnObstacle2] = ' ';
    }

    Map[189][58] = '/';
    Map[189][63] = '\\';
    Map[189][64] = '_';
    Map[190][65] = '|';

    Map[190][56] = ' ';
    Map[190][57] = '/';

    //CLOUD

    int constant = 3;
    int C = 113;
    Map[175-constant][C++] = '.';
    Map[175-constant][C++] = '-';
    Map[175-constant][C++] = '~';
    Map[175-constant][C++] = '~';
    Map[175-constant][C++] = '-';
    Map[175-constant][C++] = '.';
    C=112;
    Map[176-constant][C--] = '-';
    Map[176-constant][C--] = '~';
    Map[176-constant][C--] = ' ';
    Map[176-constant][C--] = '~';
    Map[176-constant][C--] = ' ';
    Map[176-constant][C--] = '-';
    Map[176-constant][C--] = '.';
    Map[176-constant][C] = ' ';
    Map[177-constant][C--] = '/';
    Map[178-constant][C++] = '|';
    Map[179-constant][C] = '\\';
    C+=2;
    Map[180-constant][C++] = '~';
    Map[180-constant][C++] = '-';
    Map[180-constant][C++] = ' ';
    Map[180-constant][C++] = '.';
    Map[180-constant][C++] = '_';
    Map[180-constant][C++] = ' ';
    Map[180-constant][C++] = ',';
    Map[180-constant][C++] = '.';
    Map[180-constant][C++] = ' ';
    Map[180-constant][C++] = ',';
    Map[180-constant][C++] = '.';
    Map[180-constant][C++] = ',';
    Map[180-constant][C++] = '.';
    Map[180-constant][C++] = ',';
    Map[180-constant][C++] = ' ';
    Map[180-constant][C++] = ',';
    Map[180-constant][C++] = '.';
    Map[180-constant][C++] = '.';
    Map[180-constant][C++] = ' ';
    Map[180-constant][C++] = '-';
    Map[180-constant][C++] = '~';
    Map[177-constant][124] = '~';
    Map[177-constant][125] = ' ';
    Map[177-constant][126] = '-';
    Map[177-constant][127] = '.';
    Map[178-constant][129] = '"';
    Map[178-constant][130] = ',';
    Map[179-constant][129] = '.';
    Map[179-constant][130] = '"';
    C=112;
    Map[176-constant][C++] = '(';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = ')';
    Map[176-constant][C++] = '_';
    Map[176-constant][C++] = ' ';
    Map[176-constant][C++] = '_';


    //KEY TO DESTROY BARRIER

    Map[176][163] = 'K';
    Map[176][164] = 'E';
    Map[176][165] = 'Y';
    Map[176][166] = ' ';
    Map[176][167] = 'T';
    Map[176][168] = 'O';

    Map[177][163] = 'D';
    Map[177][164] = 'E';
    Map[177][165] = 'S';
    Map[177][166] = 'T';
    Map[177][167] = 'R';
    Map[177][168] = 'O';
    Map[177][169] = 'Y';

    Map[178][163] = 'B';
    Map[178][164] = 'A';
    Map[178][165] = 'R';
    Map[178][166] = 'R';
    Map[178][167] = 'I';
    Map[178][168] = 'E';
    Map[178][169] = 'R';

    Map[180][167] = 231;
    //LADDER TO LEVEL 2

    Map[190][275] = 'o';
    Map[190][276] = ' ';
    Map[190][277] = ' ';
    Map[190][278] = ' ';
    Map[190][279] = ' ';
    Map[190][280] = 'o';

    Map[189][275] = '|';
    Map[189][276] = ' ';
    Map[189][277] = ' ';
    Map[189][278] = ' ';
    Map[189][279] = ' ';
    Map[189][280] = '|';

    Map[188][275] = '+';
    Map[188][276] = '-';
    Map[188][277] = '-';
    Map[188][278] = '-';
    Map[188][279] = '-';
    Map[188][280] = '+';

   
    Map[187][275] = '|';
    Map[187][276] = ' ';
    Map[187][277] = ' ';
    Map[187][278] = ' ';
    Map[187][279] = ' ';
    Map[187][280] = '|';

    Map[186][275] = '+';
    Map[186][276] = '-';
    Map[186][277] = '-';
    Map[186][278] = '-';
    Map[186][279] = '-';
    Map[186][280] = '+';

    Map[185][275] = '|';
    Map[185][276] = ' ';
    Map[185][277] = ' ';
    Map[185][278] = ' ';
    Map[185][279] = ' ';
    Map[185][280] = '|';

    Map[184][275] = '+';
    Map[184][276] = '-';
    Map[184][277] = '-';
    Map[184][278] = '-';
    Map[184][279] = '-';
    Map[184][280] = '+';

    Map[183][275] = '|';
    Map[183][276] = ' ';
    Map[183][277] = ' ';
    Map[183][278] = ' ';
    Map[183][279] = ' ';
    Map[183][280] = '|';

    Map[182][275] = '+';
    Map[182][276] = '-';
    Map[182][277] = '-';
    Map[182][278] = '-';
    Map[182][279] = '-';
    Map[182][280] = '+';


    Map[181][275] = '|';
    Map[181][276] = ' ';
    Map[181][277] = ' ';
    Map[181][278] = ' ';
    Map[181][279] = ' ';
    Map[181][280] = '|';

    Map[180][275] = '+';
    Map[180][276] = '-';
    Map[180][277] = '-';
    Map[180][278] = '-';
    Map[180][279] = '-';
    Map[180][280] = '+';


    Map[179][275] = '|';
    Map[179][276] = ' ';
    Map[179][277] = ' ';
    Map[179][278] = ' ';
    Map[179][279] = ' ';
    Map[179][280] = '|';

    Map[178][275] = '+';
    Map[178][276] = '-';
    Map[178][277] = '-';
    Map[178][278] = '-';
    Map[178][279] = '-';
    Map[178][280] = '+';

    Map[177][275] = '|';
    Map[177][276] = ' ';
    Map[177][277] = ' ';
    Map[177][278] = ' ';
    Map[177][279] = ' ';
    Map[177][280] = '|';

    Map[176][275] = '+';
    Map[176][276] = '-';
    Map[176][277] = '-';
    Map[176][278] = '-';
    Map[176][279] = '-';
    Map[176][280] = '+';

    Map[175][275] = '|';
    Map[175][276] = ' ';
    Map[175][277] = ' ';
    Map[175][278] = ' ';
    Map[175][279] = ' ';
    Map[175][280] = '|';

    Map[174][275] = '+';
    Map[174][276] = '-';
    Map[174][277] = '-';
    Map[174][278] = '-';
    Map[174][279] = '-';
    Map[174][280] = '+';

    Map[173][275] = '|';
    Map[173][276] = ' ';
    Map[173][277] = ' ';
    Map[173][278] = ' ';
    Map[173][279] = ' ';
    Map[173][280] = '|';

    Map[172][275] = 'o';
    Map[172][276] = '-';
    Map[172][277] = '-';
    Map[172][278] = '-';
    Map[172][279] = '-';
    Map[172][280] = 'o';
    

    Map[187][288] = 'L';
    Map[187][289] = 'E';
    Map[187][290] = 'V';
    Map[187][291] = 'E';
    Map[187][292] = 'L';
    Map[187][293] = ' ';
    Map[187][294] = '2';

    Map[185][291] = '|';
    Map[184][291] = '^';



    //CHECKPOINT
    Map[189][290] = 234;

    Map[189][293] = 'C';
    Map[189][294] = 'P';

}

void DrawLevel2(char Map[][300])
{ 
    //FLOOR

    for (int ColumnSecondFloor = 0 ; ColumnSecondFloor < 300 ; ColumnSecondFloor++)
    {
        if(ColumnSecondFloor != 275 && ColumnSecondFloor != 276 && ColumnSecondFloor != 277 && ColumnSecondFloor != 278&& ColumnSecondFloor != 279&& ColumnSecondFloor != 280&& ColumnSecondFloor != 281&& ColumnSecondFloor != 274)
        Map[171][ColumnSecondFloor] = 219;
    }
}

void DrawLevel3(char Map[][300])
{


    //FLOOR
    for (int columnLevel3Floor = 0 ; columnLevel3Floor < 250 ; columnLevel3Floor ++)
    {
        Map[150][columnLevel3Floor] = 219;
    }
    for (int columnLevel3Floor = 71 ; columnLevel3Floor < 94 ; columnLevel3Floor++)
    {
        Map[150][columnLevel3Floor] = ' ';
    }

    //CHECKPOINT AND MACHINE GUN
    for (int rowCheckpointLevel3 = 146 ; rowCheckpointLevel3 < 150 ; rowCheckpointLevel3++)
    {
        Map[rowCheckpointLevel3][70] = 219;
    }

    Map[148][52] = 234;

    //OBSTACLE 3

    int Variable = 90;
    for (int columnObstacle3 = 56+Variable ; columnObstacle3 < 60+Variable ; columnObstacle3 ++)
    {
        Map[146][columnObstacle3] = ' ';
    }

    for (int columnObstacle3 = 60+Variable ; columnObstacle3 < 62+Variable ; columnObstacle3 ++)
    {
        Map[146][columnObstacle3] = '_';
    }

    for (int columnObstacle3 = 62+Variable ; columnObstacle3 < 67+Variable ; columnObstacle3 ++)
    {
        Map[146][columnObstacle3] = ' ';
    }


    for (int columnObstacle3 = 56+Variable ; columnObstacle3 < 59+Variable ; columnObstacle3 ++)
    {
        Map[147][columnObstacle3] = ' ';
    }

    Map[147][59+Variable] = '/';

    for (int columnObstacle3 = 60+Variable ; columnObstacle3 < 62+Variable ; columnObstacle3 ++)
    {
        Map[147][columnObstacle3] = ' ';
    }

    Map[147][62+Variable] = '\\';

    for (int columnObstacle3 = 63+Variable ; columnObstacle3 < 65+Variable ; columnObstacle3 ++)
    {
        Map[147][columnObstacle3] = '~';
    }

    Map[149][65+Variable] = '|';
 



    for (int columnObstacle3 = 56+Variable ; columnObstacle3 < 63+Variable ; columnObstacle3 ++)
    {
        if (columnObstacle3 != 58+Variable)
            Map[148][columnObstacle3] = ' ';
    }

    Map[148][58+Variable] = '/';
    Map[148][63+Variable] = '\\';
    Map[148][64+Variable] = '_';


    Map[149][56+Variable] = ' ';
    Map[149][57+Variable] = '/';


    //LADDER TO EXIT



    int R = 150;
    Map[R--][250] = 219;
    Map[R--][250] = 219;
    Map[R--][250] = 219;
    Map[R--][250] = 219;
    Map[R--][250] = 219;

    int C = 250;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;

    Map[R--][C-1] = 219;
    Map[R--][C-1] = 219;
    Map[R--][C-1] = 219;
    Map[R--][C-1] = 219;

    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;

    Map[R--][C-1] = 219;
    Map[R--][C-1] = 219;
    Map[R--][C-1] = 219;
    Map[R--][C-1] = 219;

    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;
    Map[R+1][C++] = 219;

    


    R -=7;


    for (int column = 0 ; column < 280 ; column++)
        Map[R][column] = 219;


    


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

        //LEFT WALL
        for (int Constant = 0 ; Constant < 10; Constant++)
            Map[rowElevatorToLevel3][columnElevatorToLevel3+4+Constant] = 219;


        //ROOF
        for (int Constant = 0 ; Constant < 10; Constant++)
            Map[rowElevatorToLevel3-8][columnElevatorToLevel3+4+Constant] = 219;


        //FLOOR
        for (int Constant = 0 ; Constant >-8 ; Constant--)
        {
            Map[rowElevatorToLevel3 + Constant][columnElevatorToLevel3 + 4] = 219;
        }

   //     for (int Constant = 0 ; Constant > -9 ; Constant--)
   //     {
   //         Map[rowElevatorToLevel3 + Constant][87] = 219;
   //     }


}
void MoveElevatorToLevel3(char Map [][300] , int &rowElevatorToLevel3 , int &columnElevatorToLevel3 , int &DirectionElevator , int &rHero , int &cHero , int &IndR , int &IndC , int &flagHero , int &IndexElevRow , int &IndexElevCol , int &rowBorderStart , int&rowBorderEnd )
{
   int Constant = 4;

    if (DirectionElevator == 1)
    {
        if (rowElevatorToLevel3 + 10== 180)
        {
            DirectionElevator *= -1; 
        }
    }
    else 
    {
        if (rowElevatorToLevel3 == 145)
        {
            DirectionElevator *= -1;
        }
    }



        if ((IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+1) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+2) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+3) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+4) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+5) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+6) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+7) || (IndR + 2 == rowElevatorToLevel3 && IndC == columnElevatorToLevel3+Constant+8) || (IndR + 2 == rowElevatorToLevel3 && IndC-2 == columnElevatorToLevel3+Constant+8)|| (IndR + 2 == rowElevatorToLevel3 && IndC-2 == columnElevatorToLevel3+Constant+7)|| (IndR + 2 == rowElevatorToLevel3 && IndC-2 == columnElevatorToLevel3+Constant+6))
        {
            rHero += DirectionElevator;
            IndR += DirectionElevator;
            rowBorderEnd += DirectionElevator;
            rowBorderStart += DirectionElevator;
        }

        if ((IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+1) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+2) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+3) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+4) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+5) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+6) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+7) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC == columnElevatorToLevel3+Constant+8) || (IndR + 2 == rowElevatorToLevel3 - 8 && IndC-2 == columnElevatorToLevel3+Constant+8)|| (IndR + 2 == rowElevatorToLevel3 - 8 && IndC-2 == columnElevatorToLevel3+Constant+7)|| (IndR + 2 == rowElevatorToLevel3 - 8 && IndC-2 == columnElevatorToLevel3+Constant+6))
        {
            rHero += DirectionElevator;
            IndR += DirectionElevator;
            rowBorderEnd += DirectionElevator;
            rowBorderStart += DirectionElevator;
        }

    rowElevatorToLevel3+= DirectionElevator;
}

//ENEMIES
void DrawEnemyToLadderLevel2(char Map [][300] , int &FlagDeadOrAlive)
{
       //ENEMY TO LADDER

    if (FlagDeadOrAlive == 0 || FlagDeadOrAlive == 1)
    {
    Map[169][290] = '/';
    Map[169][291] = '\\';

    Map[168][286] = '-';
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

    else {
        Map[169][290] = ' ';
    Map[169][291] = ' ';

    Map[168][286] = ' ';
    Map[168][287] = ' ';
    Map[168][288] = ' ';
    Map[168][289] = ' ';
    Map[168][290] = ' ';
    Map[168][291] = ' ';     
    Map[167][289] = ' ';
    Map[167][290] = ' ';
    Map[167][291] = ' ';
    Map[167][292] = ' ';

    Map[166][290] = ' ';
    Map[166][292] = ' ';
    }
    

}
void EnemyToLadderLevel2Bullets(char Map[][300] , int IndR , int IndC , int&FlagEnemy , int &cBullet , int FlagDeadOrAlive , int &Health)
{

    if (FlagDeadOrAlive == 0)
    {
    if (IndR < 178)
    {
        FlagEnemy = 1;
    }
    else{
        FlagEnemy = 0;
    }

    if(FlagEnemy == 1)
    {
        Map [168][cBullet] = '*';
        cBullet--;
    }

    if (cBullet == 272)
    {
        Map[168][cBullet] = ' ';
        cBullet = 285;
    }

    if (IndR - 1 == 168 && cBullet == IndC +3)
    {
        Health--;
    }
    }
}



void DrawHealthEnemy2(char Map[][300] , int &Health , int &FlagDeadEnemy2 , int& timer , int Move , int &flagpistol)
{
    if (Health == 10)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '1';
        Map[162][col++ + Move] = '0';
        Map[162][col++ + Move] = '0';
    }

    if (Health == 10)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '1';
        Map[162][col++ + Move] = '0';
        Map[162][col++ + Move] = '0';
    }

    if (Health == 9)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '9';
        Map[162][col++ + Move] = '1';
    }

    if (Health == 8)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '8';
        Map[162][col++ + Move] = '2';
    }

    if (Health == 7)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '7';
        Map[162][col++ + Move] = '3';
    }

    if (Health == 6)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '6';
        Map[162][col++ + Move] = '4';
    }

    if (Health == 5)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '5';
        Map[162][col++ + Move] = '3';
    }

    if (Health == 4)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '4';
        Map[162][col++ + Move] = '2';
    }
    if (Health == 3)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '3';
        Map[162][col++ + Move] = '3';
    }
    if (Health == 2)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '2';
        Map[162][col++ + Move] = '4';
    }
    if (Health == 1)
    {
        int col = 188;
        Map[162][col++ + Move] = 'H';
        Map[162][col++ + Move] = 'P';
        Map[162][col++ + Move] = ' ';        
        Map[162][col++ + Move] = ':';
        Map[162][col++ + Move] = ' ';
        Map[162][col++ + Move] = '1';
        Map[162][col++ + Move] = '2';
    }


    if (FlagDeadEnemy2 == 0)
    {
    if (Health == 0 && timer != 0)
    {
        FlagDeadEnemy2 = 1;
        timer = 0;
        flagpistol = 0; 
    }}
}
void DrawEnemy2(char Map[][300] , int &Movement , int &FlagDeadOrAlive , int timer , int &IndexColumnEnemy2 , int& HitEnemy , int&EnemyHitLeftSide)
{

        if (FlagDeadOrAlive == 0)
        {
        int constant = 30;
        Map[170][216-constant + Movement] = '\\';
        Map[170][215-constant + Movement] = '_';
        Map[170][214-constant + Movement] = '_';
        Map[170][218-constant + Movement] = 'd';
        Map[170][217-constant + Movement] = '_';
        Map[170][219-constant + Movement] = '|';
        Map[170][220-constant + Movement] = '_';
        Map[170][221-constant + Movement] = '|';

        Map[170][222-constant + Movement] = 'b';


        IndexColumnEnemy2 = 222 - constant + Movement;

        Map[170][223-constant + Movement] = '_';
        Map[170][224-constant + Movement] = '_';

        Map[169][216-constant + Movement] = 'Z'; 

        EnemyHitLeftSide = 216 - constant + Movement; 
        Map[169][222-constant + Movement] = '|';

        HitEnemy = 222-constant+Movement;
        
        Map[169][221-constant + Movement] = '|';
        Map[169][219-constant + Movement] = '|';
        Map[169][218-constant + Movement] = '|';

        Map[168][216-constant + Movement] = '|';
        Map[168][224-constant + Movement] = '0';
        Map[168][223-constant + Movement] = '`';
        Map[168][218-constant + Movement] = '/';
        Map[168][219-constant + Movement] = '_';
        Map[168][220-constant + Movement] = '^';
        Map[168][221-constant + Movement] = '_';
        Map[168][222-constant + Movement] = '\\';


        Map[167][220-constant + Movement] = '+';
        Map[167][221-constant + Movement] = '/';
        Map[167][224-constant + Movement] = '|';
        Map[167][219-constant + Movement] = '\\';
        Map[167][216-constant + Movement] = '|';
        Map[167][216-constant + Movement] = '0'; 
        Map[167][217-constant + Movement] = '/';
        Map[167][219-constant + Movement] = '\\';
        Map[167][221-constant + Movement] = '/';
        Map[167][223-constant + Movement] = 'o';
        Map[167][224-constant + Movement] = '=';
        Map[167][225-constant + Movement] = 'o';
        Map[167][222-constant + Movement] = '/';
        Map[167][220-constant + Movement] = '^';
        Map[167][218-constant + Movement] = '\\';
        Map[167][217-constant + Movement] = '/';


        Map[166][224-constant + Movement] = '|';
        Map[166][216-constant + Movement] = '|';
        Map[166][222-constant + Movement] = '_';
        Map[166][221-constant + Movement] = '>';
        Map[166][220-constant + Movement] = '=';
        Map[166][219-constant + Movement] = '<';
        Map[166][218-constant + Movement] = '_';


        Map[165][220-constant + Movement] = '+';
        Map[165][221-constant + Movement] = '/';
        Map[165][219-constant + Movement] = '\\';
        Map[165][216-constant + Movement] = '|';
        Map[164][216-constant + Movement] = '+';
        }

        else {
            if (timer < 10)
            {
                int constant = 30;

        Map[170][220-constant + Movement] = '*';
        Map[170][222-constant + Movement] = '*';
        Map[170][224-constant + Movement] = '*';

        Map[169][216-constant + Movement] = '*';
        Map[169][221-constant + Movement] = '*';
        Map[169][218-constant + Movement] = '*';

        Map[168][216-constant + Movement] = '*';
        Map[168][224-constant + Movement] = '*';
        Map[168][218-constant + Movement] = '*';
        Map[168][221-constant + Movement] = '*';


        Map[167][220-constant + Movement] = '*';
        Map[167][221-constant + Movement] = '*';
        Map[167][224-constant + Movement] = '*';
        Map[167][217-constant + Movement] = '*';
        Map[167][224-constant + Movement] = '*';
        Map[167][220-constant + Movement] = '*';
        Map[167][217-constant + Movement] = '*';


        Map[166][224-constant + Movement] = '*';
        Map[166][220-constant + Movement] = '*';
            }
        }
}
void MoveEnemy2(int & col , int &IndC , int &MoveEnemy , int &IndexColumnEnemy2 , int&HeroHealth , int LevelCount , int StartMoving , int flagdead)
{
    if (flagdead == 0)
    {
    if (IndC > IndexColumnEnemy2 && LevelCount == 2 && StartMoving >= 1)
    {
        MoveEnemy = 1;
    }
    if (IndC < IndexColumnEnemy2)
    {
        MoveEnemy = 2;
    }

    
    if ((IndexColumnEnemy2 == IndC - 2 || IndexColumnEnemy2 == IndC + 2) && LevelCount == 2 && StartMoving >= 1)
    {
        MoveEnemy = 3;
    }


    if (MoveEnemy == 1 && LevelCount == 2&& StartMoving >= 1)
    {
        col++;
    }

    if (MoveEnemy == 2 && LevelCount == 2&& StartMoving >= 1)
    {
        col--;
    }

    if (MoveEnemy == 3 && LevelCount == 2 && StartMoving >= 1)
    {
        HeroHealth--;
    }

    }
}


void DrawFinalBoss(char Map[][300] , int &Movement , int &FlagDeadOrAlive , int timer , int &IndexColFinalBoss , int& HitEnemy , int&EnemyHitLeftSide , int rBoss , int cBoss)
{

    if (FlagDeadOrAlive == 0)
    {
    Map[rBoss][cBoss +Movement] = ' ';
	Map[rBoss][cBoss + 1 + Movement] = '|';
	Map[rBoss][cBoss - 1+ Movement] = '|';
	Map[rBoss][cBoss - 2+ Movement] = '<';
    HitEnemy = cBoss - 2 + Movement;
	Map[rBoss][cBoss + 2+ Movement] = '>';
    EnemyHitLeftSide = cBoss+2+Movement;
	Map[rBoss - 1][cBoss + Movement] = '`';
	Map[rBoss - 1][cBoss + Movement - 1] = '#';

    IndexColFinalBoss = cBoss+Movement-1;
	Map[rBoss - 1][cBoss + Movement - 2] = '(';
	Map[rBoss - 1][cBoss + Movement + 1] = '_';
	Map[rBoss - 1][cBoss + Movement + 2] = '`';
	Map[rBoss - 1][cBoss + Movement + 3] = ')';
	Map[rBoss - 2][cBoss + Movement] = '_';
	Map[rBoss - 2][cBoss + Movement + 1] = '_';
	Map[rBoss - 2][cBoss + Movement + 2] = '\\';
	Map[rBoss - 2][cBoss + Movement + 3] = '_';
	Map[rBoss - 2][cBoss + Movement - 1] = '/';
	Map[rBoss - 2][cBoss + Movement - 2] = '_';
	Map[rBoss + 1][cBoss + Movement] = ' ';
	Map[rBoss + 1][cBoss + Movement + 1] = '\\';
	Map[rBoss + 1][cBoss + Movement + 2] = '_';
	Map[rBoss + 1][cBoss + Movement - 1] = '/';
	Map[rBoss + 1][cBoss + Movement - 2] = '_';
    }

if (FlagDeadOrAlive == 1 && timer < 15)
{
    Map[rBoss - 1][cBoss + Movement - 2] = '*';
	Map[rBoss - 1][cBoss + Movement + 2] = '*';
	Map[rBoss - 2][cBoss + Movement] = '*';
	Map[rBoss - 2][cBoss + Movement + 2] = '*';
	Map[rBoss - 2][cBoss + Movement - 1] = '*';
	Map[rBoss + 1][cBoss + Movement] = '*';
	Map[rBoss + 1][cBoss + Movement + 2] = '*';
	Map[rBoss + 1][cBoss + Movement - 2] = '*';

    }


}

void MoveFinalBoss(int & col , int &IndC , int &IndR , int &MoveBoss , int &IndexColumnFinalBoss , int&HeroHealth , int LevelCount , int StartMoving , int FlagDead)
{
    if (FlagDead == 0)
    {
    if (IndC > 180 && LevelCount == 3)
    {
        StartMoving++;
    }

    if(StartMoving > 0)
    {
    if (IndC > IndexColumnFinalBoss && LevelCount == 3 && StartMoving >= 1)
    {
        MoveBoss = 1;
    }
    if (IndC < IndexColumnFinalBoss)
    {
        MoveBoss = 2;
    }

    
    if ((IndexColumnFinalBoss == IndC - 2 || IndexColumnFinalBoss == IndC + 2) && LevelCount == 3 && StartMoving >= 1)
    {
        MoveBoss = 3;
    }


    if (MoveBoss == 1 && LevelCount == 3&& StartMoving >= 1)
    {
        col++;
    }

    if (MoveBoss == 2 && LevelCount == 3&& StartMoving >= 1)
    {
        col--;
    }

    if (MoveBoss == 3 && IndR == 148 &&LevelCount == 3 && StartMoving >= 1)
    {
        HeroHealth-=1;
    }
    }
    }
}

void HealthFinalBoss(char Map[][300] , int &Health , int &FlagDeadFinalBoss , int& timer , int Move , int LevelCount , int &FlagPistol)
{
    if (LevelCount == 3)
    {
    if (Health > 35 && Health <= 40)
    {
        
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '1';
        Map[rowFinalBoss][col++ + Move] = '0';
        Map[rowFinalBoss][col++ + Move] = '0';

        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }    
    }

    if (Health > 32 && Health <= 35)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '9';
        Map[rowFinalBoss][col++ + Move] = '3';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

    if (Health > 29 && Health <= 32)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '8';
        Map[rowFinalBoss][col++ + Move] = '7';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

    if (Health > 26 && Health <= 29)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '8';
        Map[rowFinalBoss][col++ + Move] = '1';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

    if (Health > 23 && Health <= 26)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '7';
        Map[rowFinalBoss][col++ + Move] = '4';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

    if (Health > 21 && Health <= 23)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '6';
        Map[rowFinalBoss][col++ + Move] = '9';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

    if (Health > 19 && Health <= 21)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '6';
        Map[rowFinalBoss][col++ + Move] = '2';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }
    if (Health > 16 && Health <= 19)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '5';
        Map[rowFinalBoss][col++ + Move] = '6';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }
    if (Health > 13 && Health <= 16)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '4';
        Map[rowFinalBoss][col++ + Move] = '8';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }
    if (Health > 10 && Health <= 13)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '4';
        Map[rowFinalBoss][col++ + Move] = '0';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

     if (Health > 7 && Health <= 10)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '3';
        Map[rowFinalBoss][col++ + Move] = '1';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

     if (Health > 4 && Health <= 7)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '2';
        Map[rowFinalBoss][col++ + Move] = '2';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

     if (Health > 0 && Health <= 4)
    {
        int rowFinalBoss= 142;
        int col = 210;
        Map[rowFinalBoss][col++ + Move] = 'H';
        Map[rowFinalBoss][col++ + Move] = 'P';
        Map[rowFinalBoss][col++ + Move] = ' ';        
        Map[rowFinalBoss][col++ + Move] = ':';
        Map[rowFinalBoss][col++ + Move] = ' ';
        Map[rowFinalBoss][col++ + Move] = '1';
        Map[rowFinalBoss][col++ + Move] = '3';
        for (int i = 0 ; i < 7 ; i++)
        {
            Map[144][190+i] = 196;
        }  
    }

    if (FlagDeadFinalBoss == 0)
    {
    if (Health == 0 && timer != 0)
    {
        FlagDeadFinalBoss = 1;
        timer = 0;
        FlagPistol = 1;
    }
    }
    }
}

void FinalBossBullet(char Map[][300] , int IndR , int IndC , int &cBullet , int FlagDeadOrAlive , int &Health , int LevelCount , int HitEnemy)
{
    if (FlagDeadOrAlive == 0 && LevelCount == 3)
    {
        Map[148][cBullet-1] = ' ';
        Map[148][cBullet-2] = '*';
        cBullet--;
    
        if(cBullet == IndC)
        {
            Health--;
        }
        if (cBullet < IndC)
        {
            cBullet = 208;
        }
    }
    
    
}

//GUNS
void DrawAndRemovePistolLevel2(char Map[][300] , int &IndR , int &IndC , int &flagPistol , int &MoveEnemyToHero)
{
    //ROW EXCEPTION
    if ((IndR == 169 && IndC - 4 == 260) || (IndR == 169 && IndC - 5 == 260)|| (IndR == 169 && IndC - 6 == 260))
    {
        flagPistol = 1;
        MoveEnemyToHero = 1;
    }
    if (flagPistol == 0)
    {
        Map[169][260] = '-';
        Map[169][261] = 205;
        Map[169][262] = 209;
        Map[169][263] = 209;
    } 

    else{
        Map[169][260] = ' ';
        Map[169][261] = ' ';
        Map[169][262] = ' ';
        Map[169][263] = ' ';
    } 


    if (IndR == 148 && IndC > 175)
    {
        flagPistol = 1;
    }
}
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


//BULLETS


void shootSingleBullet(char x[][300], int &IndR , int & IndC ,int& bulletX, int& bulletY) 
{
    
    bulletX = IndR;
    bulletY = IndC - 4;
}

void moveSingleBullet(char x[][300], int &IndR , int &IndC, int& bulletX, int& bulletY , int &FlagDeadEnemy1 , int&HealthEnemy2 , int HitEnemy , int HitBoss , int &HPBoss) 
{
    bulletY--;

    if (bulletY > IndC - 30) 
    {
        if (x[bulletX][bulletY] == ' ') 
        {
            if (bulletY < 300) 
            {
                x[bulletX][bulletY + 1] = ' ';
            }
            x[bulletX][bulletY] = '*';

            if (bulletX == 169 && bulletY == 289 && FlagDeadEnemy1 < 2)
            {
                FlagDeadEnemy1 ++;
                bulletX = -1;
                bulletY = -1;
            }

            if (bulletX == 169 && (bulletY == HitEnemy || bulletY == HitEnemy + 1 || bulletY == HitEnemy + 2 || bulletY == HitEnemy + 3 || bulletY == HitEnemy + 4) && HealthEnemy2 >= 0)
            {
                HealthEnemy2--;
                bulletX = -1;
                bulletY = -1;
            }

            if (bulletX == IndR && (bulletY == HitBoss || bulletY == HitBoss + 1 || bulletY == HitBoss + 2 || bulletY == HitBoss + 3 || bulletY == HitBoss + 4) && HPBoss >= 0)
            {
                HPBoss--;
                bulletX = -1;
                bulletY = -1;
            }
        } 
        else 
        {
            bulletX = -1;
            bulletY = -1;
        }
    } 
    else
    {
        bulletX = -1;
        bulletY = -1;
    }
}



void shootSingleBulletR(char x[][300], int &IndR , int & IndC ,int& bulletXR, int& bulletYR) 
{
    
    bulletXR = IndR;
    bulletYR = IndC + 4;
}

void moveSingleBulletR(char x[][300], int &IndR , int &IndC, int& bulletX, int& bulletY , int &FlagDeadEnemy1 , int&HealthEnemy2 , int &HitEnemy , int &HitBoss , int &HPBoss) 
{
    bulletY++;

    if (bulletY < IndC + 30) 
    {
        if (x[bulletX][bulletY] == ' ') 
        {
            if (bulletY > 0) 
            {
                x[bulletX][bulletY - 1] = ' ';
            }
            x[bulletX][bulletY] = '*';

            if (bulletX == 169 && bulletY == 289 && FlagDeadEnemy1 < 2)
            {
                FlagDeadEnemy1 ++;
                bulletX = -1;
                bulletY = -1;
            }
        if (bulletX == 169 && (bulletY == HitEnemy || bulletY == HitEnemy - 1 || bulletY == HitEnemy - 2 || bulletY == HitEnemy - 3 || bulletY == HitEnemy - 4) && HealthEnemy2 >= 0)
            {
                HealthEnemy2--;
                bulletX = -1;
                bulletY = -1;
            }

            if (bulletX == IndR && (bulletY == HitBoss || bulletY == HitBoss - 1 || bulletY == HitBoss - 2 || bulletY == HitBoss- 3 || bulletY == HitBoss - 4) && HPBoss >= 0)
            {
                HPBoss--;
                bulletX = -1;
                bulletY = -1;
            }
        } 
        else 
        {
            bulletX = -1;
            bulletY = -1;
        }
    } 
    else
    {
        bulletX = -1;
        bulletY = -1;
    }
}



void shootMultipleBullets(char map[][300], int &heroRow, int &heroCol, int bulletRows[], int bulletCols[], int bulletActive[], int numBullets) {
    
    for (int i = 0; i < numBullets; i++) {
        
        if (bulletActive[i] == 0) {
            
            bulletRows[i] = heroRow;
            bulletCols[i] = heroCol + 3;
            bulletActive[i] = 1;
            //break;
        }
    }
}

void moveMultipleBullets(char map[][300], int &heroRow , int &IndR , int &heroCol, int bulletRows[], int bulletCols[], int bulletActive[], int numBullets, int height, int &enemyFlag , int&HitBoss , int &HealthBoss) {
    
    for (int i = 0; i < numBullets; i++) {
        
        if (bulletActive[i] == 1) {
            
            bulletCols[i]++;
            
            if (bulletCols[i] < heroCol + 30) {
                
                if (map[bulletRows[i]][bulletCols[i]] == ' ') {
                    
                    if (bulletCols[i] > 0) {
                        
                        //map[bulletRows[i]][bulletCols[i] - 1] = ' ';
                    }
                    
                    map[bulletRows[i]][bulletCols[i]] = '*';


                    if ( bulletRows[i] == IndR && (bulletCols[i] == HitBoss ||bulletCols[i] == HitBoss - 1 ))
                    {
                        HealthBoss--;
                    }
                    if (bulletRows[i] == 169 && bulletCols[i] == 289 && enemyFlag < 2) {
                        
                        enemyFlag++;
                        bulletActive[i] = 0;
                    }
                } 
                
                else {
                    
                   bulletActive[i] = 0;
                }
            } 
            
            else {
                
                bulletActive[i] = 0;
            }
        }
    }
}

//LASER TRAP
void DrawLaserTrapLevel3(char Map[][300])
{
    Map[131][115] = 203;
    Map[132][115] = 204;
    Map[133][115] = 'V';
}
void DrawLaser(char Map[][300], int &LevelCount , int &IndC , int &Health)
{
    for(int i = 134; i<150;i++)
    {
        Map[i][115]= 176;
    }
    int a = 115;
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
   
    
  
    a = 115;
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

    if ((LevelCount == 3 && IndC ==115) ||(LevelCount == 3 && IndC + 1 == 115) ||(LevelCount == 3 && IndC + 2 == 115) ||(LevelCount == 3 && IndC + 3 == 115)||(LevelCount == 3 && IndC - 1 == 115)||(LevelCount == 3 && IndC - 2 == 115)||(LevelCount == 3 && IndC -3 == 115))
    {
        Health = 0;
    }
    
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
void Draw_Hero(char Map[][300], int rHero, int cHero , int &IndexRowHero , int &IndexColumnHero , int FlagPistol , char UserMove)
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




    if (FlagPistol == 1 && UserMove == 'd')
    {
        Map[rHero + 1][ColumnHero + 2] = 209;
        Map[rHero + 1][ColumnHero + 3] = 209;
        Map[rHero + 1][ColumnHero + 4] = 205;
        Map[rHero + 1][ColumnHero + 5] = '-';
    }
    
    if(FlagPistol == 1 && UserMove == 'a') {
        Map[rHero + 1][ColumnHero - 7] = 209;
        Map[rHero + 1][ColumnHero - 8] = 209;
        Map[rHero + 1][ColumnHero - 9] = 205;
        Map[rHero + 1][ColumnHero - 10] = '-';
    }


}
void Move_Hero(char Map[][300], int& rHero, int& cHero, char UserMove, int &flagBarrierAtLevel1, int &IndR, int &IndC, int&flagJump, int &LevelCount, int &FlagPistol, int &colMapBorderStart, int &colMapBorderEnd, int &Game, int &rowMapS, int &rowMapE)
{
    int Constant = 4;
    int Constant2 = 5;

    if (UserMove == ' ')
    {
        flagJump = 1;
    }

    if (UserMove == 'a' && Map[IndR][IndC - Constant] == ' ' && Map[IndR][IndC - Constant2] == ' ' && Map[IndR + 1][IndC - Constant] == ' ' && Map[IndR + 1][IndC - Constant2] == ' ' && LevelCount == 1)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'd' && Map[IndR][IndC + Constant] == ' ' && Map[IndR][IndC + Constant2] == ' ' && Map[IndR + 1][IndC + Constant] == ' ' && Map[IndR + 1][IndC + Constant2] == ' ' && LevelCount == 1)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    // EXCEPTION FOR LADDER LEVEL 1
    if (UserMove == 'd' && IndC > 268 && IndC < 294)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    if (UserMove == 'a' && IndC > 268)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'w' && IndC > 268 && IndC < 284)
    {
        IndR -= 2;
        rHero -= 2;

        rowMapS -= 2;
        rowMapE -= 2;
    }

    // LEVEL 2 MOVEMENTS

    // TO TAKE PISTOL
    int FlagPos = 0;
    if (IndC < 370 && IndC > 355)
    {
        FlagPos = 1;
    }
    else
    {
        FlagPos = 0;
    }

    if (UserMove == 'a' && Map[IndR][IndC - Constant] == ' ' && Map[IndR][IndC - Constant2] == ' ' && Map[IndR + 1][IndC - Constant] == ' ' && Map[IndR + 1][IndC - Constant2] == ' ' && FlagPos == 0 && LevelCount == 2 && FlagPistol == 0)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'd' && Map[IndR][IndC + Constant] == ' ' && Map[IndR][IndC + Constant2] == ' ' && Map[IndR + 1][IndC + Constant] == ' ' && Map[IndR + 1][IndC + Constant2] == ' ' && LevelCount == 2 && FlagPistol == 0)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    if (FlagPos == 1 && UserMove == 'a')
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (FlagPos == 1 && UserMove == 'd')
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    if (UserMove == 'a' && Map[IndR][IndC - 10] == ' ' && Map[IndR][IndC - 11] == ' ' && Map[IndR + 1][IndC - 10] == ' ' && Map[IndR + 1][IndC - 11] == ' ' && FlagPos == 0 && LevelCount == 2 && FlagPistol == 1)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'd' && Map[IndR][IndC + 10] == ' ' && Map[IndR][IndC + 11] == ' ' && Map[IndR + 1][IndC + 10] == ' ' && Map[IndR + 1][IndC + 11] == ' ' && LevelCount == 2 && FlagPistol == 1)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    // LEVEL 3 MOVEMENTS

    if (UserMove == 'a' && Map[IndR][IndC - Constant] == ' ' && Map[IndR][IndC - Constant2] == ' ' && Map[IndR + 1][IndC - Constant] == ' ' && Map[IndR + 1][IndC - Constant2] == ' ' && FlagPos == 0 && LevelCount == 3 && FlagPistol == 0 && IndC >= 60)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'a' && FlagPos == 0 && LevelCount == 3 && FlagPistol == 0 && IndC < 60)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'd' && Map[IndR][IndC + Constant] == ' ' && Map[IndR][IndC + Constant2] == ' ' && Map[IndR + 1][IndC + Constant] == ' ' && Map[IndR + 1][IndC + Constant2] == ' ' && LevelCount == 3 && FlagPistol == 0 && IndR >= 60)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    if (UserMove == 'd' && Map[IndR][IndC + Constant] == ' ' && Map[IndR][IndC + Constant2] == ' ' && Map[IndR + 1][IndC + Constant] == ' ' && Map[IndR + 1][IndC + Constant2] == ' ' && LevelCount == 3 && FlagPistol == 1 && IndR >= 60)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    if (UserMove == 'd' && FlagPos == 0 && LevelCount == 3 && FlagPistol == 0 && IndC < 60)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }

    if (UserMove == 'a' && Map[IndR][IndC - 10] == ' ' && Map[IndR][IndC- 11] == ' ' && Map[IndR + 1][IndC - 10] == ' ' && Map[IndR + 1][IndC - 11] == ' ' && FlagPos == 0 && LevelCount == 3 && FlagPistol == 1)
    {
        IndC -= 2;
        cHero -= 2;

        if (colMapBorderStart > 0)
        {
            colMapBorderStart -= 2;
            colMapBorderEnd -= 2;
        }
    }

    if (UserMove == 'd' && Map[IndR][IndC + 10] == ' ' && Map[IndR][IndC + 11] == ' ' && Map[IndR + 1][IndC + 10] == ' ' && Map[IndR + 1][IndC + 11] == ' ' && LevelCount == 3 && FlagPistol == 1)
    {
        IndC += 2;
        cHero += 2;

        if (colMapBorderEnd < 400)
        {
            colMapBorderStart += 2;
            colMapBorderEnd += 2;
        }
    }
}

//CHECKPOINTS

void CheckPoints(char Map[][300] , int &rHero , int &cHero , int &IndR , int &IndC , int &mapRowStart , int &mapRowEnd , int &mapColS , int &mapColE , int &CheckPointFlag , int &Health , int&FlagAK)
{
    //WATER TRAP
    if (Map[IndR + 2][IndC] == '~')
    {
        Health = 0;

    }

    if ((IndR == 189 && IndC + 3 == 290) || (IndR == 189 && IndC + 3 == 289))
    {
        CheckPointFlag = 2;
    }
      

              Map[148][52] = 234;

 
    if ((IndR == 148 && IndC - 3 == 52 )||(IndR == 148 && IndC - 3 == 53))
    {
        CheckPointFlag = 3;
        FlagAK = 1;
    }

}
//JUMP AND GRAVITY
void Gravity(char Map[][300] , int&rHero,int&cHero , int &ctJump , int&rowMapBorderStart , int&rowMapBorderEnd , int&JumpAgain , int &IndR , int &IndC , int FlagLadder)
{
    if(ctJump == 7 || ctJump == 0)
    {
        if (Map[IndR+2][IndC] == ' ' && Map[IndR+2][IndC+1] == ' ' && Map[IndR+2][IndC+2] == ' ' && Map[IndR+2][IndC+3] == ' ' && Map[IndR+2][IndC-1] == ' ' && Map[IndR+2][IndC-2] == ' ' && Map[IndR+2][IndC-3] == ' ')
        
        {
            rHero++;
            JumpAgain++;

                if (rHero % 2 == 1)
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

//RANDOM RAINS CLOUD
int randRains(int min, int max)
{
   return ((rand() % ((max - min) + 1)) + min);
}
void rains1(char Map[][300] , int cloudR , int cloudC)
{
    Map[cloudR][cloudC] = 235;
}
void MoveRain1(char Map [][300] , int &cloudR , int cloudC , int &flagRains , int cons , int count , int IndR , int IndC , int &Health)
{
    if (Map[cloudR+1][cloudC] == ' ' && count % 2 == 1)
    {
        cloudR++;
        flagRains = 1;
    }


    if ((cloudR + 1 == IndR && cloudC == IndC) || (cloudR + 1 == IndR && cloudC == IndC+1) || (cloudR + 1 == IndR && cloudC == IndC+2) ||(cloudR + 1 == IndR && cloudC == IndC+3)||(cloudR + 1 == IndR && cloudC == IndC-1)||(cloudR + 1 == IndR && cloudC == IndC-2)||(cloudR + 1 == IndR && cloudC == IndC-3))
    {
        Health--;
    }
    if (Map[cloudR+1][cloudC] != ' ')
    {
        Map[cloudR][cloudC] = ' ';
        flagRains = 0;
        cloudR = cons;
    }
}
void rains2(char Map[][300] , int cloudR , int cloudC)
{
    Map[cloudR][cloudC] = 235;
}
void MoveRain2(char Map [][300] , int &cloudR , int cloudC , int &flagRains , int cons , int count)
{
    if (Map[cloudR+1][cloudC] == ' '&& count % 2 == 1)
    {
        cloudR++;
        flagRains = 1;
    }


    if (Map[cloudR+1][cloudC] != ' ')
    {
        Map[cloudR][cloudC] = ' ';
        flagRains = 0;
        cloudR = cons;
    }
}
void rains3(char Map[][300] , int cloudR , int cloudC)
{
    Map[cloudR][cloudC] = 235;
}
void MoveRain3(char Map [][300] , int &cloudR , int cloudC , int &flagRains , int cons , int count , int IndR , int IndC , int &Health)
{
    if (Map[cloudR+1][cloudC] == ' ' && count % 2 == 1)
    {
        cloudR++;
        flagRains = 1;
    }


if ((cloudR + 1 == IndR && cloudC == IndC) || (cloudR + 1 == IndR && cloudC == IndC+1) || (cloudR + 1 == IndR && cloudC == IndC+2) ||(cloudR + 1 == IndR && cloudC == IndC+3)||(cloudR + 1 == IndR && cloudC == IndC-1)||(cloudR + 1 == IndR && cloudC == IndC-2)||(cloudR + 1 == IndR && cloudC == IndC-3))
    {
        Health--;
    }

    if (Map[cloudR+1][cloudC] != ' ')
    {
        Map[cloudR][cloudC] = ' ';
        flagRains = 0;
        cloudR = cons;
    }
}
void rains4(char Map[][300] , int cloudR , int cloudC)
{
    Map[cloudR][cloudC] = '*';
}
void MoveRain4(char Map [][300] , int &cloudR , int cloudC , int &flagRains , int cons)
{
    if (Map[cloudR+1][cloudC] == ' ')
    {
        cloudR++;
        flagRains = 1;
    }


    if (Map[cloudR+1][cloudC] != ' ')
    {
        Map[cloudR][cloudC] = ' ';
        flagRains = 0;
        cloudR = cons;
    }
}


//LEVEL
void LevelChecker(int IndR , int &LevelCounter)
{
    if (IndR > 172)
    {
        LevelCounter = 1;
    }
    if (IndR < 172 && IndR > 151)
    {
        LevelCounter = 2;
    }
    if(IndR < 151)
    {
        LevelCounter = 3;
    }
}


void DrawGameOver(char Map[][300] , int flaggameover)
{
if (flaggameover == 1)
{
    for (int r = 0 ; r < 30 ; r++)
    {
        for (int c = 0 ; c < 90 ; c++)
        {
            Map[r][c] = ' ';
        }
    }
}
                              
    if (flaggameover == 1)
    {
    cout << endl << endl << endl << endl<< endl << endl << endl << endl<< endl << endl << endl << endl;
    cout << "                       ____                         ___                 \n";
    cout << "                      / ___| __ _ _ __ ___   ___   / _ \\__   _____ _ __ \n";
    cout << "                     | |  _ / _` | '_ ` _ \\ / _ \\ | | | \\ \\ / / _ \\ '__|\n";
    cout << "                     | |_| | (_| | | | | | |  __/ | |_| |\\ V /  __/ |   \n";
    cout << "                      \\____|\\__,_|_| |_| |_|\\___|  \\___/  \\_/ \\___|_|   \n";
    cout << "                                                  \n";
    }
}

void CreateStatus(char Map[][300], int &Health, int &flagGameOver, int row, int column , int &IndR , int &IndC , int CheckPointRow , int CheckPointCol , int &rHero , int &cHero , int CheckPointFlag , int &mapRowStart , int &mapRowEnd , int &mapColS , int &mapColE ,int &Lives)
{

    if (Health == 6)
    {

        Map[row+3][column + 1] = 'H'; 
        Map[row+3][column + 2] = 'E'; 
        Map[row+3][column + 3] = 'R'; 
        Map[row+3][column + 4] = 'O'; 
        Map[row+3][column + 5] = ' '; 
        Map[row+3][column + 6] = 'H'; 
        Map[row+3][column + 7] = 'E'; 
        Map[row+3][column + 8] = 'A'; 
        Map[row+3][column + 9] = 'L';
        Map[row+3][column + 10] = 'T'; 
        Map[row+3][column + 11] = 'H';
        Map[row+3][column + 12] = ' '; 
        Map[row+3][column + 13] = ':'; 
        Map[row+3][column + 14] = ' '; 
        Map[row+3][column + 15] = '5'; 
        Map[row+3][column + 16] = '0';  

 
 
    }
    if (Health == 5)
    {
 
        Map[row+3][column + 1] = 'H'; 
        Map[row+3][column + 2] = 'E'; 
        Map[row+3][column + 3] = 'R'; 
        Map[row+3][column + 4] = 'O'; 
        Map[row+3][column + 5] = ' '; 
        Map[row+3][column + 6] = 'H'; 
        Map[row+3][column + 7] = 'E'; 
        Map[row+3][column + 8] = 'A'; 
        Map[row+3][column + 9] = 'L';
        Map[row+3][column + 10] = 'T'; 
        Map[row+3][column + 11] = 'H';
        Map[row+3][column + 12] = ' '; 
        Map[row+3][column + 13] = ':'; 
        Map[row+3][column + 14] = ' '; 
        Map[row+3][column + 15] = '4'; 
        Map[row+3][column + 16] = '2';  
    }
    if (Health == 4)
    {   
        Map[row+3][column + 1] = 'H'; 
        Map[row+3][column + 2] = 'E'; 
        Map[row+3][column + 3] = 'R'; 
        Map[row+3][column + 4] = 'O'; 
        Map[row+3][column + 5] = ' '; 
        Map[row+3][column + 6] = 'H'; 
        Map[row+3][column + 7] = 'E'; 
        Map[row+3][column + 8] = 'A'; 
        Map[row+3][column + 9] = 'L';
        Map[row+3][column + 10] = 'T'; 
        Map[row+3][column + 11] = 'H';
        Map[row+3][column + 12] = ' '; 
        Map[row+3][column + 13] = ':'; 
        Map[row+3][column + 14] = ' '; 
        Map[row+3][column + 15] = '3'; 
        Map[row+3][column + 16] = '5';  
    }
    if (Health == 3)
    {
        Map[row+3][column + 1] = 'H'; 
        Map[row+3][column + 2] = 'E'; 
        Map[row+3][column + 3] = 'R'; 
        Map[row+3][column + 4] = 'O'; 
        Map[row+3][column + 5] = ' '; 
        Map[row+3][column + 6] = 'H'; 
        Map[row+3][column + 7] = 'E'; 
        Map[row+3][column + 8] = 'A'; 
        Map[row+3][column + 9] = 'L';
        Map[row+3][column + 10] = 'T'; 
        Map[row+3][column + 11] = 'H';
        Map[row+3][column + 12] = ' '; 
        Map[row+3][column + 13] = ':'; 
        Map[row+3][column + 14] = ' '; 
        Map[row+3][column + 15] = '2'; 
        Map[row+3][column + 16] = '7';  
    }
    if (Health == 2)
    {
        Map[row+3][column + 1] = 'H'; 
        Map[row+3][column + 2] = 'E'; 
        Map[row+3][column + 3] = 'R'; 
        Map[row+3][column + 4] = 'O'; 
        Map[row+3][column + 5] = ' '; 
        Map[row+3][column + 6] = 'H'; 
        Map[row+3][column + 7] = 'E'; 
        Map[row+3][column + 8] = 'A'; 
        Map[row+3][column + 9] = 'L';
        Map[row+3][column + 10] = 'T'; 
        Map[row+3][column + 11] = 'H';
        Map[row+3][column + 12] = ' '; 
        Map[row+3][column + 13] = ':'; 
        Map[row+3][column + 14] = ' '; 
        Map[row+3][column + 15] = '1'; 
        Map[row+3][column + 16] = '9';  
    }
    if (Health == 1)
    {
        Map[row+3][column + 1] = 'H'; 
        Map[row+3][column + 2] = 'E'; 
        Map[row+3][column + 3] = 'R'; 
        Map[row+3][column + 4] = 'O'; 
        Map[row+3][column + 5] = ' '; 
        Map[row+3][column + 6] = 'H'; 
        Map[row+3][column + 7] = 'E'; 
        Map[row+3][column + 8] = 'A'; 
        Map[row+3][column + 9] = 'L';
        Map[row+3][column + 10] = 'T'; 
        Map[row+3][column + 11] = 'H';
        Map[row+3][column + 12] = ' '; 
        Map[row+3][column + 13] = ':'; 
        Map[row+3][column + 14] = ' '; 
        Map[row+3][column + 15] = '7'; 
        Map[row+3][column + 16] = ' ';  
    }

    if (Lives == 3)
    {
        Map[row+4][column+1] = 'L';
        Map[row+4][column+2] = 'I';
        Map[row+4][column+3] = 'V';
        Map[row+4][column+4] = 'E';
        Map[row+4][column+5] = 'S';
        Map[row+4][column+6] = ' ';
        Map[row+4][column+7] = ':';
        Map[row+4][column+8] = ' ';
        Map[row+4][column+9] = '3';
    }

    if (Lives == 2)
    {
        Map[row+4][column+1] = 'L';
        Map[row+4][column+2] = 'I';
        Map[row+4][column+3] = 'V';
        Map[row+4][column+4] = 'E';
        Map[row+4][column+5] = 'S';
        Map[row+4][column+6] = ' ';
        Map[row+4][column+7] = ':';
        Map[row+4][column+8] = ' ';
        Map[row+4][column+9] = '2';
    }

    if (Lives == 1)
    {
        Map[row+4][column+1] = 'L';
        Map[row+4][column+2] = 'I';
        Map[row+4][column+3] = 'V';
        Map[row+4][column+4] = 'E';
        Map[row+4][column+5] = 'S';
        Map[row+4][column+6] = ' ';
        Map[row+4][column+7] = ':';
        Map[row+4][column+8] = ' ';
        Map[row+4][column+9] = '1';
    }

    if (Lives == 0)
    {
        flagGameOver = 1;
    }
    if (Health == 0 && CheckPointFlag == 1)
    {
        rHero = IndR;
        IndR = 186 ;
        rHero = IndR;
        IndC = 5 ;
        cHero = IndC;
        mapRowStart = 168;
        mapRowEnd = 198 ;
        mapColS = 0;
        mapColE = 90;
        Health = 6;

        Lives --;
 
    }

    if (Health == 0 && CheckPointFlag == 2)
    {
        rHero = IndR;
        IndR = 187 ;
        rHero = IndR;
        IndC = 280 ;
        cHero = IndC;
        mapRowStart = 168;
        mapRowEnd = 198 ;
        mapColS = 205;
        mapColE = 295;
        Health = 6;

        Lives--;
    }

    if (Health == 0 && CheckPointFlag == 3)
    {
         rHero = IndR;
        IndR = 146 ;
        rHero = IndR;
        IndC = 50 ;
        cHero = IndC;
        mapRowStart = 127;
        mapRowEnd = 157 ;
        mapColS = 30;
        mapColE = 120;
        Health = 6;

        Lives--;   
    }

    
}


void ExitDoor(char Map[][300] , int IndR , int IndC , int &FlagGameOver)
{
    int c = 288;
    Map [130][c++] = 'E';
    Map [130][c++] = 'X';
    Map [130][c++] = 'I';
    Map [130][c++] = 'T';


    int r = 132;
    Map [r++][293] = '|';
    Map [r++][293] = '|';
    Map [r++][293] = '|';
    Map [r++][293] = '|';
    Map [r++][293] = '|';
    Map [r++][293] = '|';

    c = 287;
    Map[131][c++] = '_';
    Map[131][c++] = '_';
    Map[131][c++] = '_';
    Map[131][c++] = '_';
    Map[131][c++] = '_';
    Map[131][c++] = '_';

    r = 132;
    Map [r++][286] = '|';
    Map [r++][286] = '|';
    Map [r++][286] = '|';
    Map [r++][286] = '|';
    Map [r++][286] = '|';
    Map [r++][286] = '|';


    if (IndR < 150 && IndC == 286-3)
    {
        FlagGameOver =1;
    }

}
int main()
{
    char Map[200][300];
    int rowElevatorAboveWater = 182 , columnElevatorAboveWater = 191 , DirectionElevatorAboveWater = 1; 
    char UserMove = 'G';
    int rowMapBorderStart = 170, rowMapBorderEnd = 200, colMapBorderStart = 0, colMapBorderEnd = 90;
    int FlagBarrierAtLevel1 = 1;
    int rowElevatorToLevel3 = 170  , columnElevatorToLevel3 = 73 , DirectionElevatorToLevel3 = 1;
    int rHero = 187 , cHero = 5 , flagHeroElevatorAboveWater = 0;
    int IndexRowHero , IndexColumnHero;
    int ctJump = 0 , flagJump = 0 , JumpAgain = 0;
    int MidPointRowElev , MidPointColElev;
    int IndexRLvl3 , IndexCLvl3;
    int flagHeroElevatorLvl3 = 0;
    int SingleBulletRow = -1, SingleBulletCol = -1;
    int LevelCount = 1;
    int FlagLadder = 0;
    int FlagPistol = 0;
    int FlagEnemy1 = 0 , cBulletEnemy1 = 284;
    int ctActivateLaser=0;
    int flagGameOver = 0;
    int CloudRainCol1 , CloudRainRow1 = 176 , flagrain1 = 0;
    int CloudRainCol2 , CloudRainRow2 = 187 , flagrain2 = 0;
    int CloudRainCol3 , CloudRainRow3 = 183 , flagrain3 = 0;
    int CloudRainCol4 , CloudRainRow4 = 181 , flagrain4 = 0;
    int ctcloud = 0;
    int GameOver = 0 , Health = 6;
    int CheckPointFlag = 1;
    int CheckPointRow = 185; 
    int CheckPointCol = 5;
    int constantrainrow = 179;
    int FlagLaserLevel3 = 0;
    int countGameOver = 0;
    int columnEnemy2 = 0;
    int columnBoss = 0;
    int bulletX = -1, bulletY = -1;
    int bulletXR = -1, bulletYR = -1;
    int FlagDeadEnemy1 = 0;
    int HeroLives = 3;
    int HealthEnemy2 = 10 , FlagDeadEnemy2 = 0 , TimerEnemy2 = 1 , MoveEnemyToHero = 0 , IndexColumnEnemy2 , HitEnemy2 , HitEnemy2L;
    int HPFinalBoss = 40 , FlagFinalBoss = 0 , TimerFinalBoss = 1 , MoveBossToHero = 0 , IndexColumFinalBoss , HitBoss , HitBossL;
    int FinalBossBullets = 208;
    int rBoss = 148 , cBoss =210;


    int width = 300;
    int height = 300;
    int numBullets = 0;
    int bulletRows[100];
    int bulletCols[100];
    int bulletActive[100];
        int enemyFlag = 0;

        int flagAK = 0;


    for (;;)
    {
        for (; !_kbhit() ;)
        {
            if (GameOver == 0)
            {

            ctcloud++;
            srand(time(0));
            ctActivateLaser++;


            Clear_and_Draw_Map(Map);

            DrawLevel1(Map);
            DrawLevel2(Map);
            DrawLevel3(Map);

            if (flagrain1 == 0)
                CloudRainCol1 = randRains(107,109);

            rains1(Map , CloudRainRow1 , CloudRainCol1);
            MoveRain1(Map , CloudRainRow1 , CloudRainCol1 , flagrain1 , constantrainrow , ctcloud ,IndexRowHero , IndexColumnHero , Health);

            if (flagrain3 == 0)
                CloudRainCol3 = randRains(123,126);

            rains3(Map , CloudRainRow3 , CloudRainCol3);
            MoveRain3(Map , CloudRainRow3 , CloudRainCol3 , flagrain3 , constantrainrow , ctcloud ,IndexRowHero , IndexColumnHero , Health);

            DrawAndRemovePistolLevel2(Map , IndexRowHero , IndexColumnHero , FlagPistol , MoveEnemyToHero);

            DrawEnemyToLadderLevel2(Map , FlagDeadEnemy1);
            EnemyToLadderLevel2Bullets(Map , IndexRowHero , IndexColumnHero , FlagEnemy1 , cBulletEnemy1 , FlagDeadEnemy1 , Health);

            MoveElevatorAboveWater(Map , rowElevatorAboveWater , columnElevatorAboveWater ,DirectionElevatorAboveWater , IndexRowHero , IndexColumnHero , rHero , cHero , flagHeroElevatorAboveWater ,MidPointRowElev , MidPointColElev ,colMapBorderStart , colMapBorderEnd);
            DrawElevatorAboveWater(Map , rowElevatorAboveWater , columnElevatorAboveWater , MidPointRowElev , MidPointColElev);

            DrawAndRemoveBarrierAtLevel1(Map , rHero , cHero , FlagBarrierAtLevel1 , IndexRowHero , IndexColumnHero);

            MoveElevatorToLevel3(Map , rowElevatorToLevel3 , columnElevatorToLevel3 ,DirectionElevatorToLevel3 , rHero , cHero , IndexRowHero ,IndexColumnHero , flagHeroElevatorLvl3 ,IndexRLvl3 , IndexCLvl3 ,rowMapBorderStart , rowMapBorderEnd );
            DrawElevatorToLevel3(Map , rowElevatorToLevel3 , columnElevatorToLevel3);

            DrawLaserTrapLevel3(Map);
            if(ctActivateLaser%15==0 ||ctActivateLaser%20==0 || ctActivateLaser%25==0)
            {
                FlagLaserLevel3 = 1;
            }
            else {
                FlagLaserLevel3 = 0;
            }

            if (FlagLaserLevel3 == 1)
            {
                DrawLaser(Map , LevelCount , IndexColumnHero , Health);
            }


            CheckPoints (Map , rHero , cHero , IndexRowHero , IndexColumnHero , rowMapBorderStart , rowMapBorderEnd , colMapBorderStart , colMapBorderEnd , CheckPointFlag , Health , flagAK);
            LevelChecker(IndexRowHero , LevelCount);

            Jump(Map , rHero ,cHero , ctJump , flagJump , rowMapBorderStart , rowMapBorderEnd , JumpAgain , IndexRowHero , IndexColumnHero);
            Gravity(Map , rHero ,cHero , ctJump , rowMapBorderStart , rowMapBorderEnd , JumpAgain , IndexRowHero , IndexColumnHero , FlagLadder);

            Draw_Hero(Map , rHero , cHero , IndexRowHero , IndexColumnHero , FlagPistol , UserMove);

            
            TimerEnemy2++;
            MoveEnemy2 (columnEnemy2 , IndexColumnHero , MoveEnemyToHero , IndexColumnEnemy2 , Health , LevelCount , MoveEnemyToHero , FlagDeadEnemy2);
            DrawEnemy2(Map , columnEnemy2 , FlagDeadEnemy2 , TimerEnemy2 , IndexColumnEnemy2 , HitEnemy2 , HitEnemy2L);
            DrawHealthEnemy2(Map , HealthEnemy2 , FlagDeadEnemy2 , TimerEnemy2 , columnEnemy2 , FlagPistol);


            MoveFinalBoss (columnBoss , IndexColumnHero ,IndexRowHero, MoveBossToHero , IndexColumFinalBoss , Health , LevelCount , MoveBossToHero ,FlagFinalBoss);
            DrawFinalBoss(Map , columnBoss , FlagFinalBoss , TimerFinalBoss , IndexColumFinalBoss , HitBoss , HitBossL , rBoss , cBoss);
            HealthFinalBoss(Map , HPFinalBoss , FlagFinalBoss , TimerFinalBoss , columnBoss , LevelCount , FlagPistol);
            FinalBossBullet(Map , IndexRowHero , IndexColumnHero , FinalBossBullets , FlagFinalBoss , Health , LevelCount , HitBoss);


    
            if ((UserMove == 'Y' || UserMove == 'y') && bulletX == -1 && bulletY == -1 && FlagPistol == 1) 
            {
                 shootSingleBullet(Map, IndexRowHero , IndexColumnHero ,bulletX, bulletY);
            }


            if (UserMove == 'y',bulletX != -1 && bulletY != -1 && FlagPistol == 1 ) 
            {
                moveSingleBullet(Map, IndexRowHero , IndexColumnHero ,bulletX, bulletY , FlagDeadEnemy1 , HealthEnemy2 , HitEnemy2 , HitBossL , HPFinalBoss);
            }


            if ((UserMove == 'U' || UserMove == 'u') && bulletXR == -1 && bulletYR == -1 && FlagPistol == 1) 
            {
                 shootSingleBulletR(Map, IndexRowHero , IndexColumnHero ,bulletXR, bulletYR);
            }


            if (UserMove == 'u' && bulletXR != -1 && bulletYR != -1 && FlagPistol == 1) 
            {
                moveSingleBulletR(Map, IndexRowHero , IndexColumnHero ,bulletXR, bulletYR , FlagDeadEnemy1 , HealthEnemy2 , HitEnemy2L , HitBoss , HPFinalBoss);
            }
            

             if ((UserMove == 'l' || UserMove == 'L') && flagAK == 1) {

                numBullets++;
                shootMultipleBullets(Map, IndexRowHero, IndexColumnHero, bulletRows, bulletCols, bulletActive, numBullets);
            }

            if (flagAK == 1)
            {
            moveMultipleBullets(Map, IndexRowHero , IndexRowHero, IndexColumnHero, bulletRows, bulletCols, bulletActive, numBullets, height, enemyFlag , HitBoss , HPFinalBoss);
            }
            
            CreateStatus(Map, Health,  flagGameOver, rowMapBorderStart, colMapBorderStart , IndexRowHero , IndexColumnHero , CheckPointRow , CheckPointCol , rHero , cHero , CheckPointFlag , rowMapBorderStart , rowMapBorderEnd , colMapBorderStart , colMapBorderEnd , HeroLives);
            ExitDoor(Map , IndexRowHero , IndexColumnHero , flagGameOver);
            Cout_Map_to_Screen(Map, UserMove, rowMapBorderStart, rowMapBorderEnd, colMapBorderStart, colMapBorderEnd , IndexRowHero , IndexColumnHero);

            CreateStatus(Map, Health,  flagGameOver, rowMapBorderStart, colMapBorderStart , IndexRowHero , IndexColumnHero , CheckPointRow , CheckPointCol , rHero , cHero , CheckPointFlag , rowMapBorderStart , rowMapBorderEnd , colMapBorderStart , colMapBorderEnd , HeroLives);


            if (FlagFinalBoss == 1)
            {
                FlagPistol = 0;
            }
            if (flagGameOver == 1)
            {
                GameOver = 1;
            }


            }

            if (flagGameOver == 1)
            {
                GameOver = 1;
                countGameOver++;
            }

            if (GameOver == 1 && countGameOver == 1)
            {
                system("cls");
                for (int row = 0; row < 200; row++)
                {
                    for (int col = 0; col < 300; col++)
                    {
                        Map[row][col] = ' ';
                    }
                }
                DrawGameOver(Map , flagGameOver);
            }
        }

        //OUTSIDE THE KBHIT LOOP
        UserMove = _getch();
        

        

        Move_Hero(Map ,rHero , cHero , UserMove , FlagBarrierAtLevel1 , IndexRowHero , IndexColumnHero , flagJump , LevelCount , FlagPistol , colMapBorderStart , colMapBorderEnd , GameOver , rowMapBorderStart , rowMapBorderEnd);
//        Draw_Hero(Map , rHero , cHero , IndexRowHero , IndexColumnHero , FlagPistol , UserMove);
        

    }



}
