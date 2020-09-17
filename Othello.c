// #include<system.h>
// Linux header
#pragma warning(disable : 4996)
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

#define B  1 
#define W  2 
#define Cursor_Y_min 16
#define Cursor_Y_Max 18
#define Cursor_X 30
#define YELLOW 6
#define RED 4

int m_n = 1;

void gotoxy(int x, int y) {
	COORD Pos = { x - 1,y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void color(int i) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

int math(int ** map)
{
	int s = 0;
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (i == 0 && j == 0) {
				if(map[i][j] == W)
					s += 2000;
				else if (map[i][j] == B)
					s -= 4000;
			}
			else if (i == 7 && j == 0) {
				if (map[i][j] == W)
					s += 2000;
				else if (map[i][j] == B)
					s -= 4000;
			}
			else if (i == 0 && j == 7) {
				if (map[i][j] == W)
					s += 2000;
				else if (map[i][j] == B)
					s -= 4000;
			}
			else if (i == 7 && j == 7) {
				if (map[i][j] == W)
					s += 2000;
				else if (map[i][j] == B)
					s -= 4000;
			}
			else if (i == 0 && j == 1) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 1 && j == 0) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 6 && j == 7) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 7 && j == 6) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 0 && j == 6) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 1 && j == 7) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 7 && j == 1) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 6 && j == 0) {
				if (map[i][j] == W)
					s -= 120;
				else if (map[i][j] == B)
					s += 60;
			}
			else if (i == 0 && j == 2) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 2 && j == 0) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 5 && j == 7) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 7 && j == 5) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 0 && j == 5) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 2 && j == 7) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 5 && j == 0) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 7 && j == 2) {
				if (map[i][j] == W)
					s += 50;
				else if (map[i][j] == B)
					s -= 100;
			}
			else if (i == 1 && j == 1) {
				if (map[i][j] == W)
					s -= 250;
				else if (map[i][j] == B)
					s += 125;
			}
			else if (i == 1 && j == 6) {
				if (map[i][j] == W)
					s -= 250;
				else if (map[i][j] == B)
					s += 125;
			}
			else if (i == 6 && j == 1) {
				if (map[i][j] == W)
					s -= 250;
				else if (map[i][j] == B)
					s += 125;
			}
			else if (i == 6 && j == 6) {
				if (map[i][j] == W)
					s -= 250;
				else if (map[i][j] == B)
					s += 125;
			}
			else if (i == 0 && j == 3) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 0 && j == 4) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 3 && j == 0) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 3 && j == 7) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 4 && j == 0) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 4 && j == 7) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 7 && j == 3) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 7 && j == 4) {
				if (map[i][j] == W)
					s += 15;
				else if (map[i][j] == B)
					s -= 30;
			}
			else if (i == 1 && j == 2) {
				if (map[i][j] == W)
					s -= 2;
				else if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 1 && j == 3) {
				if (map[i][j] == W)
					s -= 2;
				else if (map[i][j] == B)
					s += 1;
			}
			else if (i == 1 && j == 4) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 1 && j == 5) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 2 && j == 1) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 3 && j == 1) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 4 && j == 1) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 5 && j == 1) {
				if (map[i][j] == W)
					s -= 2;
				else if (map[i][j] == B)
					s += 1;
			}
			else if (i == 2 && j == 6) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 3 && j == 6) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 4 && j == 6) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 5 && j == 6) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 6 && j == 2) {
				if (map[i][j] == W)
					s -= 2;
				else if (map[i][j] == B)
					s += 1;
			}
			else if (i == 6 && j == 3) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 6 && j == 4) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 6 && j == 5) {
				if (map[i][j] == W)
					s -= 2;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 2 && j == 2) {
				if (map[i][j] == W)
					s -= 1;
				else if (map[i][j] == B)
					s += 1;
			}
			else if (i == 2 && j == 3) {
				if (map[i][j] == W)
					s -= 1;
				else if (map[i][j] == B)
					s += 1;
			}
			else if (i == 2 && j == 4) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 2 && j == 5) {
				if (map[i][j] == W)
					s -= 1;
				else if (map[i][j] == B)
					s += 1;
			}
			else if (i == 3 && j == 2) {
				if (map[i][j] == W)
					s -= 1;
				else if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 3 && j == 3) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 3 && j == 4) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 3 && j == 5) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 4 && j == 2) {
				if (map[i][j] == W)
					s -= 1;
				else if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 4 && j == 3) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 4 && j == 4) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 4 && j == 5) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else if (i == 5 && j == 2) {
				if (map[i][j] == W)
					s -= 1;
				else if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 5 && j == 3) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 5 && j == 4) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			else 	if (i == 5 && j == 5) {
				if (map[i][j] == W)
					s -= 1;
				else 	if (map[i][j] == B)
					s += 1;
			}
			s += (count_W(map) - count_B(map)) * 10;
		}
	}

	return s;
}

