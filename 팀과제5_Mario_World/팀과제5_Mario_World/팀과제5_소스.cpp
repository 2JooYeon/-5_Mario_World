#include <stdio.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <CoalaMOD.h>

//주연 함수

//입구 터널 만들기
void entrance(int x, int y, int z) {

	WoolID red = createWool(COLOR_RED);
	WoolID orange = createWool(COLOR_ORANGE);
	WoolID yellow = createWool(COLOR_YELLOW);
	WoolID lime = createWool(COLOR_LIME);
	WoolID blue = createWool(COLOR_BLUE);

	//입구 통로 만들기
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 5; j++) {
			locateBlock(red, x + j, y, z + i);
			locateBlock(orange, x + 5 + j, y, z + i);
			locateBlock(yellow, x + 10 + j, y, z + i);
			locateBlock(lime, x + 15 + j, y, z + i);
			locateBlock(blue, x + 20 + j, y, z + i);
		}
	}
	for (int i = 0; i < 5; i++) {
		locateBlock(red, x + 2, y + i, z - 1);
		locateBlock(red, x + 2, y + i, z + 7);
		locateBlock(orange, x + 7, y + i, z - 1);
		locateBlock(orange, x + 7, y + i, z + 7);
		locateBlock(yellow, x + 12, y + i, z - 1);
		locateBlock(yellow, x + 12, y + i, z + 7);
		locateBlock(lime, x + 17, y + i, z - 1);
		locateBlock(lime, x + 17, y + i, z + 7);
		locateBlock(blue, x + 22, y + i, z - 1);
		locateBlock(blue, x + 22, y + i, z + 7);
	}
	for (int i = 0; i < 7; i++) {
		locateBlock(red, x + 2, y + 5, z + i);
		locateBlock(orange, x + 7, y + 5, z + i);
		locateBlock(yellow, x + 12, y + 5, z + i);
		locateBlock(lime, x + 17, y + 5, z + i);
		locateBlock(blue, x + 22, y + 5, z + i);
	}
	locateBlock(red, x + 2, y + 4, z);
	locateBlock(red, x + 2, y + 4, z + 6);
	locateBlock(orange, x + 7, y + 4, z);
	locateBlock(orange, x + 7, y + 4, z + 6);
	locateBlock(yellow, x + 12, y + 4, z);
	locateBlock(yellow, x + 12, y + 4, z + 6);
	locateBlock(lime, x + 17, y + 4, z);
	locateBlock(lime, x + 17, y + 4, z + 6);
	locateBlock(blue, x + 22, y + 4, z);
	locateBlock(blue, x + 22, y + 4, z + 6);

}
//입구 로고 만들기
void logo(int x, int y, int z) {

	WoolID red = createWool(COLOR_RED);
	WoolID orange = createWool(COLOR_ORANGE);
	WoolID yellow = createWool(COLOR_YELLOW);
	WoolID lime = createWool(COLOR_LIME);
	WoolID blue = createWool(COLOR_BLUE);

	//SUPER 글자 만들기
	for (int i = 0; i < 3; i++) {
		locateBlock(blue, x, y + 5, z + i);
		locateBlock(blue, x, y + 7, z + i);
		locateBlock(blue, x, y + 9, z + i);
	}
	locateBlock(blue, x, y + 6, z + 2);
	locateBlock(blue, x, y + 8, z);

	for (int i = 0; i < 5; i++) {
		locateBlock(orange, x, y + 5 + i, z + 3);
		locateBlock(orange, x, y + 5 + i, z + 5);
	}
	locateBlock(orange, x, y + 5, z + 4);

	for (int i = 0; i < 5; i++) {
		locateBlock(red, x, y + 5 + i, z + 6);
	}
	locateBlock(red, x, y + 7, z + 7);
	locateBlock(red, x, y + 9, z + 7);
	for (int i = 0; i < 3; i++) {
		locateBlock(red, x, y + 7 + i, z + 8);
	}

	for (int i = 0; i < 3; i++) {
		locateBlock(lime, x, y + 5, z + 9 + i);
		locateBlock(lime, x, y + 7, z + 9 + i);
		locateBlock(lime, x, y + 9, z + 9 + i);
	}
	locateBlock(lime, x, y + 6, z + 9);
	locateBlock(lime, x, y + 8, z + 9);

	for (int i = 0; i < 5; i++) {
		locateBlock(yellow, x, y + 5 + i, z + 12);
	}
	locateBlock(yellow, x, y + 7, z + 13);
	locateBlock(yellow, x, y + 9, z + 13);
	for (int i = 0; i < 3; i++) {
		locateBlock(yellow, x, y + 7 + i, z + 14);
		locateBlock(yellow, x, y + 5 + i, z + 15);
	}
	//MARIO 글자 만들기
	for (int i = 0; i < 5; i++) {
		locateBlock(red, x, y + i, z - 1);
		locateBlock(red, x, y + i, z + 3);
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(red, x, y + 2 + i, z + 1);
	}
	locateBlock(red, x, y + 4, z);
	locateBlock(red, x, y + 4, z + 2);

	for (int i = 0; i < 5; i++) {
		locateBlock(lime, x, y + i, z + 4);
		locateBlock(lime, x, y + i, z + 6);
	}
	locateBlock(lime, x, y + 4, z + 5);
	locateBlock(lime, x, y + 2, z + 5);

	for (int i = 0; i < 5; i++) {
		locateBlock(yellow, x, y + i, z + 7);
	}
	locateBlock(yellow, x, y + 2, z + 8);
	locateBlock(yellow, x, y + 4, z + 8);
	for (int i = 0; i < 3; i++) {
		locateBlock(yellow, x, y + 2 + i, z + 9);
		locateBlock(yellow, x, y + i, z + 10);
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(blue, x, y, z + 11 + i);
		locateBlock(blue, x, y + 4, z + 11 + i);
		locateBlock(blue, x, y + 1 + i, z + 12);
	}
	for (int i = 0; i < 5; i++) {
		locateBlock(orange, x, y + i, z + 14);
		locateBlock(orange, x, y + i, z + 16);
	}
	locateBlock(orange, x, y + 4, z + 15);
	locateBlock(orange, x, y, z + 15);
}
//마리오 캐릭터 만들기
void mario(int x, int y, int z) {

	WoolID red = createWool(COLOR_RED);
	WoolID yellow = createWool(COLOR_YELLOW);
	WoolID brown = createWool(COLOR_BROWN);
	WoolID black = createWool(COLOR_BLACK);
	BlockID beige = createBlock(BLOCK_SMOOTH_SAND_STONE);

	//신발 만들기
	for (int i = 0; i < 4; i++) {
		locateBlock(brown, x, y, z + i);
		locateBlock(brown, x, y, z + 8 + i);
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(brown, x, y + 1, z + 1 + i);
		locateBlock(brown, x, y + 1, z + 8 + i);
	}

	//몸통만들기
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			locateBlock(beige, x, y + 3 + j, z + i);
			locateBlock(beige, x, y + 3 + j, z + 9 + i);
		}
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(red, x, y + 2, z + 2 + i);
		locateBlock(red, x, y + 2, z + 7 + i);
	}
	for (int i = 0; i < 8; i++) {
		locateBlock(red, x, y + 3, z + 2 + i);
	}
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 3; j++) {
			locateBlock(red, x, y + 4 + j, z + 3 + i);
		}
	}
	locateBlock(yellow, x, y + 6, z + 4);
	locateBlock(yellow, x, y + 6, z + 7);
	locateBlock(black, x, y + 6, z + 2);
	locateBlock(black, x, y + 6, z + 9);

	for (int i = 0; i < 12; i++) {
		locateBlock(black, x, y + 7, z + i);
	}
	for (int i = 0; i < 10; i++) {
		locateBlock(black, x, y + 8, z + 1 + i);
	}
	for (int i = 0; i < 6; i++) {
		locateBlock(black, x, y + 9, z + 2 + i);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(red, x, y + 7, z + 4 + i);
	}
	locateBlock(red, x, y + 8, z + 4);
	locateBlock(red, x, y + 8, z + 7);
	locateBlock(red, x, y + 9, z + 4);

	//얼굴만들기
	for (int i = 0; i < 7; i++) {
		locateBlock(beige, x, y + 10, z + 3 + i);
	}
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			locateBlock(beige, x, y + 11 + j, z + 1 + i);
		}
	}
	for (int i = 0; i < 5; i++) {
		locateBlock(beige, x, y + 14, z + 4 + i);
	}
	locateBlock(beige, x, y + 12, z + 11);

	//눈,코,입,머리카락 만들기
	locateBlock(black, x, y + 12, z);
	locateBlock(black, x, y + 13, z);
	locateBlock(black, x, y + 11, z + 1);
	locateBlock(black, x, y + 14, z + 1);
	locateBlock(black, x, y + 14, z + 2);
	locateBlock(black, x, y + 14, z + 3);
	locateBlock(black, x, y + 13, z + 2);
	locateBlock(black, x, y + 12, z + 2);
	locateBlock(black, x, y + 12, z + 3);
	locateBlock(black, x, y + 14, z + 7);
	locateBlock(black, x, y + 13, z + 7);
	locateBlock(black, x, y + 12, z + 8);
	for (int i = 0; i < 4; i++) {
		locateBlock(black, x, y + 11, z + 7 + i);
	}

	//모자 만들기
	for (int i = 0; i < 10; i++) {
		locateBlock(red, x, y + 15, z + 1 + i);
	}
	for (int i = 0; i < 7; i++) {
		locateBlock(red, x, y + 16, z + 2 + i);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(red, x, y + 17, z + 3 + i);
	}
}
// 초록기둥 원 만들기
void greencircle1(int x, int y, int z) {

	WoolID green = createWool(COLOR_GREEN);

	for (int a = 0; a < 8; a++) {
		locateWool(green, x, y, (z + 8) + a);
		locateWool(green, x + 23, y, (z + 8) + a);
		locateWool(green, (x + 8) + a, y, z);
		locateWool(green, (x + 8) + a, y, z + 23);
	}
	locateWool(green, x + 1, y, z + 6);
	locateWool(green, x + 1, y, z + 7);
	locateWool(green, x + 1, y, z + 16);
	locateWool(green, x + 1, y, z + 17);

	locateWool(green, x + 2, y, z + 4);
	locateWool(green, x + 2, y, z + 5);
	locateWool(green, x + 2, y, z + 18);
	locateWool(green, x + 2, y, z + 19);

	locateWool(green, x + 3, y, z + 3);
	locateWool(green, x + 3, y, z + 20);
	locateWool(green, x + 20, y, z + 3);
	locateWool(green, x + 20, y, z + 20);

	locateWool(green, x + 6, y, z + 1);
	locateWool(green, x + 7, y, z + 1);
	locateWool(green, x + 16, y, z + 1);
	locateWool(green, x + 17, y, z + 1);

	locateWool(green, x + 4, y, z + 2);
	locateWool(green, x + 5, y, z + 2);
	locateWool(green, x + 18, y, z + 2);
	locateWool(green, x + 19, y, z + 2);

	locateWool(green, x + 6, y, z + 22);
	locateWool(green, x + 7, y, z + 22);
	locateWool(green, x + 16, y, z + 22);
	locateWool(green, x + 17, y, z + 22);

	locateWool(green, x + 4, y, z + 21);
	locateWool(green, x + 5, y, z + 21);
	locateWool(green, x + 18, y, z + 21);
	locateWool(green, x + 19, y, z + 21);

	locateWool(green, x + 22, y, z + 6);
	locateWool(green, x + 22, y, z + 7);
	locateWool(green, x + 22, y, z + 16);
	locateWool(green, x + 22, y, z + 17);

	locateWool(green, x + 21, y, z + 4);
	locateWool(green, x + 21, y, z + 5);
	locateWool(green, x + 21, y, z + 18);
	locateWool(green, x + 21, y, z + 19);
}
// 초록기둥 더 큰원 만들기
void greencircle2(int x, int y, int z) {

	WoolID green = createWool(COLOR_GREEN);

	for (int a = 0; a < 10; a++) {
		locateWool(green, x - 1, y + 12, (z + 7) + a);
		locateWool(green, x + 24, y + 12, (z + 7) + a);
		locateWool(green, (x + 7) + a, y + 12, z - 1);
		locateWool(green, (x + 7) + a, y + 12, z + 24);
	}

	locateWool(green, x, y + 12, z + 5);
	locateWool(green, x, y + 12, z + 6);
	locateWool(green, x, y + 12, z + 7);
	locateWool(green, x, y + 12, z + 16);
	locateWool(green, x, y + 12, z + 17);
	locateWool(green, x, y + 12, z + 18);

	locateWool(green, x + 1, y + 12, z + 3);
	locateWool(green, x + 1, y + 12, z + 4);
	locateWool(green, x + 1, y + 12, z + 5);
	locateWool(green, x + 1, y + 12, z + 18);
	locateWool(green, x + 1, y + 12, z + 19);
	locateWool(green, x + 1, y + 12, z + 20);

	locateWool(green, x + 2, y + 12, z + 2);
	locateWool(green, x + 2, y + 12, z + 3);
	locateWool(green, x + 2, y + 12, z + 20);
	locateWool(green, x + 2, y + 12, z + 21);

	locateWool(green, x + 3, y + 12, z + 1);
	locateWool(green, x + 3, y + 12, z + 2);
	locateWool(green, x + 3, y + 12, z + 21);
	locateWool(green, x + 3, y + 12, z + 22);

	locateWool(green, x + 4, y + 12, z + 1);
	locateWool(green, x + 4, y + 12, z + 22);

	locateWool(green, x + 5, y + 12, z);
	locateWool(green, x + 5, y + 12, z + 1);
	locateWool(green, x + 5, y + 12, z + 22);
	locateWool(green, x + 5, y + 12, z + 23);

	locateWool(green, x + 6, y + 12, z);
	locateWool(green, x + 6, y + 12, z + 23);

	locateWool(green, x + 7, y + 12, z);
	locateWool(green, x + 7, y + 12, z + 23);

	locateWool(green, x + 16, y + 12, z);
	locateWool(green, x + 16, y + 12, z + 23);

	locateWool(green, x + 17, y + 12, z);
	locateWool(green, x + 17, y + 12, z + 23);

	locateWool(green, x + 18, y + 12, z);
	locateWool(green, x + 18, y + 12, z + 1);
	locateWool(green, x + 18, y + 12, z + 23);
	locateWool(green, x + 18, y + 12, z + 22);

	locateWool(green, x + 19, y + 12, z + 1);
	locateWool(green, x + 19, y + 12, z + 22);

	locateWool(green, x + 20, y + 12, z + 1);
	locateWool(green, x + 20, y + 12, z + 2);
	locateWool(green, x + 20, y + 12, z + 22);
	locateWool(green, x + 20, y + 12, z + 21);

	locateWool(green, x + 21, y + 12, z + 2);
	locateWool(green, x + 21, y + 12, z + 3);
	locateWool(green, x + 21, y + 12, z + 21);
	locateWool(green, x + 21, y + 12, z + 20);

	locateWool(green, x + 22, y + 12, z + 3);
	locateWool(green, x + 22, y + 12, z + 4);
	locateWool(green, x + 22, y + 12, z + 5);
	locateWool(green, x + 22, y + 12, z + 20);
	locateWool(green, x + 22, y + 12, z + 19);
	locateWool(green, x + 22, y + 12, z + 18);

	locateWool(green, x + 23, y + 12, z + 5);
	locateWool(green, x + 23, y + 12, z + 6);
	locateWool(green, x + 23, y + 12, z + 7);
	locateWool(green, x + 23, y + 12, z + 18);
	locateWool(green, x + 23, y + 12, z + 17);
	locateWool(green, x + 23, y + 12, z + 16);
}
// 초록기둥 만들기
void greencylinder(int x, int y, int z) {
	for (int a = 0; a < 12; a++) greencircle1(x, y + a, z);
	for (int a = 0; a < 6; a++) greencircle2(x, y + a, z);
}
//식물 잎 만들기
void leaf(int x, int y, int z) {

	WoolID green = createWool(COLOR_GREEN);
	WoolID lime = createWool(COLOR_LIME);
	WoolID black = createWool(COLOR_BLACK);

	for (int i = 0; i < 6; i++) {
		locateBlock(black, x, y + 5 + i, z - 2);
		locateBlock(black, x, y + 5 + i, z - 3);
		locateBlock(black, x, y + 6 + i, z - 3);
		locateBlock(black, x, y + 6 + i, z - 4);
		locateBlock(black, x, y + 6 + i, z - 5);
		locateBlock(black, x, y + 7 + i, z - 5);
		locateBlock(black, x, y + 7 + i, z - 6);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(black, x, y + 8 + i, z - 7);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(lime, x, y + 8 + i, z - 6);
	}
	locateBlock(lime, x, y + 11, z - 5);
	locateBlock(green, x, y + 7, z - 5);
	locateBlock(green, x, y + 8, z - 5);
	locateBlock(lime, x, y + 10, z - 4);
	locateBlock(green, x, y + 9, z - 4);
	locateBlock(lime, x, y + 7, z - 4);
	locateBlock(lime, x, y + 10, z - 3);
	locateBlock(green, x, y + 9, z - 3);
	locateBlock(green, x, y + 8, z - 3);
	locateBlock(green, x, y + 6, z - 3);
	locateBlock(lime, x, y + 9, z - 2);
	locateBlock(lime, x, y + 8, z - 2);
	locateBlock(green, x, y + 7, z - 2);
	locateBlock(green, x, y + 6, z - 1);
}
//식물 잎 만들기2
void leaf2(int x, int y, int z) {
	
	WoolID green = createWool(COLOR_GREEN);
	WoolID lime = createWool(COLOR_LIME);
	WoolID black = createWool(COLOR_BLACK);

	for (int i = 0; i < 6; i++) {
		locateBlock(black, x, y + 5 + i, z + 3);
		locateBlock(black, x, y + 5 + i, z + 4);
		locateBlock(black, x, y + 6 + i, z + 4);
		locateBlock(black, x, y + 6 + i, z + 5);
		locateBlock(black, x, y + 6 + i, z + 6);
		locateBlock(black, x, y + 7 + i, z + 6);
		locateBlock(black, x, y + 7 + i, z + 7);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(black, x, y + 8 + i, z + 8);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(green, x, y + 8 + i, z + 7);
	}
	locateBlock(lime, x, y + 11, z + 6);
	locateBlock(green, x, y + 8, z + 6);
	locateBlock(green, x, y + 7, z + 6);
	locateBlock(lime, x, y + 10, z + 5);
	locateBlock(green, x, y + 9, z + 5);
	locateBlock(green, x, y + 7, z + 5);
	locateBlock(lime, x, y + 10, z + 4);
	locateBlock(green, x, y + 9, z + 4);
	locateBlock(green, x, y + 8, z + 4);
	locateBlock(green, x, y + 6, z + 4);
	locateBlock(lime, x, y + 9, z + 3);
	locateBlock(lime, x, y + 8, z + 3);
	locateBlock(lime, x, y + 7, z + 3);
	locateBlock(green, x, y + 6, z + 2);
}
//식물 만들기
void plant(int x, int y, int z) {

	WoolID green = createWool(COLOR_GREEN);
	WoolID lime = createWool(COLOR_LIME);
	WoolID red = createWool(COLOR_RED);
	WoolID white = createWool(COLOR_WHITE);
	WoolID black = createWool(COLOR_BLACK);

	for (int i = 0; i < 21; i++) {
		for (int j = 0; j < 4; j++) {
			locateBlock(black, x, y + i, z - 1 + j);
		}
	}
	for (int i = 0; i < 19; i++) {
		locateBlock(lime, x, y + i, z);
		locateBlock(green, x, y + i, z + 1);
	}
	locateBlock(green, x, y + 19, z);
	locateBlock(green, x, y + 6, z - 1);
	locateBlock(green, x, y + 6, z + 2);
	locateBlock(green, x, y + 14, z - 1);
	locateBlock(green, x, y + 14, z + 2);

	leaf(x, y + 8, z);
	leaf2(x, y + 8, z);

	for (int i = 0; i < 8; i++) {
		locateBlock(black, x, y + 21, z - 3 + i);
	}
	locateBlock(black, x, y + 22, z - 4);
	locateBlock(black, x, y + 22, z - 5);
	locateBlock(black, x, y + 23, z - 6);
	locateBlock(black, x, y + 24, z - 6);
	locateBlock(black, x, y + 25, z - 7);
	locateBlock(black, x, y + 26, z - 7);
	locateBlock(black, x, y + 27, z - 7);
	locateBlock(black, x, y + 28, z - 6);
	locateBlock(black, x, y + 29, z - 6);
	locateBlock(black, x, y + 22, z + 5);
	locateBlock(black, x, y + 22, z + 6);
	locateBlock(black, x, y + 23, z + 7);
	locateBlock(black, x, y + 24, z + 7);
	locateBlock(black, x, y + 25, z + 8);
	locateBlock(black, x, y + 26, z + 8);
	locateBlock(black, x, y + 27, z + 8);
	locateBlock(black, x, y + 28, z + 7);
	locateBlock(black, x, y + 29, z + 7);
	locateBlock(black, x, y + 22, z + 6);

	for (int i = 0; i < 4; i++) {
		locateBlock(black, x, y + 26, z - 1 + i);
	}
	for (int i = 0; i < 5; i++) {
		locateBlock(black, x, y + 27 + i, z - 2 - i);
	}
	for (int i = 0; i < 5; i++) {
		locateBlock(black, x, y + 27 + i, z + 3 + i);
	}

	locateBlock(black, x, y + 32, z - 7);
	locateBlock(black, x, y + 33, z - 7);
	locateBlock(black, x, y + 34, z - 7);
	locateBlock(black, x, y + 35, z - 6);
	locateBlock(black, x, y + 35, z - 5);
	locateBlock(black, x, y + 35, z - 4);
	locateBlock(black, x, y + 34, z - 3);
	locateBlock(black, x, y + 33, z - 3);
	locateBlock(black, x, y + 32, z - 2);
	locateBlock(black, x, y + 31, z - 2);
	locateBlock(black, x, y + 30, z - 1);
	locateBlock(black, x, y + 29, z);
	locateBlock(black, x, y + 29, z + 1);
	locateBlock(black, x, y + 30, z + 2);
	locateBlock(black, x, y + 32, z + 8);
	locateBlock(black, x, y + 33, z + 8);
	locateBlock(black, x, y + 34, z + 8);
	locateBlock(black, x, y + 35, z + 7);
	locateBlock(black, x, y + 35, z + 6);
	locateBlock(black, x, y + 35, z + 5);
	locateBlock(black, x, y + 34, z + 4);
	locateBlock(black, x, y + 33, z + 4);
	locateBlock(black, x, y + 32, z + 3);
	locateBlock(black, x, y + 31, z + 3);

	for (int i = 0; i < 8; i++) {
		locateBlock(red, x, y + 22, z - 3 + i);
	}
	for (int i = 0; i < 12; i++) {
		for (int j = 0; j < 3; j++) {
			locateBlock(red, x, y + 23 + j, z - 5 + i);
		}
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(red, x, y + 25 + i, z - 6);
		locateBlock(red, x, y + 25 + i, z + 7);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(red, x, y + 26, z - 5 + i);
		locateBlock(red, x, y + 26, z + 6 - i);
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(red, x, y + 27, z - 5 + i);
		locateBlock(red, x, y + 27, z + 6 - i);
	}

	locateBlock(red, x, y + 28, z - 5);
	locateBlock(red, x, y + 28, z - 4);
	locateBlock(red, x, y + 29, z - 5);
	locateBlock(red, x, y + 28, z + 6);
	locateBlock(red, x, y + 28, z + 5);
	locateBlock(red, x, y + 29, z + 6);

	locateBlock(white, x, y + 23, z - 5);
	locateBlock(white, x, y + 23, z - 4);
	locateBlock(white, x, y + 27, z - 5);
	locateBlock(white, x, y + 24, z - 1);
	locateBlock(white, x, y + 24, z);
	locateBlock(white, x, y + 25, z - 1);
	locateBlock(white, x, y + 25, z);
	locateBlock(white, x, y + 23, z + 4);
	locateBlock(white, x, y + 23, z + 5);
	locateBlock(white, x, y + 24, z + 4);
	locateBlock(white, x, y + 24, z + 5);
	locateBlock(white, x, y + 28, z + 6);

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			locateBlock(white, x, y + 27 + i, z + j);
		}
	}
	for (int i = 0; i < 3; i++) {
		locateBlock(white, x, y + 27 + i, z - 1);
		locateBlock(white, x, y + 28 + i, z - 2);
		locateBlock(white, x, y + 27 + i, z + 2);
		locateBlock(white, x, y + 28 + i, z + 3);
		locateBlock(white, x, y + 32 + i, z - 6);
		locateBlock(white, x, y + 32 + i, z + 7);
	}
	for (int i = 0; i < 4; i++) {
		locateBlock(white, x, y + 29 + i, z - 3);
		locateBlock(white, x, y + 29 + i, z + 4);
		locateBlock(white, x, y + 31 + i, z - 5);
		locateBlock(white, x, y + 31 + i, z + 6);
	}
	for (int i = 0; i < 5; i++) {
		locateBlock(white, x, y + 30 + i, z - 4);
		locateBlock(white, x, y + 30 + i, z + 5);
	}
}
//초록 기둥 + 식물 합치기
void plus(int x, int y, int z) {
	greencylinder(x, y, z);
	plant(x + 11, y + 6, z + 11);
}
//광장 바닥 만들기
void squre(int x, int y, int z, int a, int b) {

	BlockID sand = createBlock(BLOCK_SMOOTH_SAND_STONE);

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			locateBlock(sand, x + i, y, z + j);
		}
	}
}
 //입구 주변을 꾸며줄 초록 선인장 캐릭터 만들기
