/*

Note to whoever is marking this (either Sir Aamir Wali or another teacher):

Hello, I just wanted to inform you that I submitted help2.h along with this file.

If the header file doesn't work (which it should) or anything else goes wrong,
I have submitted a .mp4 video file with what this program can do.

I'm sorry for this inconvenience but I don't want this code not working last minute
and hence getting a zero. Please understand my frustration. Thank you.

*/

#include<iostream>
#include<conio.h>
#include"help2.h"

using namespace std;

void stickManBody(int colorNum, int y1, int y2, int addedChange) {

	myLine(460 + addedChange, y1 + 50, 455 + addedChange, 225, 255);			// body (upper)
	myLine(455 + addedChange, 225, 455 + addedChange, 275, 255);				// body (lower)

	myLine(458 + addedChange, y1 + 90, 440 + addedChange, y1 + 150, 255);		// right arm (upper)
	myLine(440 + addedChange, y1 + 150, 430 + addedChange, y1 + 220, 255);		// right arm (lower)

	myLine(459 + addedChange, y1 + 90, 470 + addedChange, y1 + 150, 255);		// left arm (upper)
	myLine(470 + addedChange, y1 + 150 , 510 + addedChange, y1 + 220, 255);		// left arm (lower)

	myLine(455 + addedChange, 275, 455 + addedChange, 330, 255);			// right leg (upper)
	myLine(455 + addedChange, 330, 440 + addedChange, 450, 255);			// right leg (lower)

	myLine(455 + addedChange, 275, 470 + addedChange, 360, 255);			// left leg (upper)
	myLine(470 + addedChange, 360, 480 + addedChange, 450, 255);			// left leg (lower)

	myEllipse(445 + addedChange, y1, 505 + addedChange, y2, 255, 255, 255, colorNum, colorNum, colorNum);			// head

	if (colorNum < 120) {
		myEllipse(477 + addedChange, y1 + 20, 490 + addedChange, y2 - 25, 120, 120, 120, colorNum, colorNum, colorNum);
		myEllipse(492 + addedChange, y1 + 20, 505 + addedChange, y2 - 25, 120, 120, 120, colorNum, colorNum, colorNum);						// the bags under the
		myRectangle(475 + addedChange, y1 + 20, 500 + addedChange, y2 - 29, colorNum, colorNum, colorNum, colorNum, colorNum, colorNum);	// his eyes
	}

	myEllipse(480 + addedChange, y1 + 10, 490 + addedChange, y2 - 30, 255, 255, 255, colorNum, colorNum, colorNum);				// right eye,
	myEllipse(495 + addedChange, y1 + 10, 505 + addedChange, y2 - 30, 255, 255, 255, colorNum, colorNum, colorNum);				// left eye,
	myEllipse(498 + addedChange, y1 + 16, 503 + addedChange, y2 - 36, 0, 0, 255, colorNum, colorNum, colorNum);					// blue part of left eye

	myLine(475 + addedChange, y1 + 45, 500 + addedChange, y1 + 45, 255);			// mouth

}

