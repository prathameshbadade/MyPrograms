#include <stdio.h>
#include <stdlib.h>

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

int Addition(
                int iNo1,           //First Input
                int iNo2            //Second Input
            )
{
    int Ans = 0;
    Ans = iNo1 + iNo2;              //Buisness Logic
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

    return EXIT_SUCCESS;
}

///////////////////////////////////////////////////
//  
//      Step 5 : Test the program
//      
//      Test the cases     
//-----------------------------------------------------
//      Input1      Input2      Output
//----------------------------------------------------
//       10          11           21
//       11           0           11
//        0           11           0
//        20          -9          11
//
//
//
//
//
/////////////////////////////////////////////////