void character(int x, int y, int z) {

	WoolID black = createWool(COLOR_BLACK);
	WoolID green = createWool(COLOR_GREEN);

	for (int i = 0; i < 10; i++) {
		locateBlock(black, x, y + i, z);
		locateBlock(black, x, y + i, z + 15);
		locateBlock(green, x, y + i, z + 1);
		locateBlock(green, x, y + i, z + 14);
	}
	locateBlock(black, x, y + 10, z + 1);
	locateBlock(black, x, y + 11, z + 1);
	locateBlock(black, x, y + 12, z + 2);
	locateBlock(black, x, y + 13, z + 3);
	locateBlock(black, x, y + 13, z + 4);
	for (int i = 0; i < 6; i++) {
		locateBlock(black, x, y + 14, z + 5 + i);
	}
	locateBlock(black, x, y + 13, z + 11);
	locateBlock(black, x, y + 13, z + 12);
	locateBlock(black, x, y + 12, z + 13);
	locateBlock(black, x, y + 11, z + 14);
	locateBlock(black, x, y + 10, z + 14);
	for (int i = 0; i < 12; i++) {
		locateBlock(green, x, y + i, z + 2);
		locateBlock(green, x, y + i, z + 13);
	}
	for (int i = 0; i < 13; i++) {
		locateBlock(green, x, y + i, z + 3);
		locateBlock(green, x, y + i, z + 4);
		locateBlock(green, x, y + i, z + 12);
		locateBlock(green, x, y + i, z + 11);
	}
	for (int i = 0; i < 14; i++) {
		for (int j = 0; j < 6; j++) {
			locateBlock(green, x, y + i, z + 5 + j);
		}
	}
	locateBlock(black, x, y + 10, z + 6);
	locateBlock(black, x, y + 11, z + 6);
	locateBlock(black, x, y + 10, z + 9);
	locateBlock(black, x, y + 11, z + 9);
}
 //초록 선인장 5개를 세트로 묶기
