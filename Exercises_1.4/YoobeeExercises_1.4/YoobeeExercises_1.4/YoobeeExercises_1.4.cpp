// YoobeeExercises_1.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <algorithm>
#include <string>
#include <limits>  
using namespace std;

bool CheckIsInt(double d);
bool CheckIsUnsignedInt(double d);

void CS102_EXCIS_I_1(); //1. Evaluate the expression: Z = ax +(b-c)(c-d)/y 
void CS102_EXCIS_I_2(); //2. Write a program to find smallest of three numbers.
void CS102_EXCIS_I_3(); //3. Write a program to find a given number is prime or not. Read a number from user and display as per the output format.
void CS102_EXCIS_I_4(); //4. Write a program to generate even numbers between two different values. Proceed to verify the given inputs are not null.
void CS102_EXCIS_I_5(); //5. Write a program to generate an odd list between 20 to 47 and count number of odds in the list.Display your result as per the output format.
void CS102_EXCIS_I_6(); //6. Write a program to generate Fibonacci series as per the user input. 
void CS102_EXCIS_I_7(); //7. Write a program to read a number from user, find factorial for the given number and display as like,
void CS102_EXCIS_I_8(); //8. Write a program to display the pattern below as per the user input. 
void CS102_EXCIS_I_9(); //9. Write a program to read a value from user and display the place value.
void CS102_EXCIS_I_10(); //10. Write a program to generate the following pattern
void CS102_EXCIS_I_11(); //11. Write a program to read the first name and last name. Validate the user inputs as follows: • Verify first name and last name are different • Verify the name contains only alphabets 
void CS102_EXCIS_I_12(); //12. Write a program to read a sentence and display. Count number of words, special characters and vowels in the sentence and display as follows,
void CS102_EXCIS_I_13(); //13. write a program to generate 10 random numbers as per the user input range. Count number of repeated numbers in the list and display.
void CS102_EXCIS_I_14(); //14. write a program to create an integer array of size 10 and display. Count number of even numbers and number of odds in the list and display as follows
void CS102_EXCIS_I_15(); //15. write a program to read 5 different double values and store in an array called double list.Sort the array elements and display the sorted list.

void CS102_EXCIS_II_1();
void CS102_EXCIS_II_2();
void CS102_EXCIS_II_3();

void CS102_EXCIS_III_1();
void CS102_EXCIS_III_2();
void CS102_EXCIS_III_3();
void CS102_EXCIS_III_4();
void CS102_EXCIS_III_5();
void CS102_EXCIS_III_6();

int main()
{
    //CS102_EXCIS_I_1();
    //CS102_EXCIS_I_2();
    //CS102_EXCIS_I_3();
    //CS102_EXCIS_I_4();
    CS102_EXCIS_I_5();
}

bool CheckIsInt(double d)
{
    // check in the range of Integer
    if (d < std::numeric_limits<int>::min() || d > std::numeric_limits<int>::max()) {
        return false;
    }

    // check is not a float or double type 
    if (d != static_cast<int>(d)) {
        return false;
    }

    return true;
}

bool CheckIsUnsignedInt(double d)
{
    // check in the range of Integer
    if (d < 0 || d > std::numeric_limits<unsigned int>::max()) {
        return false;
    }

    // check is not a float or double type 
    if (d != static_cast<unsigned int>(d)) {
        return false;
    }

    return true;
}

void CS102_EXCIS_I_1() { //1. Evaluate the expression: Z = ax +(b-c)(c-d)/y 
    float a = 0, b = 0, c = 0, d = 0, x = 0, y = 0, Z = 0;

    cout << "      \"Z = ax +(b-c)(c-d)/y\"" << endl;

    cout << "Enter a value (e.g. 37944): ";
    cin >> a;

    cout << "Enter b value (e.g. 3): ";
    cin >> b;

    cout << "Enter c value (e.g. 2): ";
    cin >> c;

    cout << "Enter d value (e.g. 1): ";
    cin >> d;

    cout << "Enter x value (e.g. 2): ";
    cin >> x;

    cout << "Enter y value (e.g. 1): ";
    while (cin >> y && y == 0 )
        cout << "Please enter a non-zero value: ";

    Z = a *  x + ( b - c) * (c - d) / y;
    cout << "      Z = " << Z << endl;
}

void CS102_EXCIS_I_2() { //2. Write a program to find smallest of three numbers.
    struct InputList {
        char m_char;
        float m_input;
    };

    float arrVar1[3] = { 0 };
    InputList arrVar2[3] = { 0 };

    for (int i = 0; i < 3; i++) {
        cout << "Enter " << (char)('A' + i) << " value: ";
        cin >> arrVar1[i];

        arrVar2[i].m_char = (char)('A' + i);
        arrVar2[i].m_input = arrVar1[i];
    }

    std::sort(arrVar1, arrVar1 + sizeof(arrVar1) / sizeof(arrVar1[0]));

    for (int i = 0; i < 3; i++)
    {
        if (arrVar2[i].m_input == arrVar1[0]) {
            cout << "      \"" << arrVar2[i].m_char << " is smallest.\"" << endl;
            break;
        }
    }
}

