#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void admin(){
    char adminID;
    char adminPass;
    printf("            Admin : \n");
    scanf("%g\n", &adminID);
    printf("            Password : \n");
    scanf("%g\n", &adminPass);
}

int main()
{
    char username;
    char userPass;
    float option;

    printf("            Welcome to GetMovies Now\n\n\n");
    printf("            Let's login first!\n");
    printf("            01> Admin       02> User\n");
    scanf("             %f\n", &option);

    if (option == 01)
    {
        admin();
        return  0;
    }
    
    
    return 0;
}
