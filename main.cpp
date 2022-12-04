#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int lotto[] = { 1,2,4,12,13,17,18,24,26,27,33,34,36,39,40,43 }; //16개
    int randIdx = 0;

    // 난수 발생을 위한 선언
    srand(time(NULL));

    // Lottery Program
    int iLotto[16] = {};

    // 1에서 45까지 숫자를 차례로 넣어준다.
    for (int i = 0; i < 16; ++i)
    {
        randIdx = rand();
        if (randIdx > 15)
            i--;
        else
            iLotto[i] = lotto[randIdx];
    }

    // Swap 알고리즘
//    int iNum1 = 1, iNum2 = 2, iNum3;
//    iNum3 = iNum1;
//    iNum1 = iNum2;
//    iNum2 = iNum3;

    // Shuffle
    int iTemp, idx1, idx2;
    // 100번정도 골고루 섞어준다.


    //for (int i = 0; i < 16; ++i)
    //{
    //    cout << iLotto[i] << endl;
    //}

    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < 5; ++i)
        {
            cout << iLotto[i] << "\t";
        }

        cout << "Bonus Number : " << iLotto[6] << endl;

        for (int i = 0; i < 100; ++i)
        {
            idx1 = rand() % 16;
            idx2 = rand() % 16;

            iTemp = iLotto[idx1];
            iLotto[idx1] = iLotto[idx2];
            iLotto[idx2] = iTemp;
        }
    }


    return 0;
}