void CS102_EXCIS_I_3() { //3. Write a program to find a given number is prime or not. Read a number from user and display as per the output format.
    float fVar1 = 0;
    cout << "  Prime Check" << endl 
         << "  **********" << endl
         << "Enter a number: ";
    while (cin >> fVar1 && !CheckIsUnsignedInt( fVar1 ) )
        cout << "Please enter a Whole Number: ";

    bool blnVar2 = true; // true means it's a prime number
    if (fVar1 < 2) {
        blnVar2 = false;
    }
    else {
        for (int i = 2; i * i <= fVar1; ++i)
        {
            if ((int)fVar1 % i == 0)
            {
                blnVar2 = false;
            }
        }
    }

    cout << "      \"" << fVar1 << " is " << (blnVar2 ? "" : "not ") << "a prime number.\"" << endl;
    
}

void CS102_EXCIS_I_4() { //4. Write a program to generate even numbers between two different values. Proceed to verify the given inputs are not null.
    float fStarting = 0, fEnding = 0;
    cout << "Even Number Generation" << endl
         << "~~~~~~~~~~~~~~~~~~~~~~" << endl
         << "Enter starting number: ";
    while (cin >> fStarting && (!CheckIsUnsignedInt(fStarting)||fStarting == 0))
        cout << (fStarting == 0? "Please provide not null values: " : "Please provide a Whole Number: ");

    cout << "Enter final number: ";
    while (cin >> fEnding && (!CheckIsUnsignedInt(fEnding) || fEnding == 0))
        cout << (fEnding == 0 ? "Please provide not null values: " : "Please provide a Whole Number: ");

    if (fStarting > fEnding)
    {
        cout << "The starting number should be less than or equal to the ending number. Please re-enter." << endl;
    }
    else
    {
        cout << "Even list between " << fStarting << " and " << fEnding << ": ";

        string strOut = "";
        for (int i = fStarting; i <= fEnding; ++i) 
        {
            if (i % 2 == 0) // check if it is a even number or not.
                strOut.append(", " + to_string(i));
        }
        if (strOut != "")
             cout << strOut.substr(2) << endl;
    }
}
void CS102_EXCIS_I_5() { //5. Write a program to generate an odd list between 20 to 47 and count number of odds in the list.Display your result as per the output format.
    int j = 0;
    string strOut = "";
    for (int i = 20; i <= 47; ++i)
    {
        if (i % 2 != 0) // check if it is a odd number or not.
        {
            strOut.append(", " + to_string(i));
            ++j;
        }
    }

    cout << "Odd list between 20 to 47: " << strOut.substr(2) << endl
         << "Number of Odds between 20 to 47: " << j << endl;

}
void CS102_EXCIS_I_6() { //6. Write a program to generate Fibonacci series as per the user input. 
}
void CS102_EXCIS_I_7() { //7. Write a program to read a number from user, find factorial for the given number and display as like,
}
void CS102_EXCIS_I_8() { //8. Write a program to display the pattern below as per the user input. 
}
void CS102_EXCIS_I_9() { //9. Write a program to read a value from user and display the place value.
}
void CS102_EXCIS_I_10() { //10. Write a program to generate the following pattern
}
void CS102_EXCIS_I_11() { //11. Write a program to read the first name and last name. Validate the user inputs as follows: • Verify first name and last name are different • Verify the name contains only alphabets 
}
void CS102_EXCIS_I_12() { //12. Write a program to read a sentence and display. Count number of words, special characters and vowels in the sentence and display as follows,
}
void CS102_EXCIS_I_13() { //13. write a program to generate 10 random numbers as per the user input range. Count number of repeated numbers in the list and display.
}
void CS102_EXCIS_I_14() { //14. write a program to create an integer array of size 10 and display. Count number of even numbers and number of odds in the list and display as follows
}
void CS102_EXCIS_I_15() { //15. write a program to read 5 different double values and store in an array called double list.Sort the array elements and display the sorted list.
}

void CS102_EXCIS_II_1() {}
void CS102_EXCIS_II_2() {}
void CS102_EXCIS_II_3() {}

void CS102_EXCIS_III_1() {}
void CS102_EXCIS_III_2() {}
void CS102_EXCIS_III_3() {}
void CS102_EXCIS_III_4() {}
void CS102_EXCIS_III_5() {}
void CS102_EXCIS_III_6() {}