void chargeAndFire(int y1, int y2, int whatHappened) {

	if (whatHappened == 0) {

		int deduct1 = 50;		// need a good value for deduct1 and then to increase and decrease appropriately (2 loops in a loop)

		for (int shrinkNum = 0; shrinkNum < 20 && deduct1 > 0; shrinkNum++) {

			myRectangle(560, y1 + 38, 680, y1 + 158, 0, 0, 0, 0, 0, 0);
			myEllipse(560 + deduct1, y1 + 48 + deduct1, 660 - deduct1, y1 + 148 - deduct1, 255, 0, 0, 255, 200, 200);

			if (shrinkNum == 19 && deduct1 > 0) {

				for (shrinkNum = 0; shrinkNum < 5; shrinkNum++) {

					++deduct1;
					myRectangle(560, y1 + 38, 680, y1 + 158, 0, 0, 0, 0, 0, 0);
					myEllipse(560 + deduct1, y1 + 48 + deduct1, 660 - deduct1, y1 + 148 - deduct1, 255, 0, 0, 255, 200, 200);
					Sleep(25);

				}
				shrinkNum = 0;

			}

			deduct1--;
			Sleep(25);
		}

		for (int i = 0; i <= 30; i += 5) {

			for (int j = 0; j < 5; j++) {

				++deduct1;
				myRectangle(560, y1 + 38, 680, y1 + 158, 0, 0, 0, 0, 0, 0);
				myEllipse(560 + deduct1, y1 + 48 + deduct1, 660 - deduct1, y1 + 148 - deduct1, 255, 0, 0, 255, 200, 200);
				Sleep(50 - i);

			}
			for (int k = 0; k < 5; k++) {

				--deduct1;
				myRectangle(560, y1 + 38, 680, y1 + 158, 0, 0, 0, 0, 0, 0);
				myEllipse(560 + deduct1, y1 + 48 + deduct1, 660 - deduct1, y1 + 148 - deduct1, 255, 0, 0, 255, 200, 200);
				Sleep(50 - i);

			}

		}

	}
	else if (whatHappened == 1) {

		int deduct1 = 25;		// need a good value for deduct1 and then to increase and decrease appropriately (2 loops in a loop)

		for (int shrinkNum = 0; shrinkNum < 16 && deduct1 > 0; shrinkNum++) {

			myRectangle(530, y1, 590, y1 + 80, 0, 0, 0, 0, 0, 0);
			myEllipse(535 + deduct1, y1 + 15 + deduct1, 585 - deduct1, y1 + 65 - deduct1, 100, 255, 255, 200, 200, 255);
			
			if (shrinkNum == 15 && deduct1 > 0) {

				for (shrinkNum = 0; shrinkNum < 5; shrinkNum++) {

					++deduct1;
					myRectangle(530, y1, 590, y1 + 80, 0, 0, 0, 0, 0, 0);
					myEllipse(535 + deduct1, y1 + 15 + deduct1, 585 - deduct1, y1 + 65 - deduct1, 100, 255, 255, 200, 200, 255);
					Sleep(25);

				}
				shrinkNum = 0;

			}

			deduct1--;
			Sleep(25);
		}

		for (int i = 0; i <= 20; i += 5) {

			for (int j = 0; j < 5; j++) {

				++deduct1;
				myRectangle(530, y1, 590, y1 + 80, 0, 0, 0, 0, 0, 0);
				myEllipse(535 + deduct1, y1 + 15 + deduct1, 585 - deduct1, y1 + 65 - deduct1, 100, 255, 255, 200, 200, 255);
				Sleep(50 - i);

			}
			for (int k = 0; k < 5; k++) {

				--deduct1;
				myRectangle(530, y1, 590, y1 + 80, 0, 0, 0, 0, 0, 0);
				myEllipse(535 + deduct1, y1 + 15 + deduct1, 585 - deduct1, y1 + 65 - deduct1, 100, 255, 255, 200, 200, 255);
				Sleep(50 - i);

			}

		}

	}

}