void set(int x, int y, int z) {
	character(x, y - 4, z);
	character(x + 1, y + 2, z + 8);
	character(x, y - 4, z + 15);
	character(x + 1, y + 2, z + 23);
	character(x, y - 4, z + 30);
}

 //합칠 때 이주연 함수
void jooyeon(int x, int y, int z) {
	entrance(x, y, z);
	logo(x, y, z + 10);
	mario(x, y, z - 15);
	plus(x + 62, y, z - 8);
	set(x, y, z - 70);
	set(x, y, z + 35);
}



//두홍 : 함수에서 쓸 블록 선언
BlockID empty = createBlock(BLOCK_AIR);
BlockID glass = createBlock(BLOCK_GLASS);
BlockID blue = createBlock(BLOCK_LAPIS_LAZULI);
BlockID r = createBlock(BLOCK_RED_SANDSTONE);
BlockID sand = createBlock(BLOCK_SAND);
BlockID glow = createBlock(BLOCK_GLOWSTONE);
BlockID dia = createBlock(BLOCK_DIAMOND);
WoolID wool = createWool(COLOR_WHITE);
WoolID wool_R = createWool(COLOR_RED);
WoolID wool_B = createWool(COLOR_BLUE);
WoolID wool_G = createWool(COLOR_GREEN);
WoolID wool_Y = createWool(COLOR_YELLOW);
WoolID wool_BR = createWool(COLOR_BROWN);
StairsID stairs = createStairs(STAIRS_RED_SANDSTONE, false);

