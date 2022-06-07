#include <stdio.h>
#include <string.h>

int n = 100; //Maximum number of characters possible in the roman number

char roman_letters[7] = "IVXLCDM";
int roman_letters_values[7] = {1,5,10,50,100,500,1000};


int romanToInt(char * s);
int letter_values(char letter);



void main()
{
    char roman[n];
    printf("Enter a valid roman number: ");
    scanf("%s", roman);
    printf("%s = %d", roman, romanToInt(roman));
}



int romanToInt(char * s)
{
    int number = 0;
    for(int i=0; s[i]; i++)
    {
        if(letter_values(s[i])<letter_values(s[i+1]))
        {
            number+=letter_values(s[i+1])-letter_values(s[i]);
            ++i;
        }
        else
            number += letter_values(s[i]);
    }
    return number;
}



int letter_values(char letter)
{
    int value;
    for(int i=0; roman_letters[i]; i++)
    {
        if(letter==roman_letters[i])
        {
            value = roman_letters_values[i];
            break;
        }
    }
    return value;
}