void stickMan_RedKamehameha(int y1, int y2, int addedChange, int colorNum) {

	myLine(450 + addedChange, y1 + 50, 450 + addedChange, 225, 255);			// body (upper)
	myLine(450 + addedChange, 225, 455 + addedChange, 275, 255);				// body (lower)

	myLine(450 + addedChange, y1 + 90, 508 + addedChange, y1 + 108, 255);		// right arm (upper)
	myLine(508 + addedChange, y1 + 108, 548 + addedChange, y1 + 108, 255);		// right arm (lower)

	myLine(450 + addedChange, y1 + 90, 508 + addedChange, y1 + 88, 255);		// left arm (upper)
	myLine(508 + addedChange, y1 + 88, 548 + addedChange, y1 + 88, 255);		// left arm (lower)

	myLine(455 + addedChange, 275, 485 + addedChange, 350, 255);			// right leg (upper)
	myLine(485 + addedChange, 350, 485 + addedChange, 450, 255);			// right leg (lower)

	myLine(455 + addedChange, 275, 450 + addedChange, 360, 255);			// left leg (upper)
	myLine(450 + addedChange, 360, 400 + addedChange, 450, 255);			// left leg (lower)

	myEllipse(425 + addedChange, y1, 485 + addedChange, y2, 255, 255, 255, colorNum, colorNum, colorNum);		// head

	if (colorNum < 120) {
		myEllipse(457 + addedChange, y1 + 20, 470 + addedChange, y2 - 25, 120, 120, 120, colorNum, colorNum, colorNum);
		myEllipse(472 + addedChange, y1 + 20, 485 + addedChange, y2 - 25, 120, 120, 120, colorNum, colorNum, colorNum);			// the bags under the
		myRectangle(455 + addedChange, y1 + 20, 480 + addedChange, y2 - 29, 0, 0, 0, colorNum, colorNum, colorNum);				// his eyes
	}

	myEllipse(460 + addedChange, y1 + 10, 470 + addedChange, y2 - 30, 255, 255, 255, colorNum, colorNum, colorNum);			// right eye,
	myEllipse(475 + addedChange, y1 + 10, 485 + addedChange, y2 - 30, 255, 255, 255, colorNum, colorNum, colorNum);			// left eye,
	myEllipse(478 + addedChange, y1 + 16, 483 + addedChange, y2 - 36, 255, 0, 0, colorNum, colorNum, colorNum);				// red part of left eye

	myLine(445 + addedChange, y1 + 45, 470 + addedChange, y1 + 45, 255);			// mouth

}

void stickMan_VisualBlast(int y1, int y2, int addedChange, int colorNum) {

	myLine(480 + addedChange, y1 + 60, 465 + addedChange, 200, 255);			// body (upper)
	myLine(465 + addedChange, 200, 455 + addedChange, 275, 255);				// body (lower)

	myLine(473 + addedChange, y1 + 100, 440 + addedChange, y1 + 130, 255);		// right arm (upper)
	myLine(440 + addedChange, y1 + 130, 490 + addedChange, y1 + 150, 255);		// right arm (lower)

	myLine(474 + addedChange, y1 + 90, 430 + addedChange, y1 + 110, 255);		// left arm (upper)
	myLine(430 + addedChange, y1 + 110, 480 + addedChange, y1 + 135, 255);		// left arm (lower)

	myLine(455 + addedChange, 275, 455 + addedChange, 330, 255);			// right leg (upper)
	myLine(455 + addedChange, 330, 440 + addedChange, 450, 255);			// right leg (lower)

	myLine(455 + addedChange, 275, 480 + addedChange, 360, 255);			// left leg (upper)
	myLine(480 + addedChange, 360, 495 + addedChange, 450, 255);			// left leg (lower)

	myEllipse(465 + addedChange, y1 + 10, 525 + addedChange, y2 + 10, 255, 255, 255, colorNum, colorNum, colorNum);			// head

	if (colorNum < 120) {
		myEllipse(497 + addedChange, y1 + 30, 510 + addedChange, y2 - 15, 120, 120, 120, colorNum, colorNum, colorNum);
		myEllipse(512 + addedChange, y1 + 30, 525 + addedChange, y2 - 15, 120, 120, 120, colorNum, colorNum, colorNum);			// the bags under the
		myRectangle(495 + addedChange, y1 + 30, 520 + addedChange, y2 - 19, 0, 0, 0, colorNum, colorNum, colorNum);				// his eyes
	}

	myEllipse(500 + addedChange, y1 + 20, 510 + addedChange, y2 - 20, 255, 255, 255, colorNum, colorNum, colorNum);			// right eye,
	myEllipse(515 + addedChange, y1 + 20, 525 + addedChange, y2 - 20, 255, 255, 255, colorNum, colorNum, colorNum);			// left eye,
	myEllipse(518 + addedChange, y1 + 26, 523 + addedChange, y2 - 26, 100, 255, 255, colorNum, colorNum, colorNum);			// cyan part of left eye

	myLine(495 + addedChange, y1 + 55, 520 + addedChange, y1 + 55, 255);			// mouth

}