//두홍 함수
void Large_circle(int x, int y, int z) {

	for (int a = 0; a < 8; a++) {
		locateWool(wool, x, y, (z + 8) + a);
		locateWool(wool, x + 23, y, (z + 8) + a);
		locateWool(wool, (x + 8) + a, y, z);
		locateWool(wool, (x + 8) + a, y, z + 23);
	}

	locateWool(wool, x + 1, y, z + 6);
	locateWool(wool, x + 1, y, z + 7);
	locateWool(wool, x + 1, y, z + 16);
	locateWool(wool, x + 1, y, z + 17);

	locateWool(wool, x + 2, y, z + 4);
	locateWool(wool, x + 2, y, z + 5);
	locateWool(wool, x + 2, y, z + 18);
	locateWool(wool, x + 2, y, z + 19);

	locateWool(wool, x + 3, y, z + 3);
	locateWool(wool, x + 3, y, z + 20);
	locateWool(wool, x + 20, y, z + 3);
	locateWool(wool, x + 20, y, z + 20);

	locateWool(wool, x + 6, y, z + 1);
	locateWool(wool, x + 7, y, z + 1);
	locateWool(wool, x + 16, y, z + 1);
	locateWool(wool, x + 17, y, z + 1);

	locateWool(wool, x + 4, y, z + 2);
	locateWool(wool, x + 5, y, z + 2);
	locateWool(wool, x + 18, y, z + 2);
	locateWool(wool, x + 19, y, z + 2);

	locateWool(wool, x + 6, y, z + 22);
	locateWool(wool, x + 7, y, z + 22);
	locateWool(wool, x + 16, y, z + 22);
	locateWool(wool, x + 17, y, z + 22);

	locateWool(wool, x + 4, y, z + 21);
	locateWool(wool, x + 5, y, z + 21);
	locateWool(wool, x + 18, y, z + 21);
	locateWool(wool, x + 19, y, z + 21);

	locateWool(wool, x + 22, y, z + 6);
	locateWool(wool, x + 22, y, z + 7);
	locateWool(wool, x + 22, y, z + 16);
	locateWool(wool, x + 22, y, z + 17);

	locateWool(wool, x + 21, y, z + 4);
	locateWool(wool, x + 21, y, z + 5);
	locateWool(wool, x + 21, y, z + 18);
	locateWool(wool, x + 21, y, z + 19);

}
void Large_cylinder(int x, int y, int z) {

	for (int a = 0; a < 25; a++)  Large_circle(x, y + a, z);

}
void Front_door(int x, int y, int z) {

	for (int a = 0; a < 4; a++) {
		for (int b = 0; b < 5; b++) {
			locateBlock(empty, x + 10 + a, y + b, z);
		}
	}

	for (int c = 0; c < 10; c++) {
		locateWool(wool, x + 9, y, z - 1 - c);
		locateWool(wool, x + 9, y + 1, z - 1 - c);
		locateWool(wool, x + 9, y + 2, z - 1 - c);
		locateWool(wool, x + 9, y + 3, z - 1 - c);
		locateWool(wool, x + 9, y + 4, z - 1 - c);

		locateWool(wool, x + 9, y + 5, z - 1 - c);
		locateWool(wool, x + 10, y + 5, z - 1 - c);
		locateWool(wool, x + 11, y + 5, z - 1 - c);
		locateWool(wool, x + 12, y + 5, z - 1 - c);
		locateWool(wool, x + 13, y + 5, z - 1 - c);
		locateWool(wool, x + 14, y + 5, z - 1 - c);

		locateWool(wool, x + 14, y, z - 1 - c);
		locateWool(wool, x + 14, y + 1, z - 1 - c);
		locateWool(wool, x + 14, y + 2, z - 1 - c);
		locateWool(wool, x + 14, y + 3, z - 1 - c);
		locateWool(wool, x + 14, y + 4, z - 1 - c);
	}

	for (int d = 0; d < 4; d++) {
		for (int e = 0; e < 5; e++) {
			locateWool(wool_R, x + 10 + d, y + e, z - 10);
		}
	}

	locateBlock(empty, x + 11, y, z - 10);
	locateBlock(empty, x + 11, y + 1, z - 10);
	locateBlock(empty, x + 11, y + 2, z - 10);
	locateBlock(empty, x + 11, y + 3, z - 10);

	locateBlock(empty, x + 12, y, z - 10);
	locateBlock(empty, x + 12, y + 1, z - 10);
	locateBlock(empty, x + 12, y + 2, z - 10);
	locateBlock(empty, x + 12, y + 3, z - 10);

}
void Small_circle(int x, int y, int z) {

	for (int a = 0; a < 6; a++) {
		for (int b = 0; b < 6; b++) {
			locateWool(wool, x + a, y, z + b);
		}
	}

	for (int c = 1; c < 5; c++) {
		for (int d = 1; d < 5; d++) {
			locateBlock(empty, x + c, y, z + d);
		}
	}

	locateBlock(empty, x, y, z);
	locateBlock(empty, x, y, z + 5);
	locateBlock(empty, x + 5, y, z);
	locateBlock(empty, x + 5, y, z + 5);

}
void Small_cylinder(int x, int y, int z) {

	for (int a = 0; a < 20; a++) {

		Small_circle(x + 33, y + a, z - 8);
		Small_circle(x - 15, y + a, z - 8);
		Small_circle(x + 33, y + a, z + 28);
		Small_circle(x - 15, y + a, z + 28);

	}
}
void Wall(int x, int y, int z) {

	for (int a = 0; a < 18; a++) {
		for (int b = 0; b < 18; b++) {
			locateWool(wool_R, x + 15 + b, y + a, z - 5);
			locateWool(wool_R, x + 8 - b, y + a, z - 5);
		}
		for (int c = -9; c < 33; c++) {
			locateWool(wool_R, x + c, y + a, z + 30);
		}
		for (int d = -2; d < 28; d++) {
			locateWool(wool_R, x + 35, y + a, z + d);
			locateWool(wool_R, x - 12, y + a, z + d);
		}
	}

	for (int e = 9; e < 15; e++) {
		for (int f = 6; f < 18; f++) {
			locateWool(wool_R, x + e, y + f, z - 5);
		}
	}

}
void First_floor(int x, int y, int z) {

	for (int a = -12; a < 36; a++) {
		for (int b = -5; b < 31; b++) {
			locateWool(wool, x + a, y - 1, z + b);
		}
	}

	for (int c = 0; c < 4; c++) {
		for (int d = 0; d < 4; d++) {
			locateWool(wool, x + 34 + c, y - 1, z - 7 + d);
			locateWool(wool, x + 34 + c, y - 1, z + 29 + d);
			locateWool(wool, x - 14 + c, y - 1, z - 7 + d);
			locateWool(wool, x - 14 + c, y - 1, z + 29 + d);
			locateWool(wool, x + 10 + c, y - 1, z - 9 + d);
		}
	}

	locateWool(wool, x + 11, y - 1, z - 10);
	locateWool(wool, x + 12, y - 1, z - 10);

	installStairs(stairs, x + 11, y, z - 10, FACING_SOUTH);
	installStairs(stairs, x + 12, y, z - 10, FACING_SOUTH);

}
void Glass(int x, int y, int z) {

	for (int i = 0; i < 2; i++) {

		for (int a = 4; a < 20; a++) {
			for (int b = 4; b < 20; b++) {
				locateBlock(glass, x + a, y, z + b);
			}
		}

		for (int c = 0; c < 16; c++) {
			locateBlock(glass, x + 4 + c, y, z + 3);
			locateBlock(glass, x + 4 + c, y, z + 20);
			locateBlock(glass, x + 3, y, z + 4 + c);
			locateBlock(glass, x + 20, y, z + 4 + c);
		}

		for (int d = 0; d < 12; d++) {
			locateBlock(glass, x + 6 + d, y, z + 2);
			locateBlock(glass, x + 6 + d, y, z + 21);
			locateBlock(glass, x + 2, y, z + 6 + d);
			locateBlock(glass, x + 21, y, z + 6 + d);
		}

		for (int e = 0; e < 8; e++) {
			locateBlock(glass, x + 8 + e, y, z + 1);
			locateBlock(glass, x + 8 + e, y, z + 22);
			locateBlock(glass, x + 1, y, z + 8 + e);
			locateBlock(glass, x + 22, y, z + 8 + e);
		}

		y = y + 24;
	}

	y = y - 48;

	for (int f = 10; f < 14; f++) {
		for (int g = -9; g < 1; g++) {
			locateBlock(glass, x + f, y, z + g);
		}
	}
}
void Roof(int x, int y, int z) {

	for (int a = 0; a < 3; a++) {
		for (int b = a; b <= 5 - a; b++) {
			for (int c = a; c <= 5 - a; c++) {
				locateWool(wool_R, x + 33 + b, y + 20 + a, z - 8 + c);
				locateWool(wool_R, x - 15 + b, y + 20 + a, z - 8 + c);
				locateWool(wool_R, x + 33 + b, y + 20 + a, z + 28 + c);
				locateWool(wool_R, x - 15 + b, y + 20 + a, z + 28 + c);
			}
		}
	}

	locateBlock(empty, x + 33, y + 20, z - 8);
	locateBlock(empty, x + 33, y + 20, z - 3);
	locateBlock(empty, x + 38, y + 20, z - 8);
	locateBlock(empty, x + 38, y + 20, z - 3);

	locateBlock(empty, x + 33, y + 20, z + 28);
	locateBlock(empty, x + 33, y + 20, z + 33);
	locateBlock(empty, x + 38, y + 20, z + 28);
	locateBlock(empty, x + 38, y + 20, z + 33);

	locateBlock(empty, x - 15, y + 20, z + 28);
	locateBlock(empty, x - 15, y + 20, z + 33);
	locateBlock(empty, x - 10, y + 20, z + 28);
	locateBlock(empty, x - 10, y + 20, z + 33);

	locateBlock(empty, x - 15, y + 20, z - 8);
	locateBlock(empty, x - 15, y + 20, z - 3);
	locateBlock(empty, x - 10, y + 20, z - 8);
	locateBlock(empty, x - 10, y + 20, z - 3);

}
void Indoor(int x, int y, int z) {

	for (int a = 0; a < 24; a++) {

		locateWool(wool_R, x + 6, y + a, z + 21);
		locateWool(wool_R, x + 7, y + a, z + 21);
		locateWool(wool_R, x + 16, y + a, z + 21);
		locateWool(wool_R, x + 17, y + a, z + 21);

		locateBlock(blue, x + 9, y + a, z + 22);
		locateBlock(blue, x + 10, y + a, z + 22);
		locateBlock(blue, x + 13, y + a, z + 22);
		locateBlock(blue, x + 14, y + a, z + 22);

	}

	for (int b = 0; b < 6; b++) {
		for (int c = 0; c < 6; c++) {
			locateBlock(r, x + 9 + b, y, z + 15 + c);
		}
	}

	locateBlock(glass, x + 9, y, z + 15);
	locateBlock(glass, x + 9, y, z + 20);
	locateBlock(glass, x + 14, y, z + 15);
	locateBlock(glass, x + 14, y, z + 20);

	for (int e = 0; e < 2; e++) {
		for (int f = 0; f < 4; f++) {
			locateBlock(glass, x + 10, y + 1 + e, z + 16 + f);
			locateBlock(glass, x + 13, y + 1 + e, z + 16 + f);
			locateBlock(glass, x + 10 + f, y + 3, z + 18 + e);
			locateBlock(glass, x + 10 + f, y + 4, z + 18 + e);
		}
	}

	locateBlock(empty, x + 11, y + 4, z + 18);
	locateBlock(empty, x + 12, y + 4, z + 18);

	locateBlock(dia, x + 11, y + 1, z + 17);
	locateBlock(dia, x + 11, y + 1, z + 18);
	locateBlock(dia, x + 12, y + 1, z + 17);
	locateBlock(dia, x + 12, y + 1, z + 18);
	locateBlock(dia, x + 11, y + 2, z + 18);
	locateBlock(dia, x + 12, y + 2, z + 18);
	locateBlock(dia, x + 11, y + 3, z + 18);
	locateBlock(dia, x + 12, y + 3, z + 18);


	for (int d = -9; d < 15; d++) {
		locateWool(wool_R, x + 11, y, z + d);
		locateWool(wool_R, x + 12, y, z + d);
	}

	for (int g = 0; g < 6; g++) {
		locateBlock(glow, x + 9, y + g, z);
		locateBlock(glow, x + 14, y + g, z);
		locateBlock(glow, x + 9 + g, y + 5, z);
	}

	for (int h = 0; h < 8; h++) {

		locateBlock(glow, x + 1, y + 1 + h, z + 8 + h);
		locateBlock(glow, x + 1, y + 8 + h, z + 8 + h);
		locateBlock(glow, x + 1, y + 15 + h, z + 8 + h);

		locateBlock(glow, x + 22, y + 1 + h, z + 8 + h);
		locateBlock(glow, x + 22, y + 8 + h, z + 8 + h);
		locateBlock(glow, x + 22, y + 15 + h, z + 8 + h);

	}
}
void Outdoor(int x, int y, int z) {

	for (int a = 0; a < 2; a++) {

		locateWool(wool_R, x + 9, y + 25, z);
		locateWool(wool_R, x + 10, y + 25, z);
		locateWool(wool_R, x + 13, y + 25, z);
		locateWool(wool_R, x + 14, y + 25, z);

		locateWool(wool_R, x + 9, y + 25, z + 23);
		locateWool(wool_R, x + 10, y + 25, z + 23);
		locateWool(wool_R, x + 13, y + 25, z + 23);
		locateWool(wool_R, x + 14, y + 25, z + 23);

		locateWool(wool_R, x, y + 25, z + 9);
		locateWool(wool_R, x, y + 25, z + 10);
		locateWool(wool_R, x, y + 25, z + 13);
		locateWool(wool_R, x, y + 25, z + 14);

		locateWool(wool_R, x + 23, y + 25, z + 9);
		locateWool(wool_R, x + 23, y + 25, z + 10);
		locateWool(wool_R, x + 23, y + 25, z + 13);
		locateWool(wool_R, x + 23, y + 25, z + 14);

		locateWool(wool_R, x + 7, y + 25, z + 1);
		locateWool(wool_R, x + 5, y + 25, z + 2);
		locateWool(wool_R, x + 2, y + 25, z + 5);
		locateWool(wool_R, x + 1, y + 25, z + 7);

		locateWool(wool_R, x + 7, y + 25, z + 22);
		locateWool(wool_R, x + 5, y + 25, z + 21);
		locateWool(wool_R, x + 2, y + 25, z + 18);
		locateWool(wool_R, x + 1, y + 25, z + 16);

		locateWool(wool_R, x + 16, y + 25, z + 1);
		locateWool(wool_R, x + 18, y + 25, z + 2);
		locateWool(wool_R, x + 21, y + 25, z + 5);
		locateWool(wool_R, x + 22, y + 25, z + 7);

		locateWool(wool_R, x + 16, y + 25, z + 22);
		locateWool(wool_R, x + 18, y + 25, z + 21);
		locateWool(wool_R, x + 21, y + 25, z + 18);
		locateWool(wool_R, x + 22, y + 25, z + 16);

		locateWool(wool_R, x + 3, y + 25, z + 3);
		locateWool(wool_R, x + 3, y + 25, z + 20);
		locateWool(wool_R, x + 20, y + 25, z + 3);
		locateWool(wool_R, x + 20, y + 25, z + 20);

		y = y + 1;
	}

}
void Window(int x, int y, int z) {

	for (int i = 0; i < 15; i = i + 6) {

		locateBlock(empty, x + 9, y + 8 + i, z);
		locateBlock(empty, x + 10, y + 8 + i, z);
		locateBlock(empty, x + 13, y + 8 + i, z);
		locateBlock(empty, x + 14, y + 8 + i, z);
		locateBlock(empty, x + 9, y + 9 + i, z);
		locateBlock(empty, x + 10, y + 9 + i, z);
		locateBlock(empty, x + 13, y + 9 + i, z);
		locateBlock(empty, x + 14, y + 9 + i, z);

		locateBlock(empty, x + 11, y + 5 + i, z + 23);
		locateBlock(empty, x + 12, y + 5 + i, z + 23);
		locateBlock(empty, x + 11, y + 6 + i, z + 23);
		locateBlock(empty, x + 12, y + 6 + i, z + 23);

	}

}
void Light(int x, int y, int z) {

	for (int a = 21; a < 25; a++) {
		locateWool(wool, x + 11, y + a, z + 11);
	}

	for (int b = 12; b < 21; b++) {
		for (int c = 8; c < 15; c++) {
			for (int d = 8; d < 15; d++) {
				locateWool(wool_Y, x + c, y + b, z + d);
			}
		}
	}

	locateBlock(wool, x + 8, y + 12, z + 14);
	locateBlock(wool, x + 14, y + 12, z + 14);
	locateBlock(wool, x + 8, y + 20, z + 14);
	locateBlock(wool, x + 14, y + 20, z + 14);

	locateBlock(wool, x + 8, y + 12, z + 8);
	locateBlock(wool, x + 14, y + 12, z + 8);
	locateBlock(wool, x + 11, y + 13, z + 8);
	locateBlock(wool, x + 11, y + 15, z + 8);
	locateBlock(wool, x + 11, y + 16, z + 8);
	locateBlock(wool, x + 10, y + 16, z + 8);
	locateBlock(wool, x + 9, y + 17, z + 8);
	locateBlock(wool, x + 13, y + 18, z + 8);
	locateBlock(wool, x + 9, y + 18, z + 8);
	locateBlock(wool, x + 10, y + 19, z + 8);
	locateBlock(wool, x + 11, y + 19, z + 8);
	locateBlock(wool, x + 12, y + 19, z + 8);
	locateBlock(wool, x + 8, y + 20, z + 8);
	locateBlock(wool, x + 14, y + 20, z + 8);

	locateBlock(glow, x + 11, y + 12, z + 11);

}
void Picture(int x, int y, int z) {

	locateBlock(r, x - 4, y + 6, z - 5);
	locateBlock(r, x + 3, y + 6, z - 5);

	locateBlock(r, x - 6, y + 7, z - 5);
	locateBlock(r, x - 5, y + 7, z - 5);
	locateBlock(r, x - 4, y + 7, z - 5);
	locateBlock(r, x - 3, y + 7, z - 5);
	locateBlock(r, x + 2, y + 7, z - 5);
	locateBlock(r, x + 3, y + 7, z - 5);
	locateBlock(r, x + 4, y + 7, z - 5);
	locateBlock(r, x + 5, y + 7, z - 5);

	locateBlock(r, x - 5, y + 8, z - 5);
	locateBlock(r, x - 4, y + 8, z - 5);
	locateBlock(r, x - 3, y + 8, z - 5);
	locateBlock(r, x - 1, y + 8, z - 5);
	locateBlock(r, x, y + 8, z - 5);
	locateBlock(r, x + 2, y + 8, z - 5);
	locateBlock(r, x + 3, y + 8, z - 5);
	locateBlock(r, x + 4, y + 8, z - 5);

	locateBlock(r, x - 4, y + 9, z - 5);
	locateBlock(r, x - 3, y + 9, z - 5);
	locateBlock(r, x - 1, y + 9, z - 5);
	locateBlock(r, x, y + 9, z - 5);
	locateBlock(r, x + 1, y + 9, z - 5);

	for (int a = -4; a < 5; a++) {
		locateBlock(r, x + a, y + 15, z - 5);
	}

	for (int b = -3; b < 3; b++) {
		locateBlock(r, x + b, y + 16, z - 5);
	}

	for (int i = 0; i < 2; i++) {

		locateWool(wool_BR, x - 6, y + 1, z - 5);
		locateWool(wool_BR, x - 5, y + 1, z - 5);
		locateWool(wool_BR, x - 4, y + 1, z - 5);
		locateWool(wool_BR, x - 3, y + 1, z - 5);
		locateWool(wool_BR, x + 2, y + 1, z - 5);
		locateWool(wool_BR, x + 3, y + 1, z - 5);
		locateWool(wool_BR, x + 4, y + 1, z - 5);
		locateWool(wool_BR, x + 5, y + 1, z - 5);

		locateWool(wool_BR, x - 5, y + 2, z - 5);
		locateWool(wool_BR, x - 4, y + 2, z - 5);
		locateWool(wool_BR, x - 3, y + 2, z - 5);
		locateWool(wool_BR, x + 2, y + 2, z - 5);
		locateWool(wool_BR, x + 3, y + 2, z - 5);
		locateWool(wool_BR, x + 4, y + 2, z - 5);

		locateWool(wool_B, x - 4, y + 3, z - 5);
		locateWool(wool_B, x - 3, y + 3, z - 5);
		locateWool(wool_B, x - 2, y + 3, z - 5);
		locateWool(wool_B, x + 1, y + 3, z - 5);
		locateWool(wool_B, x + 2, y + 3, z - 5);
		locateWool(wool_B, x + 3, y + 3, z - 5);

		locateWool(wool_B, x - 4, y + 4, z - 5);
		locateWool(wool_B, x - 3, y + 4, z - 5);
		locateWool(wool_B, x - 2, y + 4, z - 5);
		locateWool(wool_B, x + 1, y + 4, z - 5);
		locateWool(wool_B, x + 2, y + 4, z - 5);
		locateWool(wool_B, x + 3, y + 4, z - 5);

		locateBlock(sand, x - 6, y + 4, z - 5);
		locateBlock(sand, x - 5, y + 4, z - 5);
		locateBlock(sand, x + 4, y + 4, z - 5);
		locateBlock(sand, x + 5, y + 4, z - 5);

		locateWool(wool_B, x - 3, y + 5, z - 5);
		locateWool(wool_B, x - 2, y + 5, z - 5);
		locateWool(wool_B, x - 1, y + 5, z - 5);
		locateWool(wool_B, x, y + 5, z - 5);
		locateWool(wool_B, x + 1, y + 5, z - 5);
		locateWool(wool_B, x + 2, y + 5, z - 5);

		locateBlock(sand, x - 6, y + 5, z - 5);
		locateBlock(sand, x - 5, y + 5, z - 5);
		locateBlock(sand, x - 4, y + 5, z - 5);
		locateBlock(sand, x + 3, y + 5, z - 5);
		locateBlock(sand, x + 4, y + 5, z - 5);
		locateBlock(sand, x + 5, y + 5, z - 5);

		locateWool(wool_B, x - 3, y + 6, z - 5);
		locateWool(wool_Y, x - 2, y + 6, z - 5);
		locateWool(wool_B, x - 1, y + 6, z - 5);
		locateWool(wool_B, x, y + 6, z - 5);
		locateWool(wool_Y, x + 1, y + 6, z - 5);
		locateWool(wool_B, x + 2, y + 6, z - 5);

		locateBlock(sand, x - 6, y + 6, z - 5);
		locateBlock(sand, x - 5, y + 6, z - 5);
		locateBlock(sand, x + 4, y + 6, z - 5);
		locateBlock(sand, x + 5, y + 6, z - 5);

		locateWool(wool_B, x - 2, y + 7, z - 5);
		locateWool(wool_B, x - 1, y + 7, z - 5);
		locateWool(wool_B, x, y + 7, z - 5);
		locateWool(wool_B, x + 1, y + 7, z - 5);

		locateWool(wool_B, x - 2, y + 8, z - 5);
		locateWool(wool_B, x + 1, y + 8, z - 5);
		locateWool(wool_B, x - 2, y + 9, z - 5);

		locateBlock(sand, x - 3, y + 10, z - 5);
		locateBlock(sand, x - 2, y + 10, z - 5);
		locateBlock(sand, x - 1, y + 10, z - 5);
		locateBlock(sand, x, y + 10, z - 5);
		locateBlock(sand, x + 1, y + 10, z - 5);
		locateBlock(sand, x + 2, y + 10, z - 5);
		locateBlock(sand, x + 3, y + 10, z - 5);

		locateBlock(sand, x - 3, y + 11, z - 5);
		locateBlock(sand, x - 2, y + 11, z - 5);
		locateBlock(sand, x - 1, y + 11, z - 5);
		locateBlock(sand, x, y + 11, z - 5);

		locateWool(wool_BR, x - 5, y + 11, z - 5);
		locateWool(wool_BR, x - 4, y + 11, z - 5);
		locateWool(wool_BR, x + 1, y + 11, z - 5);
		locateWool(wool_BR, x + 2, y + 11, z - 5);
		locateWool(wool_BR, x + 3, y + 11, z - 5);
		locateWool(wool_BR, x + 4, y + 11, z - 5);

		locateBlock(sand, x - 4, y + 12, z - 5);
		locateBlock(sand, x - 1, y + 12, z - 5);
		locateBlock(sand, x, y + 12, z - 5);
		locateBlock(sand, x + 1, y + 12, z - 5);
		locateBlock(sand, x + 3, y + 12, z - 5);
		locateBlock(sand, x + 4, y + 12, z - 5);
		locateBlock(sand, x + 5, y + 12, z - 5);

		locateWool(wool_BR, x - 5, y + 12, z - 5);
		locateWool(wool_BR, x - 3, y + 12, z - 5);
		locateWool(wool_BR, x - 2, y + 12, z - 5);
		locateWool(wool_BR, x + 2, y + 12, z - 5);

		locateBlock(sand, x - 4, y + 13, z - 5);
		locateBlock(sand, x - 2, y + 13, z - 5);
		locateBlock(sand, x - 1, y + 13, z - 5);
		locateBlock(sand, x, y + 13, z - 5);
		locateBlock(sand, x + 2, y + 13, z - 5);
		locateBlock(sand, x + 3, y + 13, z - 5);
		locateBlock(sand, x + 4, y + 13, z - 5);

		locateWool(wool_BR, x - 5, y + 13, z - 5);
		locateWool(wool_BR, x - 3, y + 13, z - 5);
		locateWool(wool_BR, x + 1, y + 13, z - 5);

		locateBlock(sand, x - 1, y + 14, z - 5);
		locateBlock(sand, x, y + 14, z - 5);
		locateBlock(sand, x + 2, y + 14, z - 5);

		locateWool(wool_BR, x - 4, y + 14, z - 5);
		locateWool(wool_BR, x - 3, y + 14, z - 5);
		locateWool(wool_BR, x - 2, y + 14, z - 5);
		locateWool(wool_BR, x + 1, y + 14, z - 5);

		x = x + 24;
	}

	x = x - 24;

	locateWool(wool_G, x - 4, y + 6, z - 5);
	locateWool(wool_G, x + 3, y + 6, z - 5);

	locateWool(wool_G, x - 6, y + 7, z - 5);
	locateWool(wool_G, x - 5, y + 7, z - 5);
	locateWool(wool_G, x - 4, y + 7, z - 5);
	locateWool(wool_G, x - 3, y + 7, z - 5);
	locateWool(wool_G, x + 2, y + 7, z - 5);
	locateWool(wool_G, x + 3, y + 7, z - 5);
	locateWool(wool_G, x + 4, y + 7, z - 5);
	locateWool(wool_G, x + 5, y + 7, z - 5);

	locateWool(wool_G, x - 5, y + 8, z - 5);
	locateWool(wool_G, x - 4, y + 8, z - 5);
	locateWool(wool_G, x - 3, y + 8, z - 5);
	locateWool(wool_G, x - 1, y + 8, z - 5);
	locateWool(wool_G, x, y + 8, z - 5);
	locateWool(wool_G, x + 2, y + 8, z - 5);
	locateWool(wool_G, x + 3, y + 8, z - 5);
	locateWool(wool_G, x + 4, y + 8, z - 5);

	locateWool(wool_G, x - 4, y + 9, z - 5);
	locateWool(wool_G, x - 3, y + 9, z - 5);
	locateWool(wool_G, x - 1, y + 9, z - 5);
	locateWool(wool_G, x, y + 9, z - 5);
	locateWool(wool_G, x + 1, y + 9, z - 5);

	for (int a = -4; a < 5; a++) {
		locateWool(wool_G, x + a, y + 15, z - 5);
	}

	for (int b = -3; b < 3; b++) {
		locateWool(wool_G, x + b, y + 16, z - 5);
	}

}