int ** Map()
{
	FILE *fp = fopen("Text.txt", "r+");
	int** map = NULL;
	int N, M;
	if (fp != NULL) {
		fscanf(fp, "%d %d", &N, &M);
		map = (int**)malloc(sizeof(int*) * N);
		for (int i = 0; i < N; i++) {
			map[i] = (int*)malloc(sizeof(int) * M);
			for (int j = 0; j < M; j++) {
				fscanf(fp, "%d", &map[i][j]);
			}
		}
		fclose(fp);
	}
	else
	{
		printf("fales\n");
		exit(1);
	}
	return map;
}

int* MinMax(int** map, int* i1)
{
	int move[2] = { 0, 0 };
	int i, j, a, b;
	int k;     

	m_n++;
	int Bb = -99999;
	int best_move = -100000;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (CC(map, i, j, W) && map[i][j] == 0) {
				int** Map = NULL;
				Map = (int**)malloc(sizeof(int*) * 8);
				for (a = 0; a < 8; a++) {
					Map[a] = (int*)malloc(sizeof(int) * 8);
					for (b = 0; b < 8; b++) {
						Map[a][b] = map[a][b]; 
					}
				}
				RC(Map, i, j, W);
				Map[i][j] = W;  
				k = minMove(Map,Bb);
				if (k > best_move) {
					best_move = k;
					i1[0] = i;   
					i1[1] = j;   
				}
				free(Map);
			}
		}
	}
	m_n--;
	return 0;
}

int maxMove(int** map, int Aa)
{
	if (GameEnded(map,W)) {
		return math(map);
	}
	else
	{
		int k;
		int best_move = -100000;
		int Bb = -99999;
		m_n++;
		int i, j, a, b;
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				if (CC(map, i, j,W) && map[i][j] == 0) { 
					int** Map = NULL;
					Map = (int**)malloc(sizeof(int*) * 8);
					for (a = 0; a < 8; a++) {
						Map[a] = (int*)malloc(sizeof(int) * 8);
						for (b = 0; b < 8; b++) {
							Map[a][b] = map[a][b];  
						}
					}
					RC(Map, i, j, W);
					Map[i][j] = W;  

					k = minMove(Map,Bb);
					if (k > best_move) {
						best_move = k;
					}
					free(Map);
					if (Aa <= best_move) {
						m_n--;
						return Aa;
					}
				}
			}
		}
		m_n--;
		return k;
	}
}

int minMove(int** map, int Bb)
{
	if (GameEnded(map,B)) {
		return math(map);
	}
	else {
		m_n++;
		int k;
		int Aa = 99999;
		int best_move = 100000;
		int i, j, a, b;
		for (i = 0; i < 8; i++) {
			for (j = 0; j < 8; j++) {
				if (CC(map,i,j,B) && map[i][j] == 0) {
					int** Map = NULL;
					Map = (int**)malloc(sizeof(int*) * 8);
					for (a = 0; a < 8; a++) {
						Map[a] = (int*)malloc(sizeof(int) * 8);
						for (b = 0; b < 8; b++) {
							Map[a][b] = map[a][b]; 
						}
					}
					RC(Map, i, j, B);
					Map[i][j] = B;  
					k = maxMove(Map,Aa);
					if (k < best_move) {
						best_move = k;
					}
					free(Map);
					if (Bb >= best_move) {
						m_n--;
						return Bb;
					}
				}
			}
		}
		m_n--;
		return k;
	}
}

