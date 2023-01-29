#include <stdio.h>


void capitalize(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++)
{
    // Do something with str[i]
    if (str[0] >= 'a' && str[0] <= 'z') {
        str[i] -= 32;
    }
    if (str[i] >= 'a' && str[i -1] == ' ') {
        str[i] -= 32;
    }
}

}


int main() {
    char str[100];
    printf("Enter a word: ");
    fgets(str, 100, stdin);
    capitalize(str);
    printf("In caps: %s\n", str);

    return 0;
}
