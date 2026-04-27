#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int dateToDays(const char* date)
{
    int year, month, day;
    sscanf(date, "%d.%d.%d", &year, &month, &day);

    return year * 12 * 28 + month * 28 + day;
}

int* solution(const char* today, const char* terms[], size_t terms_len, const char* privacies[], size_t privacies_len) {
    int todayDays = dateToDays(today);

    int termMap[26] = {0};

    for (int i = 0; i < terms_len; i++)
    {
        char type;
        int month;

        sscanf(terms[i], "%c %d", &type, &month);
        termMap[type - 'A'] = month;
    }

    int* answer = (int*)malloc(sizeof(int) * privacies_len);
    int answerCount = 0;

    for (int i = 0; i < privacies_len; i++)
    {
        char date[11];
        char type;

        sscanf(privacies[i], "%s %c", date, &type);

        int startDays = dateToDays(date);
        int expireDays = startDays + termMap[type - 'A'] * 28;

        if (expireDays <= todayDays)
        {
            answer[answerCount++] = i + 1;
        }
    }

    return answer;
}