//합칠 때 김두홍 함수
void doohong(int x, int y, int z) {

	Large_cylinder(x, y, z);
	Front_door(x, y, z);
	Small_cylinder(x, y, z);
	Wall(x, y, z);
	First_floor(x, y, z);
	Glass(x, y, z);
	Roof(x, y, z);
	Indoor(x, y, z);
	Outdoor(x, y, z);
	Picture(x, y, z);
	Window(x, y, z);
	Light(x, y, z);

}



//홍찬 : 함수에서 쓸 블록 선언
BlockID quartz = createBlock(BLOCK_NETHER_QUARTZ);
BlockID gold = createBlock(BLOCK_GOLD);
CarpetID red = createCarpet(COLOR_RED);
CarpetID white = createCarpet(COLOR_WHITE);
WoolID redwool = createWool(COLOR_RED);
WoolID black = createWool(COLOR_BLACK);
WoolID green = createWool(COLOR_LIME);
WoolID yellow = createWool(COLOR_YELLOW);
BricksID bricks = createBricks(BRICKS);

//홍찬 함수
void arch(int x, int y, int z)
{
	for (int i = 0; i < 18; i++)
	{
		locateBlock(quartz, x, y + i, z);
		locateBlock(quartz, x, y + i, z - 10);
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 14; j + i < 18; j++)
		{
			locateBlock(quartz, x, y + j + i, z - i - 1);
			locateBlock(quartz, x, y + j + i, z + i - 9);
		}
	}
	locateBlock(quartz, x, y + 17, z - 5);
}
void archrow(int a, int b, int c)
{
	for (int i = 0; i < 77; i = i + 11)
	{
		arch(a, b, c - i);
		arch(a + 48, b, c - i);
	}
}
void redcarpet(int x, int y, int z)
{
	for (int i = 0; i < 57; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			locateBlock(red, x + j, y, z - i);
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			locateBlock(red, x + j, y - 3, z + i + 3);
		}
	}
}
void table(int x, int y, int z)
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			locateBlock(quartz, x + j, y + 1, z - i);
		}
	}
	for (int i = 0; i <= 4; i = i + 4)
	{
		locateBlock(quartz, x, y, z - i);
		locateBlock(quartz, x + 4, y, z - i);
	}
}
void tablerow(int a, int b, int c)
{
	for (int i = 0; i < 44; i = i + 11)
	{
		table(a, b, c - i);
		table(a + 28, b, c - i);
	}
}
void wall(int x, int y, int z)
{
	for (int i = 0; i < 18; i++)
	{
		for (int j = 0; j < 17; j++)
		{
			locateBlock(quartz, x + 1 + j, y + i, z + 1);
			locateBlock(quartz, x + 33 + j, y + i, z + 1);
			locateBlock(quartz, x + 1 + j, y + i, z + -77);
			locateBlock(quartz, x + 33 + j, y + i, z + -77);
		}
	}
}
void frontdoor(int x, int y, int z)
{
	for (int i = 0; i < 18; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			locateBlock(quartz, x - j, y + i, z);
			locateBlock(quartz, x + 10 + j, y + i, z);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 14; j + i < 18; j++)
		{
			locateBlock(quartz, x + i + 1, y + j + i, z);
			locateBlock(quartz, x + 9 - i, y + j + i, z);
		}
	}
	locateBlock(quartz, x + 5, y + 17, z);
	for (int i = 0; i <= 6; i = i + 2)
	{
		for (int k = 0; k < 9 - i; k++)
		{
			locateBlock(glass, x + 1 + k + i / 2, y + 13 + i / 2, z);
		}
	}
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			locateBlock(gold, x + 1, y + i, z + j + 1);
			locateBlock(gold, x + 9, y + i, z + j + 1);
		}
	}
}
void back(int x, int y, int z)
{
	for (int i = 0; i < 18; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			locateBlock(quartz, x - j, y + i, z);
			locateBlock(quartz, x + 10 + j, y + i, z);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 14; j + i < 18; j++)
		{
			locateBlock(quartz, x + i + 1, y + j + i, z);
			locateBlock(quartz, x + 9 - i, y + j + i, z);
		}
	}
	locateBlock(quartz, x + 5, y + 17, z);
	for (int i = 0; i <= 6; i = i + 2)
	{
		for (int k = 0; k < 9 - i; k++)
		{
			locateBlock(glass, x + 1 + k + i / 2, y + 13 + i / 2, z);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			locateBlock(glass, x + 1 + i, y + j, z);
		}
	}
}
void floor(int x, int y, int z)
{
	for (int i = 0; i < 79; i++)
	{
		for (int j = 0; j < 49; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				locateBlock(quartz, x + j, y + k, z - i);
			}
		}
	}
}
void window(int x, int y, int z)
{
	for (int i = 0; i <= 6; i = i + 2)
	{
		for (int k = 0; k < 9 - i; k++)
		{
			locateBlock(glass, x, y + 13 + i / 2, z + k + i / 2);
		}
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			locateBlock(glass, x, y + j, z + i);
		}
	}
}
void windowrow(int a, int b, int c)
{
	for (int i = 0; i < 77; i = i + 11)
	{
		window(a, b, c - i);
		window(a + 48, b, c - i);
	}
}
void stair(int x, int y, int z)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - i; j++)
		{
			for (int k = 0; k < 15; k++)
			{
				locateBlock(quartz, x + k, y + j, z + i);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3 - i; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				locateBlock(redwool, x + k + 3, y + j, z + i);
			}
		}
	}
}
void roof(int x, int y, int z)
{
	for (int i = 0; i < 83; i++)
	{
		for (int j = 0; j < 55; j++)
		{
			locateBlock(quartz, x + j, y, z - i);
			locateBlock(quartz, x + j, y + 1, z - i);
		}
	}
}
void redmushroom(int x, int y, int z)
{
	for (int i = 0; i < 8; i++)
	{
		locateBlock(black, x + 4 + i, y, z);
	}
	for (int i = 0; i < 2; i++)
	{
		locateBlock(black, x + 2, y + 2 + i, z);
		locateBlock(black, x + 13, y + 2 + i, z);
		locateBlock(black, x + 6, y + 3 + i, z);
		locateBlock(black, x + 9, y + 3 + i, z);
		locateBlock(black, x + 1, y + 11 + i, z);
		locateBlock(black, x + 14, y + 11 + i, z);
		locateBlock(black, x + 3 + i, y + 14, z);
		locateBlock(black, x + 11 + i, y + 14, z);
		locateBlock(redwool, x + 2 + i, y + 5, z);
		locateBlock(redwool, x + 12 + i, y + 5, z);
		locateBlock(redwool, x + 3 + i, y + 7, z);
		locateBlock(redwool, x + 9 + i, y + 7, z);
		locateBlock(redwool, x + 3 + i, y + 11, z);
		locateBlock(redwool, x + 9 + i, y + 11, z);
	}
	for (int i = 0; i < 3; i++)
	{
		locateBlock(black, x + 1 + i, y + 4, z);
		locateBlock(black, x + 12 + i, y + 4, z);
	}
	for (int i = 0; i < 8; i++)
	{
		locateBlock(black, x + 4 + i, y + 5, z);
	}
	for (int i = 0; i < 6; i++)
	{
		locateBlock(black, x, y + 5 + i, z);
		locateBlock(black, x + 15, y + 5 + i, z);
		locateBlock(black, x + 5 + i, y + 15, z);
		locateBlock(redwool, x + 4 + i, y + 12, z);
	}
	for (int i = 0; i < 9; i++)
	{
		locateBlock(redwool, x + 3 + i, y + 6, z);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			locateBlock(redwool, x + 1 + i, y + 9 + j, z);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			locateBlock(redwool, x + 5 + i, y + 13 + j, z);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		locateBlock(redwool, x + 10 + i, y + 10, z);
	}
	locateBlock(black, x + 3, y + 1, z);
	locateBlock(black, x + 12, y + 1, z);
	locateBlock(black, x + 2, y + 13, z);
	locateBlock(black, x + 13, y + 13, z);
	locateBlock(redwool, x + 14, y + 5, z);
	locateBlock(redwool, x + 14, y + 6, z);
	locateBlock(redwool, x + 2, y + 8, z);
	locateBlock(redwool, x + 3, y + 8, z);
	locateBlock(redwool, x + 10, y + 8, z);
	locateBlock(redwool, x + 10, y + 9, z);
	locateBlock(redwool, x + 11, y + 9, z);
	locateBlock(redwool, x + 14, y + 9, z);
}
void greenmushroom(int x, int y, int z)
{
	for (int i = 0; i < 8; i++)
	{
		locateBlock(black, x + 4 + i, y, z);
	}
	for (int i = 0; i < 2; i++)
	{
		locateBlock(black, x + 2, y + 2 + i, z);
		locateBlock(black, x + 13, y + 2 + i, z);
		locateBlock(black, x + 6, y + 3 + i, z);
		locateBlock(black, x + 9, y + 3 + i, z);
		locateBlock(black, x + 1, y + 11 + i, z);
		locateBlock(black, x + 14, y + 11 + i, z);
		locateBlock(black, x + 3 + i, y + 14, z);
		locateBlock(black, x + 11 + i, y + 14, z);
		locateBlock(green, x + 2 + i, y + 5, z);
		locateBlock(green, x + 12 + i, y + 5, z);
		locateBlock(green, x + 3 + i, y + 7, z);
		locateBlock(green, x + 9 + i, y + 7, z);
		locateBlock(green, x + 3 + i, y + 11, z);
		locateBlock(green, x + 9 + i, y + 11, z);
	}
	for (int i = 0; i < 3; i++)
	{
		locateBlock(black, x + 1 + i, y + 4, z);
		locateBlock(black, x + 12 + i, y + 4, z);
	}
	for (int i = 0; i < 8; i++)
	{
		locateBlock(black, x + 4 + i, y + 5, z);
	}
	for (int i = 0; i < 6; i++)
	{
		locateBlock(black, x, y + 5 + i, z);
		locateBlock(black, x + 15, y + 5 + i, z);
		locateBlock(black, x + 5 + i, y + 15, z);
		locateBlock(green, x + 4 + i, y + 12, z);
	}
	for (int i = 0; i < 9; i++)
	{
		locateBlock(green, x + 3 + i, y + 6, z);
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			locateBlock(green, x + 1 + i, y + 9 + j, z);
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			locateBlock(green, x + 5 + i, y + 13 + j, z);
		}
	}
	for (int i = 0; i < 5; i++)
	{
		locateBlock(green, x + 10 + i, y + 10, z);
	}
	locateBlock(black, x + 3, y + 1, z);
	locateBlock(black, x + 12, y + 1, z);
	locateBlock(black, x + 2, y + 13, z);
	locateBlock(black, x + 13, y + 13, z);
	locateBlock(green, x + 14, y + 5, z);
	locateBlock(green, x + 14, y + 6, z);
	locateBlock(green, x + 2, y + 8, z);
	locateBlock(green, x + 3, y + 8, z);
	locateBlock(green, x + 10, y + 8, z);
	locateBlock(green, x + 10, y + 9, z);
	locateBlock(green, x + 11, y + 9, z);
	locateBlock(green, x + 14, y + 9, z);
}
void star(int x, int y, int z)
{
	for (int i = 0; i < 2; i++)
	{
		locateBlock(yellow, x + i + 1, y, z);
		locateBlock(yellow, x + i + 11, y, z);
		locateBlock(yellow, x + i + 6, y, z - 14);
		locateBlock(yellow, x + i + 6, y, z - 15);
	}
	for (int i = 0; i < 3; i++)
	{
		locateBlock(yellow, x + i + 1, y, z - 1);
		locateBlock(yellow, x + i + 10, y, z - 1);
	}
	for (int i = 0; i < 4; i++)
	{
		locateBlock(yellow, x + i + 2, y, z - 2);
		locateBlock(yellow, x + i + 8, y, z - 2);
		locateBlock(yellow, x + i + 5, y, z - 12);
		locateBlock(yellow, x + i + 5, y, z - 13);
	}
	for (int i = 0; i < 10; i++)
	{
		locateBlock(yellow, x + i + 2, y, z - 3);
		locateBlock(yellow, x + i + 2, y, z - 4);
		locateBlock(yellow, x + i + 2, y, z - 7);
	}
	for (int i = 0; i < 8; i++)
	{
		locateBlock(yellow, x + i + 3, y, z - 5);
		locateBlock(yellow, x + i + 3, y, z - 6);
	}
	for (int i = 0; i < 12; i++)
	{
		locateBlock(yellow, x + i + 1, y, z - 8);
	}
	for (int i = 0; i < 14; i++)
	{
		locateBlock(yellow, x + i, y, z - 9);
		locateBlock(yellow, x + i, y, z - 10);
	}
	for (int i = 0; i < 6; i++)
	{
		locateBlock(yellow, x + i + 4, y, z - 11);
	}
}