int GameEnded(int** map,int turn)
{
	if (m_n > 5 || (C(map,turn) == 0)) {
		return 1;
	}
	else {
		return 0;
	}
}

void print_map(int** map) {
	int i, j;
	printf("\n\n\n");
	for (i = 0; i < 8; i++) {
		printf("    ");
		for (j = 0; j < 8; j++) {
			if (map[i][j] == 0) {
				printf("¡à");
			}
			else if (map[i][j] == 1) {
				printf("¡Û");
			}
			else {
				printf("¡Ü");
			}
			printf(" ");
		}
		printf("\n");
	}
	printf("\n");
}
// 
int count_B(int** map) {
	int i, j;
	int c = 0;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (map[i][j] == B)
				c++;
		}
	}
	return c;
}
int count_W(int** map) {
	int i, j;
	int c = 0;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (map[i][j] == W)
				c++;
		}
	}
	return c;
}

int C(int** map, int turn) {
	int i, j;
	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			if (CC(map, i, j, turn))
				return 1;
		}
	}
	return 0;
}

int RCC(int** map, int x, int y, int r, int c, int turn) {
	if (x + r < 0 || x + r > 7 || y + c < 0 || y + c > 7)
		return 0;
	if (map[x + r][y + c] == turn)
	{
		return 1;
	}
	if (map[x + r][y + c] != 0 && map[x + r][y + c] != turn)
	{
		if (RCC(map, x + r, y + c, r, c, turn))
		{
			map[x + r][y + c] = turn;
			return 1;
		}
	}
	return 0;
}

int RC(int** map, int x, int y, int turn)
{
	if (x>0)
		if ((map[x - 1][y] != turn && map[x - 1][y] != 0) && RCC(map, x, y, -1, 0, turn))
		{
		}
	if (x>0 && y<7)
		if ((map[x - 1][y + 1] != turn && map[x - 1][y + 1] != 0) && RCC(map, x, y, -1, 1, turn))
		{
		}
	if (y<7)
		if ((map[x][y + 1] != turn && map[x][y + 1] != 0) && RCC(map, x, y, 0, 1, turn))
		{
		}
	if (x<7 && y<7)
		if ((map[x + 1][y + 1] != turn && map[x + 1][y + 1] != 0) && RCC(map, x, y, 1, 1, turn))
		{
		}
	if (x<7)
		if ((map[x + 1][y] != turn && map[x + 1][y] != 0) && RCC(map, x, y, 1, 0, turn))
		{
		}
	if (x<7 && y>0)
		if ((map[x + 1][y - 1] != turn && map[x + 1][y - 1] != 0) && RCC(map, x, y, 1, -1, turn))
		{
		}
	if (y>0)
		if ((map[x][y - 1] != turn && map[x][y - 1] != 0) && RCC(map, x, y, 0, -1, turn))
		{
		}
	if (y>0 && x>0)
		if ((map[x - 1][y - 1] != turn && map[x - 1][y - 1] != 0) && RCC(map, x, y, -1, -1, turn))
		{
		}
	return 0;
}

int CCC(int** map, int x, int y, int r, int c,int turn) {
	if (x + r < 0 || x + r > 7 || y + c < 0 || y + c > 7)
		return 0;
	if (map[x + r][y + c] == turn)
	{
		return 1;
	}
	if (map[x + r][y + c] != 0 && map[x + r][y + c] != turn)
		if (CCC(map, x + r, y + c, r, c, turn))
		{
			return 1;
		}
	return 0;
}

