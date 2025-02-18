#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string:");
    scanf("%s",&str);
    vowelsconsonants(str);
    return 0;
}
void vowelsconsonants(char str[])
{
    int vowel=0,consonant=0;
    int len =strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'A'|| str[i] == 'E'|| str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
        printf("\n");
    printf("number of vowels:%d\n",vowel);
    printf("number of consonants:%d\n",consonant);
}
