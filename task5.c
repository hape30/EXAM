#include <stdio.h>
#include <stdlib.h>

struct University {
    char* name;
    int numberOfStudents;
    int rating;
};

float averageStudents(struct University data[], int n) {
    int totalStudents = 0;

    for (int i = 0; i < n; i++) {
        totalStudents += data[i].numberOfStudents;
    }

    return ((float) totalStudents) / n;
}

int main() {
    // пример данных для тестирования функции
    struct University universities[3] = {
        {"Harvard", 21000, 10},
        {"MIT", 11000, 9},
        {"Stanford", 16000, 8}
    };

    float average = averageStudents(universities, 3);
    printf("Среднее количество студентов: %.2f\n", average);

    return 0;
}