//합칠 때 윤홍찬 함수
void hongchan(int x, int y, int z)
{
	floor(x, y, z);
	archrow(x, y + 3, z - 1);
	stair(x + 17, y, z + 1);
	redcarpet(x + 20, y + 3, z + 1);
	tablerow(x + 8, y + 3, z - 15);
	wall(x - 1, y + 3, z - 1);
	frontdoor(x + 19, y + 3, z - 1);
	back(x + 19, y + 3, z - 77);
	windowrow(x, y + 3, z - 10);
	roof(x - 3, y + 21, z + 2);
	redmushroom(x + 1, y + 3, z);
	greenmushroom(x + 32, y + 3, z);
	redmushroom(x + 32, y + 3, z - 78);
	greenmushroom(x + 1, y + 3, z - 78);
	star(x + 17, y + 2, z - 58);
}



//도균 : 함수에서 쓸 블록 선언
int px, py, pz;
BlockID stone = createBlock(BLOCK_STONE);
BlockID iron = createBlock(BLOCK_IRON);
SlabID stone_slab = createSlab(SLAB_STONE);
BricksID st_bricks = createBricks(BRICKS_STONE);

//도균 함수
void imsi_straight(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	locateBlock(gold, x, y, z);
	locateBlock(gold, x, y + 1, z);
	locateBlock(gold, x - 10, y, z);
	locateBlock(gold, x - 10, y + 1, z);

	locateBlock(st_bricks, x - 1, y, z);
	locateBlock(st_bricks, x - 9, y, z);

	for (int j = 0; j < 3; j++) {
		locateBlock(stone, x - 2 - j, y, z);
	}
	locateBlock(stone, x - 5, y, z);
	for (int j = 0; j < 3; j++) {
		locateBlock(stone, x - 6 - j, y, z);
	}
}
void startline(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	WoolID white = createWool(COLOR_WHITE);


	for (int j = 0; j < 2; j++) {
		for (int i = 0; i < 3; i++) {
			locateBlock(blue, x + 1, y + j, z - i);
			locateBlock(blue, x - 9, y + j, z - i);
		}
	}

	for (int i = 1; i <= 9; i++) {
		if (i % 2 == 0) {
			locateBlock(black, x, y, z);
			locateBlock(white, x, y, z - 1);
			locateBlock(black, x, y, z - 2);
		}
		else {
			locateBlock(white, x, y, z);
			locateBlock(black, x, y, z - 1);
			locateBlock(white, x, y, z - 2);
		}
		x--;
	}


}
void right_storefloor(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	int cnt = 1, point = 1;      //cnt는 끝쪽라인 블록의 개수.
	//point는 홀수 줄 짝수 줄의 기준
	while (cnt <= 9) {
		if (point % 2 == 0) {
			for (int i = 0; i < cnt; i++) {
				locateBlock(glass, x, y, z + i);
			}
			x++;
			z--;
			point++;
			cnt += 2;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				locateBlock(iron, x, y, z + i);
			}
			x++;
			z--;
			point++;
			cnt += 2;
		}
	}
}
void left_storefloor(int px, int py, int pz) {
	int x = px - 3, y = py, z = pz;
	int cnt = 1, point = 1;

	while (cnt <= 9) {
		if (point % 2 == 0) {
			for (int i = 0; i < cnt; i++) {
				locateBlock(glass, x, y, z + i);
			}
			x--;
			z--;
			point++;
			cnt += 2;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				locateBlock(iron, x, y, z + i);
			}
			x--;
			z--;
			point++;
			cnt += 2;
		}
	}
}
void north_storefloor(int px, int py, int pz) {
	int x = px - 1, y = py, z = pz;
	int cnt = 2, point = 1;

	while (cnt <= 10) {
		if (point % 2 == 0) {
			for (int i = 0; i < cnt; i++) {
				locateBlock(glass, x - i, y, z);
			}
			x++;
			z--;
			point++;
			cnt += 2;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				locateBlock(iron, x - i, y, z);
			}
			x++;
			z--;
			point++;
			cnt += 2;
		}
	}
}
void south_storefloor(int px, int py, int pz) {
	int x = px - 1, y = py, z = pz;
	int cnt = 2, point = 1;

	while (cnt <= 10) {
		if (point % 2 == 0) {
			for (int i = 0; i < cnt; i++) {
				locateBlock(glass, x - i, y, z);
			}
			x++;
			z++;
			point++;
			cnt += 2;
		}
		else {
			for (int i = 0; i < cnt; i++) {
				locateBlock(iron, x - i, y, z);
			}
			x++;
			z++;
			point++;
			cnt += 2;
		}
	}
}
void carstore(int px, int py, int pz) {
	int x = px, y = py, z = pz;

	for (int i = 0; i < 10; i++) {
		//가로
		locateBlock(stone_slab, x - 6 + i, y, z - 5);
		locateBlock(stone_slab, x - 6 + i, y, z + 5);
	}
	for (int i = 0; i < 7; i++) {
		//세로
		locateBlock(stone_slab, x - 8, y, z - 3 + i);
		locateBlock(stone_slab, x + 5, y, z - 3 + i);
	}

	left_storefloor(x, y, z);
	right_storefloor(x, y, z);
	north_storefloor(x, y, z);
	south_storefloor(x, y, z);

}
void storepillar(int px, int py, int pz) {
	int x = px, y = py, z = pz;

	for (int i = 0; i < 6; i++) {
		locateBlock(iron, x + 5, y + i, z + 4);
		locateBlock(iron, x + 4, y + i, z + 5);

		locateBlock(iron, x + 4, y + i, z - 5);
		locateBlock(iron, x + 5, y + i, z - 4);

		locateBlock(iron, x - 8, y + i, z - 4);
		locateBlock(iron, x - 7, y + i, z - 5);

		locateBlock(iron, x - 8, y + i, z + 4);
		locateBlock(iron, x - 7, y + i, z + 5);

		for (int i = 0; i < 10; i++) {
			//가로
			locateBlock(iron, x - 6 + i, y + 5, z - 5);
			locateBlock(iron, x - 6 + i, y + 5, z + 5);
		}
		for (int i = 0; i < 7; i++) {
			//세로
			locateBlock(iron, x - 8, y + 5, z - 3 + i);
			locateBlock(iron, x + 5, y + 5, z - 3 + i);
		}
	}
}
void road_straight1(int px, int py, int pz) {
	int x = px, y = py, z = pz;

	for (int i = 0; i < 2; i++) {
		locateBlock(gold, x, y, z - i);
		locateBlock(gold, x, y + 1, z - i);
		locateBlock(gold, x - 10, y, z - i);
		locateBlock(gold, x - 10, y + 1, z - i);

		locateBlock(st_bricks, x - 1, y, z - i);
		locateBlock(st_bricks, x - 9, y, z - i);

		for (int j = 0; j < 7; j++) {
			locateBlock(stone, x - 2 - j, y, z - i);
		}
	}
}
void road_straight2(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	for (int i = 0; i < 2; i++) {
		locateBlock(gold, x, y, z - i);
		locateBlock(gold, x, y + 1, z - i);
		locateBlock(gold, x - 10, y, z - i);
		locateBlock(gold, x - 10, y + 1, z - i);

		locateBlock(st_bricks, x - 1, y, z - i);
		locateBlock(st_bricks, x - 9, y, z - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - 2 - j, y, z - i);
		}
		locateBlock(iron, x - 5, y, z - i);
		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - 6 - j, y, z - i);
		}
	}
}
void road_straight_z(int px, int py, int pz, int length) {
	int x = px, y = py, z = pz, cnt = length;

	for (int i = 0; i < cnt / 2; i += 4) {
		road_straight1(x, y, z - i);
	}
	for (int i = 0; i < cnt / 2; i += 4) {
		road_straight2(x, y, z - 2 - i);
	}
}
void road_straight_z2(int px, int py, int pz, int length) {
	int x = px, y = py, z = pz, cnt = length;

	for (int i = 0; i < cnt / 2; i += 4) {
		road_straight1(x, y, z + i);
	}
	for (int i = 0; i < cnt / 2; i += 4) {
		road_straight2(x, y, z - 2 + i);
	}
}
void road_straight3(int px, int py, int pz) {
	int x = px, y = py, z = pz;

	for (int i = 0; i < 2; i++) {
		locateBlock(gold, x + i, y, z);
		locateBlock(gold, x + i, y + 1, z);
		locateBlock(gold, x + i, y, z - 10);
		locateBlock(gold, x + i, y + 1, z - 10);

		locateBlock(st_bricks, x + i, y, z - 1);
		locateBlock(st_bricks, x + i, y, z - 9);

		for (int j = 0; j < 7; j++) {
			locateBlock(stone, x + i, y, z - 2 - j);
		}
	}
}
void road_straight4(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	for (int i = 0; i < 2; i++) {
		locateBlock(gold, x + i, y, z);
		locateBlock(gold, x + i, y + 1, z);
		locateBlock(gold, x + i, y, z - 10);
		locateBlock(gold, x + i, y + 1, z - 10);

		locateBlock(st_bricks, x + i, y, z - 1);
		locateBlock(st_bricks, x + i, y, z - 9);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + i, y, z - 2 - j);
		}

		locateBlock(iron, x + i, y, z - 5);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + i, y, z - 6 - j);
		}
	}
}
void road_straight_x(int px, int py, int pz, int length) {
	int x = px, y = py, z = pz, cnt = length;

	for (int i = 0; i < cnt / 2; i += 4) {
		road_straight3(x + i, y, z);
	}
	for (int i = 0; i < cnt / 2; i += 4) {
		road_straight4(x + 2 + i, y, z);
	}
}
void road_turnright1(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	int i, add = 0;
	for (i = 0; i < 5; i++) {
		locateBlock(gold, x + i, y, z - i);
		locateBlock(gold, x + i, y + 1, z - i);
		locateBlock(gold, x + i - 10, y, z - i);
		locateBlock(gold, x + i - 10, y + 1, z - i);

		locateBlock(st_bricks, x - 1 + i, y, z - i);
		locateBlock(st_bricks, x - 9 + i, y, z - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - 2 - j + i, y, z - i);
		}

		locateBlock(iron, x - 5 + i, y, z - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - 6 - j + i, y, z - i);
		}
	}

	//부족한 부분 매꾸기.
	for (i = 5; i < 9; i++) {
		locateBlock(gold, x + i - 10, y, z - i);
		locateBlock(gold, x + i - 10, y + 1, z - i);

		locateBlock(st_bricks, x - 9 + i, y, z - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - 6 - j + i, y, z - i);
		}

		locateBlock(iron, x - 5 + i, y, z - i);
	}

	for (i = 5; i < 9; i++) {
		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x - 2 - j + i - add, y, z - i);
		}
		add++;
	}
	add = 0;
	for (i = 9; i < 13; i++) {
		locateBlock(gold, x + i - 10, y, z - i);
		locateBlock(gold, x + i - 10, y + 1, z - i);

		locateBlock(st_bricks, x - 9 + i, y, z - i);

		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x - 6 - j + i - add, y, z - i);
		}
		add++;
	}
	locateBlock(gold, x + i - 10, y + 1, z - i);
}
void road_turnright2(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	int i, add = 0;
	for (int i = 0; i < 5; i++) {
		locateBlock(gold, x + i, y, z + i);
		locateBlock(gold, x + i, y + 1, z + i);
		locateBlock(gold, x + i, y, z - 10 + i);
		locateBlock(gold, x + i, y + 1, z - 10 + i);

		locateBlock(st_bricks, x + i, y, z - 1 + i);
		locateBlock(st_bricks, x + i, y, z - 9 + i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + i, y, z - 2 - j + i);
		}

		locateBlock(iron, x + i, y, z - 5 + i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + i, y, z - 6 - j + i);
		}
	}

	//부족한 부분 매꾸기.
	for (i = 5; i < 9; i++) {
		locateBlock(gold, x + i, y, z - 10 + i);
		locateBlock(gold, x + i, y + 1, z - 10 + i);

		locateBlock(st_bricks, x + i, y, z - 9 + i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + i, y, z - 6 - j + i);
		}

		locateBlock(iron, x + i, y, z - 5 + i);
	}

	for (i = 5; i < 9; i++) {
		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x + i, y, z - 2 - j + i - add);
		}
		add++;
	}
	add = 0;
	for (i = 9; i < 13; i++) {
		locateBlock(gold, x + i, y, z - 10 + i);
		locateBlock(gold, x + i, y + 1, z - 10 + i);

		locateBlock(st_bricks, x + i, y, z - 9 + i);

		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x + i, y, z - 6 - j + i - add);
		}
		add++;
	}
	locateBlock(gold, x + i, y + 1, z - 10 + i);
}
void road_turnright3(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	int i, add = 0;
	for (i = 0; i < 5; i++) {
		locateBlock(gold, x - i, y, z + i);
		locateBlock(gold, x - i, y + 1, z + i);
		locateBlock(gold, x - i + 10, y, z + i);
		locateBlock(gold, x - i + 10, y + 1, z + i);

		locateBlock(st_bricks, x + 1 - i, y, z + i);
		locateBlock(st_bricks, x + 9 - i, y, z + i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + 2 + j - i, y, z + i);
		}

		locateBlock(iron, x + 5 - i, y, z + i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + 6 + j - i, y, z + i);
		}
	}

	//부족한 부분 매꾸기.
	for (i = 5; i < 9; i++) {
		locateBlock(gold, x - i + 10, y, z + i);
		locateBlock(gold, x - i + 10, y + 1, z + i);

		locateBlock(st_bricks, x + 9 - i, y, z + i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x + 6 + j - i, y, z + i);
		}

		locateBlock(iron, x + 5 - i, y, z + i);
	}

	for (i = 5; i < 9; i++) {
		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x + 2 + j - i + add, y, z + i);
		}
		add++;
	}
	add = 0;
	for (i = 9; i < 13; i++) {
		locateBlock(gold, x - i + 10, y, z + i);
		locateBlock(gold, x - i + 10, y + 1, z + i);

		locateBlock(st_bricks, x + 9 - i, y, z + i);

		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x + 6 + j - i + add, y, z + i);
		}
		add++;
	}
	locateBlock(gold, x - i + 10, y + 1, z + i);
}
void road_turnright4(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	int i, add = 0;

	for (int i = 0; i < 5; i++) {
		locateBlock(gold, x - i, y, z - i);
		locateBlock(gold, x - i, y + 1, z - i);
		locateBlock(gold, x - i, y, z + 10 - i);
		locateBlock(gold, x - i, y + 1, z + 10 - i);

		locateBlock(st_bricks, x - i, y, z + 1 - i);
		locateBlock(st_bricks, x - i, y, z + 9 - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - i, y, z + 2 + j - i);
		}

		locateBlock(iron, x - i, y, z + 5 - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - i, y, z + 6 + j - i);
		}
	}
	//부족한 부분 매꾸기.
	for (i = 5; i < 9; i++) {
		locateBlock(gold, x - i, y, z + 10 - i);
		locateBlock(gold, x - i, y + 1, z + 10 - i);

		locateBlock(st_bricks, x - i, y, z + 9 - i);

		for (int j = 0; j < 3; j++) {
			locateBlock(stone, x - i, y, z + 6 + j - i);
		}

		locateBlock(iron, x - i, y, z + 5 - i);
	}

	for (i = 5; i < 9; i++) {
		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x - i, y, z + 2 + j - i + add);
		}
		add++;
	}
	add = 0;
	for (i = 9; i < 13; i++) {
		locateBlock(gold, x - i, y, z + 10 - i);
		locateBlock(gold, x - i, y + 1, z + 10 - i);

		locateBlock(st_bricks, x - i, y, z + 9 - i);

		for (int j = 0; j < 3 - add; j++) {
			locateBlock(stone, x - i, y, z + 6 + j - i + add);
		}
		add++;
	}
	locateBlock(gold, x - i, y + 1, z + 10 - i);
}
void make_store(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	carstore(x, y, z);
	storepillar(x, y, z);
}
void make_track(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	startline(x, y, z);      //출발선 만들기

	road_straight_z(x + 1, y, z - 3, 40);
	road_turnright1(x + 1, y, z - 23);
	road_straight_x(x + 5, y, z - 27, 20);
	//locateBlock(blue,x + 5, y + 3, z - 27);
	road_turnright2(x + 17, y, z - 27);
	road_straight_z2(x + 31, y, z - 20, 80);

	road_turnright3(x + 21, y, z + 16);
	road_straight_x(x + 6, y, z + 30, 20);

	road_turnright4(x + 5, y, z + 19);
	//locateBlock(blue, x + 5, y+4, z + 19);
	road_straight_z(x + 1, y, z + 15, 20);
	road_straight1(x + 1, y, z + 3);
	imsi_straight(x + 1, y, z + 1);
}