int CC(int** map, int x, int y, int turn)
{
	if (map[x][y] == 0) {
		if (x > 0)
			if ((map[x - 1][y] != turn && map[x - 1][y] != 0) && CCC(map, x, y, -1, 0, turn))
			{
				return 1;
			}
		if (x > 0 && y < 7)
			if ((map[x - 1][y + 1] != turn && map[x - 1][y + 1] != 0) && CCC(map, x, y, -1, 1, turn))
			{
				return 1;
			}
		if (y < 7)
			if ((map[x][y + 1] != turn && map[x][y + 1] != 0) && CCC(map, x, y, 0, 1, turn))
			{
				return 1;
			}
		if (x < 7 && y < 7)
			if ((map[x + 1][y + 1] != turn && map[x + 1][y + 1] != 0) && CCC(map, x, y, 1, 1, turn))
			{
				return 1;
			}
		if (x < 7)
			if ((map[x + 1][y] != turn && map[x + 1][y] != 0) && CCC(map, x, y, 1, 0, turn))
			{
				return 1;
			}
		if (x < 7 && y>0)
			if ((map[x + 1][y - 1] != turn && map[x + 1][y - 1] != 0) && CCC(map, x, y, 1, -1, turn))
			{
				return 1;
			}
		if (y > 0)
			if ((map[x][y - 1] != turn && map[x][y - 1] != 0) && CCC(map, x, y, 0, -1, turn))
			{
				return 1;
			}
		if (y > 0 && x > 0)
			if ((map[x - 1][y - 1] != turn && map[x - 1][y - 1] != 0) && CCC(map, x, y, -1, -1, turn))
			{
				return 1;
			}
	}
	return 0;
}

int printColor(int i) {
	double j;
	j = i % 2;

	if (j == 0)
		return YELLOW;
	else
		return RED;

}

void Outro(int result) {

	system("cls");

	int x = 5;
	int y = 4;
	int i;

	if (result == 1) {

		for (i = 0; i < 10; i++) {

			int num = printColor(i);
			color(num);

			gotoxy(8, y + 0); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
			gotoxy(8, y + 1); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 2); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 3); printf("¡à                        YOU WIN!!                       ¡à\n");
			gotoxy(8, y + 4); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 5); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 6); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");

			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n");
		}

	}
	else if (result == 2) {

		for (i = 0; i < 5; i++) {

			int num = printColor(i);
			color(num);

			gotoxy(8, y + 0); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
			gotoxy(8, y + 1); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 2); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 3); printf("¡à                        YOU LOSE!!                      ¡à\n");
			gotoxy(8, y + 4); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 5); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 6); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");

			Sleep(400);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n");

		}

	}
	else if (result == 3) {

		for (i = 0; i < 10; i++) {

			int num = printColor(i);
			color(num);

			gotoxy(8, y + 0); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
			gotoxy(8, y + 1); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 2); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 3); printf("¡à                      Black WIN!!                       ¡à\n");
			gotoxy(8, y + 4); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 5); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 6); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");

			Sleep(1000);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n");
		}

	}
	else if (result == 4) {

		for (i = 0; i < 5; i++) {

			int num = printColor(i);
			color(num);

			gotoxy(8, y + 0); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");
			gotoxy(8, y + 1); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 2); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 3); printf("¡à                       White WIN!!                      ¡à\n");
			gotoxy(8, y + 4); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 5); printf("¡à                                                        ¡à\n");
			gotoxy(8, y + 6); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n");

			Sleep(400);
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\n");

		}

	}
}

