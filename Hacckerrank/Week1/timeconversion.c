#include <stdio.h>
#include <string.h>

void timeConversion(char s[]) {
    int hour;
    char period[3];
    hour = (s[0] - '0') * 10 + (s[1] - '0');
    period[0] = s[8];
    period[1] = s[9];
    period[2] = '\0';

    if (strcmp(period, "AM") == 0) {
        if (hour == 12)
            hour = 0;
    } else { // PM
        if (hour != 12)
            hour += 12;
    }
    printf("%02d:%c%c:%c%c\n", hour, s[3], s[4], s[6], s[7]);
}

int main() {
    char s[11];
    scanf("%s", s);
    timeConversion(s);
    return 0;
}