//합칠 때 김도균 함수
void dogyun(int px, int py, int pz) {
	int x = px, y = py, z = pz;
	make_track(x, y, z);
	make_store(x + 13, y, z - 12);
	make_store(x + 13, y, z + 5);
}



//차고, 도로에 들어갈 차 함수 만들기
void Red_Car_Frontside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_RED);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_RED);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 1);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 2, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_NORTH);
	installStairs(stairs_stone, x, y + 1, z - 5, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 2 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 2);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 5);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 4);
	locateBlock(empty, x + 1, y + 2, z - 4);
	locateBlock(empty, x - 1, y + 3, z - 4);
	locateBlock(empty, x + 1, y + 3, z - 4);
	locateWool(wool_R, x - 1, y + 2, z - 4);
	locateWool(wool_R, x + 1, y + 2, z - 4);

	locateBlock(empty, x - 1, y + 1, z);
	locateBlock(empty, x + 1, y + 1, z);
	locateBlock(wool_W, x - 1, y + 1, z);
	locateBlock(wool_W, x + 1, y + 1, z);

}

void Blue_Car_Frontside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_BLUE);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_BLUE);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 1);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 2, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_NORTH);
	installStairs(stairs_stone, x, y + 1, z - 5, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 2 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 2);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 5);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 4);
	locateBlock(empty, x + 1, y + 2, z - 4);
	locateBlock(empty, x - 1, y + 3, z - 4);
	locateBlock(empty, x + 1, y + 3, z - 4);
	locateWool(wool_R, x - 1, y + 2, z - 4);
	locateWool(wool_R, x + 1, y + 2, z - 4);

	locateBlock(empty, x - 1, y + 1, z);
	locateBlock(empty, x + 1, y + 1, z);
	locateBlock(wool_W, x - 1, y + 1, z);
	locateBlock(wool_W, x + 1, y + 1, z);

}

