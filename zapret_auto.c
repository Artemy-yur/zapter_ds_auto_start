#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

void start_alt(int alt)
{
    Sleep(3000);
    char command[256];

    if (alt == 0)
    {
        sprintf(command, "cd /d \"C:\\Users\\Desktop\\zapret-discord-youtube-1.9.1 (2)\" && start \"\" \"general (ALT).bat\""); //тут надо путь для вашего файла
    }
    else
    {
        sprintf(command, "cd /d \"C:\\Users\\Desktop\\zapret-discord-youtube-1.9.1 (2)\" && start \"\" \"general (ALT%d).bat\"", alt);//тут надо путь для вашего файла
    }

    system(command);
    Sleep(3000);
}

int main(void)
{
    int alt = 0;
    FILE *cfg = fopen("C:\\Users\\Desktop\\zapret-discord-youtube-1.9.1 (2)\\config.txt", "r");//тут надо путь для вашего файла
    if (cfg)
    {
        fscanf(cfg, "%d", &alt);
        fclose(cfg);
    }

    start_alt(alt);

    return 0;
}