void teleportFunction(int y1, int y2, int addedChange, int dir_num, int inc_num) {

	int rectWidth;

	for (int i = 0; i <= 255; i += 5) {

		myRectangle(0, 0, 975, 475, i, i, i, i, i, i);
		myRectangle(425 + (i * dir_num), 40, 515 + (i * dir_num), 460, i, i, i, i, i, i);
		addedChange += (inc_num * dir_num);
		stickManBody(int(i / 1.1), y1, y2, addedChange);
		Sleep(25 - (i / 10));

	}

	for (int j = 255; j > 0; j -= 5) {

		if (j < 255) { myRectangle(0, 237 - rectWidth, 950, 238 + rectWidth, 0, 0, 0, 0, 0, 0); }

		rectWidth = (j / 255.0) * (475.0 / 2.0);
		myRectangle(0, 237 - rectWidth, 950, 238 + rectWidth, 255, 255, 255, j, j, j);

		if (j % 10 == 0) { Sleep(1); }

	}

	myRectangle(0, 0, 950, 475, 0, 0, 0, 0, 0, 0);
	Sleep(3000);

	for (int k = 0; k < 255; k += 5) {

		rectWidth = (k / 255.0) * (475.0 / 2.0);
		myRectangle(0, 237 - rectWidth, 950, 238 + rectWidth, 255, 255, 255, k, k, k);

		if (k % 10 == 0) { Sleep(1); }

	}

	for (int l = 255; l >= 0; l -= 5) {

		myRectangle(0, 0, 975, 475, l, l, l, l, l, l);
		myRectangle(425 + (l * dir_num), 40, 515 + (l * dir_num), 460, l, l, l, l, l, l);
		addedChange -= (inc_num * dir_num);
		stickManBody(int(l / 1.1), y1, y2, 0);
		Sleep(3);

	}

}

