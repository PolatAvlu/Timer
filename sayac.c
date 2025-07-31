#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>

void clear_screen() {
    printf("\033[2J\033[1;1H"); // Terminali temizle ve imleci başa al
}

int main() {
    int seconds = 0;

    while (1) {
        int hrs = seconds / 3600;
        int mins = (seconds % 3600) / 60;
        int secs = seconds % 60;

        clear_screen();

        // ANSI renk kodları: sarı, kalın, reset
        printf("\033[1;33m");
        printf("╔══════════════════════╗\n");
        printf("║ ⏱ POLAT BABA 22  ⏱   ║\n");
        printf("╚══════════════════════╝\n\n");

        printf("   Geçen Süre: \033[1;36m%02d:%02d:%02d\033[0m\n", hrs, mins, secs);

        fflush(stdout);
        sleep(1);
        seconds++;
    }

    return 0;
}
