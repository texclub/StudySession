#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3	// 敵との遭遇回数
#define No 5	// 敵の人数

// 関数の定義
void GameStart();
void Line();
int EnemySelect();
void Behavior();
void DEATH();
int Fight();

// 敵(構造体)の定義
struct enemy {
	char name[20]; // 敵の名前
	int defense; // 防御力
};

int main() {
	// 敵情報(先ぱ...ｹﾞﾌﾝｹﾞﾌﾝ)
	struct enemy senior[No] = {
		{"H.K", 95},
		{"Misaki", 70},
		{"RenaReno", 50},
		{"au", 20},
		{"P-mountain", 3},
	};

	printf("\n -- TeXClub Quest OffLINE -- \n"); // タイトル
	GameStart(); // スタート画面

	int i; 
	for (i = 0; i < SIZE; i++) { // 上のマクロ定義回数分、ダンジョンに潜る
		Line(); // 境界線を引く
		int e = EnemySelect(); // 敵の選択 
		printf("\n Stage:%d ---> TexClub %s appeared!\n", i+1, senior[e].name);
		Behavior();
		int f = Fight();
		if (f < senior[e].defense) { DEATH(); }
	}

	Line();
	printf ("\n Got away safety!\n");

	return 0;


}

void GameStart() {
	int start;
	Line();
	printf("\n 1 :GameStart!! \t2 :Exit\n");
	printf(" Please command: ");
	scanf("%d", &start);

	if (start == 2) {
		DEATH();
	}else if (start != 1 && start != 2) {
		GameStart();
	}

}

void Line() {
	printf("\n-------------------------------------------------\n");
}

int EnemySelect() {
	srand((unsigned)time(NULL));
	int e = rand() % No;
	return e;
}

void Behavior() {
	int b;
	Line();
	printf ("\n 1 :Fight\t2: Work\n");
	printf(" Please command: ");
	scanf("%d", &b);	
	switch(b) {
		case 1:
			break;

		case 2:
			DEATH();

		default:
			Behavior();		
	}
}

int Fight() {
	srand((unsigned)time(NULL));
	int f = rand() % 100+1;
	return f;
}

void DEATH() {
	Line();
	printf("\n You are death.\n");
	exit(0);
}
