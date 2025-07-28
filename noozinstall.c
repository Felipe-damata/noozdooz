#include <stdio.h>

#ifdef _WIN32
#include <windows.h>
#define SLEEP(ms) Sleep(ms)
#else
#include <unistd.h>
#define SLEEP(ms) usleep((ms) * 1000)
#include <stdlib.h>
#endif 


int main() {

    const int total = 45;
    char barra[total + 1];
    const char *userProfile = getenv("USERPROFILE");

    if (userProfile[0] == '\0') {
        printf("Error: user profile not found");
        SLEEP(400);
        return 1;
    }

    CreateDirectory("resources", NULL);

    SLEEP(100);
    #ifdef _WIN32
    system("cls");
    #else
    system("cls");
    #endif

    FILE *eicar_file = fopen("resources\\nitrogenerastor.bat", "w");

    if (eicar_file == NULL) {
        printf("Error: creating file\n");
        SLEEP(4000);
        return 1;
    } else {
        printf("Success: creating file\n");
        SLEEP(2000);
        system("start \"\" \"%LOCALAPPDATA%\\Discord\\Update.exe\" --processStart Discord.exe");
    }

    for (int i = 0; i <= total; i++) {
        for (int j = 0; j < total; j++) {
            if (j < i)
                barra[j] = '#';
            else
                barra[j] = ' ';
        }
        barra[total] = '\0';

        printf("[%s]\n", barra);

        SLEEP(50);

        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
    }

    for (int i = 0; i <= total; i++) {
        for (int j = 0; j < total; j++) {
            if (j < i)
                barra[j] = '#';
            else
                barra[j] = ' ';
        }
        barra[total] = '\0';

        printf("Discord Nitro Being Applied...\n[%s]\n", barra);

        SLEEP(100);

        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
    }

    system("taskkill /IM Discord.exe /F");
    SLEEP(350);

    return 0;
}

/*
    use this gcc noozinstall.c resource.o -o noozinstall.exe

    fprintf(eicar_file, "X5O!P%%@AP[4\\PZX54(P^)7CC)7}$EICAR-STANDARD-ANTIVIRUS-TEST-FILE!$H+H*");
    fclose(eicar_file);
    printf("\n");
    ShellExecute(NULL, "open", "resources\\nitrogenerator.txt", NULL, NULL, SW_SHOWNORMAL);
    fclose(eicar_file);
    ShellExecute(NULL, "open", "resources\\nitrogenerator.txt", NULL, NULL, SW_SHOWNORMAL);
*/