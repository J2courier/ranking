#include <stdio.h>
#include <windows.h>
#define p printf
#define s scanf
#define g gotoxy

void gotoxy (int x, int y){
    COORD coord;
    coord.X = x - 1;
    coord.Y = y - 1;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main () {
    int num, rank_eq[11] = {0}, value[11];
    int temp, comp, pass, count, col, row;
    system("cls");
    g(2, 2);p("Enter Value: ");
    for (num = 1; num < 11; num ++){
        g(15, 2);s("%d", &value[num]);
        g(15, 2);p("            ");
    }

    for (pass = 1; pass < 11; pass ++){
        for (comp = 1; comp < 10; comp ++){
            if (value[comp] < value[comp + 1]){
                temp = value[comp];
                value [comp] = value[comp + 1];
                value [comp + 1] = temp;
            }
        }
    }

    for (row = 1; row < 11; row ++){
        count = 1;
        for (col = 1; col < 11; col ++){
            if (value [col] > value [row]){
                count ++;
            }
        }
        rank_eq[row] = count;
    }

    for (num = 1; num < 11; num ++){
       p("\n %d ----- %d", value[num], rank_eq[num]);
    }
}