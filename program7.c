/*
    Step 1 : Understand the problem statement.
    Step 2 : Write the Algorithm.
    Step 3 : Decide the programming language.
    Step 4 : Write the Program
    Step 5 : Test the program
*/

///////////////////////////////////////////////////////
//                                                   //
//  Step 1 : Understand the problem statement.       //
//           User is going to enter two integers     //
//            and we have to perform addition.     //
//                                                   
///////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//                                                          
/*                                                          
      Step 2 : Write the Algorithm                          
                                                            
              START 
                  Accept first number as No1
                  Accept second number as No2
                 Create the variable as Ans to store result
                  Perform thr addition and store int Ans
                  Display the result from Ans
             END
*/
//
////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
//
//  Step 3 : Decide the Programming language
//
////////////////////////////////////////////////////////

///////////////////////////////////////////////////////
//
//  Step 4 : Write the Program
//
///////////////////////////////////////////////////////


#include <stdio.h>

//////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Input         : Integer, Integer
//  Output        : Integer
//  Description   : Performs addition
//  Date          : 04/10/2026
//  Author        : Prathamesh Balasaheb Badade
//
/////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int Ans = 0;
    Ans = iNo1 + iNo2;          //Buisness Logic
    return Ans;
}


///////////////////////////////////////////////////////////
//
//  Entry point of the application
//
///////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0 , iValue2 = 0, iResult = 0;

    printf("Enter First Number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second Number :\n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);      

    printf("Addition is : %d \n", iResult);

    return 0;
}