int main(void) {

	int x = 5;  
	int y = 4;
	int chr;
	int F = 0;
	int turn = B;

	int m_x = 2;
	int m_y = 2;
	int** map = NULL;
	map = Map();

	system("mode con cols=80 lines=25"); 

	//srand(time(NULL));
	//int c = rand() % 10;

	//color(c);

	gotoxy(8, y + 0); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 1); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 2); printf("¡à¡à¡á¡á¡á¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 3); printf("¡à¡á¡à¡à¡à¡á¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡à¡à¡à¡à¡à¡á¡à¡á¡à¡à¡à¡à¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 4); printf("¡à¡á¡à¡à¡à¡á¡à¡à¡á¡à¡à¡à¡á¡à¡à¡à¡à¡à¡á¡à¡à¡á¡à¡á¡à¡à¡à¡à¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 5); printf("¡à¡á¡à¡à¡à¡á¡à¡á¡á¡á¡á¡à¡á¡à¡à¡à¡à¡á¡à¡á¡à¡á¡à¡á¡à¡à¡á¡á¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 6); printf("¡à¡á¡à¡à¡à¡á¡à¡à¡á¡à¡à¡à¡á¡á¡á¡à¡à¡á¡á¡á¡à¡á¡à¡á¡à¡á¡à¡à¡á¡à\n"); Sleep(200);
	gotoxy(8, y + 7); printf("¡à¡á¡à¡à¡à¡á¡à¡à¡á¡à¡à¡à¡á¡à¡à¡á¡à¡á¡à¡à¡à¡á¡à¡á¡à¡á¡à¡à¡á¡à\n"); Sleep(200);
	gotoxy(8, y + 8); printf("¡à¡à¡á¡á¡á¡à¡à¡à¡à¡á¡á¡à¡á¡à¡à¡á¡à¡à¡á¡á¡à¡á¡à¡á¡à¡à¡á¡á¡à¡à\n"); Sleep(200);
	gotoxy(8, y + 9); printf("¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à¡à\n"); Sleep(200);

	gotoxy(8, y + 12);
	printf("¢¹ 1 player\n");
	gotoxy(8, y + 14);
	printf("¢¹ 2 players\n");


	x = Cursor_X;
	y = Cursor_Y_min;

	while (1) {
		gotoxy(x, y - 2);
		printf("  ");
		gotoxy(x, y);
		printf("¡Ú");
		gotoxy(x, y + 2);
		printf("  ");
		gotoxy(x, y);
		chr = _getch();
		if (chr == 0 || chr == 0xe0) {
			chr = _getch();

			if (chr == 72) {
				y -= 2;
				if (y < Cursor_Y_min)
					y = Cursor_Y_min;
				F = 1;
			}
			else if (chr == 80) {
				y += 2;
				if (y > Cursor_Y_Max)
					y = Cursor_Y_Max;
				F = 2;
			}

			gotoxy(x, y - 2);
			printf("  ");
			gotoxy(x, y);
			printf("¡Ú");
			gotoxy(x, y + 2);
			printf("  ");
			gotoxy(x, y);
		}
		if (chr == 13) {
			break;
		}
	}

	while (1) {
		system("cls");
		print_map(map);

		gotoxy(4, 1);
		if (turn == 1) 
		{
			printf("Black turn\n");
		}
		else 
		{
			printf("White turn\n");
		}

		printf("\n    Black : %d    ",count_B(map));
		printf("White : %d", count_W(map));
		gotoxy(5 + (m_x * 3), 4 + m_y);
		if (C(map, turn)) {
			int ch;
			while (1) {
				ch = _getch();
				if (ch == 0 || ch == 0xe0) {
					ch = _getch();
					if (ch == 72) {
						m_y -= 1;
						if (m_y < 0)
							m_y = 7;
					}
					else if (ch == 80) {
						m_y += 1;
						if (m_y > 7)
							m_y = 0;
					}
					else if (ch == 75) {
						m_x -= 1;
						if (m_x < 0)
							m_x = 7;
					}
					else if (ch == 77) {
						m_x += 1;
						if (m_x > 7)
							m_x = 0;
					}
					gotoxy(5 + (m_x * 3), 4 + m_y);
				}
				if (ch == 13) {
					ch = _getch();
					if (CC(map, m_y, m_x, turn) && map[m_y][m_x] == 0) {
						RC(map, m_y, m_x, turn);
						map[m_y][m_x] = turn;
						break;
					}
				}
			}
		}
		if (F == 2) {
			if (turn == B)
				turn = W;
			else
				turn = B;
		}
		else {
			if (C(map, W)) {
				int i1[2] = { 10,10 };
				MinMax(map, i1);
				if (i1[0] == 10)
					break;
				RC(map, i1[0], i1[1], W);
				map[i1[0]][i1[1]] = W;
			}
		}
		if ((C(map, W) == 0) && (C(map, B) == 0))
		{
			if(F == 2)
			{
				if (count_B(map) > count_W(map))
					Outro(3);
				else
					Outro(4);
				return 0;
			}
			else
			{
				if (count_B(map) > count_W(map))
					Outro(1);
				else
					Outro(2);
				return 0;
			}
		}
	}
	//	system("pause");
	return 0;
	
}