void Green_Car_Frontside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_GREEN);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_GREEN);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 1);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 2, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_NORTH);
	installStairs(stairs_stone, x, y + 1, z - 5, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 2 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 2);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 5);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 4);
	locateBlock(empty, x + 1, y + 2, z - 4);
	locateBlock(empty, x - 1, y + 3, z - 4);
	locateBlock(empty, x + 1, y + 3, z - 4);
	locateWool(wool_R, x - 1, y + 2, z - 4);
	locateWool(wool_R, x + 1, y + 2, z - 4);

	locateBlock(empty, x - 1, y + 1, z);
	locateBlock(empty, x + 1, y + 1, z);
	locateBlock(wool_W, x - 1, y + 1, z);
	locateBlock(wool_W, x + 1, y + 1, z);

}

void Yellow_Car_Frontside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_YELLOW);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_YELLOW);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 1);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 2, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_NORTH);
	installStairs(stairs_stone, x, y + 1, z - 5, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 2 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 2);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 5);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 4);
	locateBlock(empty, x + 1, y + 2, z - 4);
	locateBlock(empty, x - 1, y + 3, z - 4);
	locateBlock(empty, x + 1, y + 3, z - 4);
	locateWool(wool_R, x - 1, y + 2, z - 4);
	locateWool(wool_R, x + 1, y + 2, z - 4);

	locateBlock(empty, x - 1, y + 1, z);
	locateBlock(empty, x + 1, y + 1, z);
	locateBlock(wool_W, x - 1, y + 1, z);
	locateBlock(wool_W, x + 1, y + 1, z);

}

void Red_Car_Backside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_RED);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_RED);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 5);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 1, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 4, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 1 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 1);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 4);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 2);
	locateBlock(empty, x + 1, y + 2, z - 2);
	locateBlock(empty, x - 1, y + 3, z - 2);
	locateBlock(empty, x + 1, y + 3, z - 2);
	locateWool(wool_R, x - 1, y + 2, z - 2);
	locateWool(wool_R, x + 1, y + 2, z - 2);

	locateBlock(empty, x - 1, y + 1, z - 6);
	locateBlock(empty, x + 1, y + 1, z - 6);
	locateBlock(wool_W, x - 1, y + 1, z - 6);
	locateBlock(wool_W, x + 1, y + 1, z - 6);

}

void Blue_Car_Backside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_BLUE);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_BLUE);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 5);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 1, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 4, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 1 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 1);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 4);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 2);
	locateBlock(empty, x + 1, y + 2, z - 2);
	locateBlock(empty, x - 1, y + 3, z - 2);
	locateBlock(empty, x + 1, y + 3, z - 2);
	locateWool(wool_R, x - 1, y + 2, z - 2);
	locateWool(wool_R, x + 1, y + 2, z - 2);

	locateBlock(empty, x - 1, y + 1, z - 6);
	locateBlock(empty, x + 1, y + 1, z - 6);
	locateBlock(wool_W, x - 1, y + 1, z - 6);
	locateBlock(wool_W, x + 1, y + 1, z - 6);

}

void Green_Car_Backside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_GREEN);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_GREEN);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 5);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 1, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 4, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 1 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 1);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 4);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 2);
	locateBlock(empty, x + 1, y + 2, z - 2);
	locateBlock(empty, x - 1, y + 3, z - 2);
	locateBlock(empty, x + 1, y + 3, z - 2);
	locateWool(wool_R, x - 1, y + 2, z - 2);
	locateWool(wool_R, x + 1, y + 2, z - 2);

	locateBlock(empty, x - 1, y + 1, z - 6);
	locateBlock(empty, x + 1, y + 1, z - 6);
	locateBlock(wool_W, x - 1, y + 1, z - 6);
	locateBlock(wool_W, x + 1, y + 1, z - 6);

}

void Yellow_Car_Backside(int x, int y, int z) {

	SlabID slab_stone = createSlab(SLAB_STONE, SLAB_UPPER);
	BlockID empty = createBlock(BLOCK_AIR);
	BlockID wool_W = createWool(COLOR_WHITE);
	BlockID wool_R = createWool(COLOR_YELLOW);
	BlockID wool_Black = createWool(COLOR_BLACK);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs_stone = createStairs(STAIRS_COBBLESTONE, false);
	CarpetID carpet_R = createCarpet(COLOR_YELLOW);

	for (int i = 0; i < 7; i++) {
		locateSlab(slab_stone, x, y, z - i);
		locateWool(wool_R, x - 1, y + 1, z - i);
		locateWool(wool_R, x + 1, y + 1, z - i);
	}

	locateSlab(slab_stone, x - 1, y, z);
	locateSlab(slab_stone, x - 1, y, z - 2);
	locateSlab(slab_stone, x - 1, y, z - 3);
	locateSlab(slab_stone, x - 1, y, z - 4);
	locateSlab(slab_stone, x - 1, y, z - 6);

	locateSlab(slab_stone, x + 1, y, z);
	locateSlab(slab_stone, x + 1, y, z - 2);
	locateSlab(slab_stone, x + 1, y, z - 3);
	locateSlab(slab_stone, x + 1, y, z - 4);
	locateSlab(slab_stone, x + 1, y, z - 6);

	locateWool(wool_Black, x - 1, y, z - 1);
	locateWool(wool_Black, x - 1, y, z - 5);
	locateWool(wool_Black, x + 1, y, z - 1);
	locateWool(wool_Black, x + 1, y, z - 5);

	locateWool(wool_R, x, y + 1, z);
	locateWool(wool_R, x, y + 1, z - 5);
	locateWool(wool_R, x, y + 1, z - 6);

	installStairs(stairs_stone, x, y + 1, z - 1, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 3, FACING_SOUTH);
	installStairs(stairs_stone, x, y + 1, z - 4, FACING_NORTH);

	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 4; b++) {
			locateBlock(glass, x - 1 + a, y + 2, z - 1 - b);
		}
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 1);
		locateCarpet(carpet_R, x - 1 + a, y + 3, z - 4);
	}

	locateCarpet(carpet_R, x - 1, y + 3, z - 3);
	locateCarpet(carpet_R, x + 1, y + 3, z - 3);

	locateBlock(empty, x - 1, y + 2, z - 2);
	locateBlock(empty, x + 1, y + 2, z - 2);
	locateBlock(empty, x - 1, y + 3, z - 2);
	locateBlock(empty, x + 1, y + 3, z - 2);
	locateWool(wool_R, x - 1, y + 2, z - 2);
	locateWool(wool_R, x + 1, y + 2, z - 2);

	locateBlock(empty, x - 1, y + 1, z - 6);
	locateBlock(empty, x + 1, y + 1, z - 6);
	locateBlock(wool_W, x - 1, y + 1, z - 6);
	locateBlock(wool_W, x + 1, y + 1, z - 6);

}



int main()
{
	//차
	Red_Car_Backside(94, 5, 65);
	Yellow_Car_Backside(89, 5, 65);
	Blue_Car_Frontside(94, 5, 48);
	Green_Car_Frontside(89, 5, 48);
	Red_Car_Frontside(78, 5, 53);
	Green_Car_Backside(108, 5, 44);

	//벽돌 담장
	for (int x = -37; x < 126; x++) {
		for (int y = 4; y < 14; y++) {
			locateBlock(bricks, x, y, 153);
			locateBlock(bricks, x, y, -83);
		}
	}

	for (int y = 4; y < 14; y++) {
		for (int z = -83; z < 154; z++) {
			locateBlock(bricks, -37, y, z);
			locateBlock(bricks, 125, y, z);
		}
	}

	for (int y = 5; y < 9; y++) {
		for (int z = 51; z < 56; z++) {
			locateBlock(empty, -37, y, z);
		}
	}

	for (int y = 5; y < 8; y++) {
		locateBlock(empty, -37, y, 50);
		locateBlock(empty, -37, y, 56);
	}

	//조원들 함수 합치기
	hongchan(-1, 4, 14);
	doohong(11, 4, 100);
	jooyeon(-50, 4, 50);
	squre(-200, 3, -200, 500, 500);
	dogyun(80, 4, 57);
}