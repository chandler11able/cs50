#include <stdio.h>
#include <cs50.h>


int user;
int x;
int y;

int main(void){ 
    printf("How many High? Between 0 and 100");

do
{
    user = get_int(":"); //This stores the users info
}
while ((user < 0) || (user > 100)); 

for (x = 1; x <= user; x++){ //this loop creates the blocks

    for (int length = 1; length <= (x + 1); length++)
    {
        printf("#");
    }
    printf("\n");
}
}