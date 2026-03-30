#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// wallpaper_len은 배열 wallpaper의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* wallpaper[], size_t wallpaper_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 4);
    // 정답이 [lux, luy, rdx, rdy] 총 4칸이므로 4개 할당
    
    int minRow = wallpaper_len; // 가장 위쪽 행
    int minCol = strlen(wallpaper[0]); // 가장 왼쪽 열
    int maxRow = 0; // 가장 아래쪽 행
    int maxCol = 0; // 가장 오른쪽 열

    for (int i = 0; i < wallpaper_len; i++) {
        for (int j = 0; j < strlen(wallpaper[i]); j++) {
            if (wallpaper[i][j] == '#') {
                if (i < minRow) minRow = i;
                if (j < minCol) minCol = j;
                if (i > maxRow) maxRow = i;
                if (j > maxCol) maxCol = j;
            }
        }
    }

    answer[0] = minRow;
    answer[1] = minCol;
    answer[2] = maxRow + 1;
    answer[3] = maxCol + 1;

    return answer;
}