int main()
{

	int keyPressed;
	int y1 = 70, y2 = 130, count_y1_y2 = 0, breathingIn = 1, addedChange = 0;

	cout << "Press the Enter/Space button to exit." << endl;
	cout << "Press the Left (or A) and Right (or D) arrow keys to teleport. Don't worry, you come back too." << endl;
	cout << "Press Up (or W) for light attack," << endl << " and Down(or S) for a heavy attack." << endl << "Enjoy." << endl;

	while (isCursorKeyPressed(keyPressed) == false || (keyPressed != 5 && keyPressed != 6)) {

		if (keyPressed == 1) {
			teleportFunction(y1, y2, addedChange, -1, 5);
		}
		else if (keyPressed == 2) {
			stickMan_VisualBlast(y1, y2, 0, 0);
			chargeAndFire(y1, y2, 1);

			for (int i = 0; i < 5; i++) {

				for (int j = 0; j < 100; j++) {
					myRectangle(575, y1 + 30, 575 + j, y1 + 50, 100, 255, 255, 200, 200, 255);
					myEllipse(535, y1 + 15, 585, y1 + 65, 100, 255, 255, 200, 200, 255);
				}

				for (int k = 0; k < 400; k++) {
					
					myRectangle(575 + k, y1 + 30, 675 + k, y1 + 50, 100, 255, 255, 200, 200, 255);
					myEllipse(535, y1 + 15, 585, y1 + 65, 100, 255, 255, 200, 200, 255);
					if (k % 100 == 0) { Sleep(1); }
					myRectangle(574 + k, y1 + 25, 575 + k, y1 + 55, 0, 0, 0, 0, 0, 0);
				}

			}

			for (int l = 255; l > 0; l -= 5) {

				myEllipse(535, y1 + 15, 585, y1 + 65, (l / 2.55), l, l, (l / 1.275), (l / 1.275), l);
				Sleep(1);

			}

		}
		else if (keyPressed == 3) {
			teleportFunction(y1, y2, addedChange, 1, 5);
		}
		else if (keyPressed == 4) {
			stickMan_RedKamehameha(y1, y2, 0, 0);
			chargeAndFire(y1, y2, 0);

			for (int i = 0; i <= 255; i += 15) {

				myRectangle(0, 0, 975, 475, i, i, i, i, i, i);
				stickMan_RedKamehameha(y1, y2, 0, i);
				myEllipse(560, y1 + 48, 660, y1 + 148, 255, 0, 0, 255, 200, 200);
				Sleep(5);
			}
			for (int j = 255; j >= 0; j -= 15) {

				myRectangle(0, 0, 975, 475, j, j, j, j, j, j);
				stickMan_RedKamehameha(y1, y2, 0, j);
				myEllipse(560, y1 + 48, 660, y1 + 148, 255, 0, 0, 255, 200, 200);
				myRectangle(640, y1 + 68, 970, y1 + 128, 255, 0, 0, 255, 200, 200);
				myRectangle(640, y1 + 70, 660, y1 + 126, 255, 200, 200, 255, 200, 200);
				Sleep(5);

			}

			for (int k = 0; k < 5; k++) {

				for (int l = 0; l < 10; l++) {

					myRectangle(650, y1 + 28, 970, y1 + 168, 0, 0, 0, 0, 0, 0);

					myRectangle(640, y1 + 70 + l, 660, y1 + 126 - l, 255, 200, 200, 255, 200, 200);
					myRectangle(650, y1 + 68 + l, 970, y1 + 128 - l, 255, 0, 0, 255, 200, 200);
					myRectangle(640, y1 + 70 + l, 660, y1 + 126 - l, 255, 200, 200, 255, 200, 200);
					myEllipse(560, y1 + 48, 660, y1 + 148, 255, 0, 0, 255, 200, 200);
					myRectangle(640, y1 + 70 + l, 660, y1 + 126 - l, 255, 200, 200, 255, 200, 200);
					Sleep(5);

				}
				for (int m = 10; m > 0; m--) {

					myRectangle(650, y1 + 28, 970, y1 + 168, 0, 0, 0, 0, 0, 0);

					myRectangle(640, y1 + 70 + m, 660, y1 + 126 - m, 255, 200, 200, 255, 200, 200);
					myRectangle(650, y1 + 68 + m, 970, y1 + 128 - m, 255, 0, 0, 255, 200, 200);
					myRectangle(640, y1 + 70 + m, 660, y1 + 126 - m, 255, 200, 200, 255, 200, 200);
					myEllipse(560, y1 + 48, 660, y1 + 148, 255, 0, 0, 255, 200, 200);
					myRectangle(640, y1 + 70 + m, 660, y1 + 126 - m, 255, 200, 200, 255, 200, 200);
					Sleep(5);

				}

			}

			for (int n = 255; n > 0; n -= 5) {

				myRectangle(640, y1 + 70, 660, y1 + 126, n, (n / 1.275), (n / 1.275), n, (n / 1.275), (n / 1.275));
				myRectangle(650, y1 + 68, 970, y1 + 128, n, 0, 0, n, (n / 1.275), (n / 1.275));
				myRectangle(640, y1 + 70, 660, y1 + 126, n, (n / 1.275), (n / 1.275), n, (n / 1.275), (n / 1.275));
				myEllipse(560, y1 + 48, 660, y1 + 148, n, 0, 0, n, (n / 1.275), (n / 1.275));
				myRectangle(640, y1 + 70, 660, y1 + 126, n, (n / 1.275), (n / 1.275), n, (n / 1.275), (n / 1.275));
				Sleep(5);

			}
			myRectangle(560, y1 + 38, 680, y1 + 158, 0, 0, 0, 0, 0, 0);

		}
		else {
			stickManBody(0, y1, y2, 0);
			Sleep(1);
		}

		if (count_y1_y2 > 0 && count_y1_y2 < 10) { Sleep(100); }			// sleep time
		else if (count_y1_y2 == 10) { Sleep(400); }

		myRectangle(350, 40, 600, 460, 0, 0, 0, 0, 0, 0);						// covering the stuff we don't need

		if (count_y1_y2 < 10 && breathingIn == 1) {
			y1 -= 1;
			y2 -= 1;
			count_y1_y2++;
		}
		else if (count_y1_y2 > 0 && breathingIn == 0) {
			y1 += 1;
			y2 += 1;
			count_y1_y2--;
		}
		else if (count_y1_y2 == 0 && breathingIn == 0) { breathingIn = 1; count_y1_y2--; }
		else if (count_y1_y2 == 10 && breathingIn == 1) { breathingIn = 0; count_y1_y2++; }

		addedChange = 0;
		keyPressed = -1;

	}

	_getch();
	return 0;
}