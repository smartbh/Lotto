#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int lotto[] = { 1,2,4,12,13,17,18,24,26,27,33,34,36,39,40,43 }; //16��
    int randIdx = 0;

    // ���� �߻��� ���� ����
    srand(time(NULL));

    // Lottery Program
    int iLotto[16] = {};

    // 1���� 45���� ���ڸ� ���ʷ� �־��ش�.
    for (int i = 0; i < 16; ++i)
    {
        randIdx = rand();
        if (randIdx > 15)
            i--;
        else
            iLotto[i] = lotto[randIdx];
    }

    // Swap �˰���
//    int iNum1 = 1, iNum2 = 2, iNum3;
//    iNum3 = iNum1;
//    iNum1 = iNum2;
//    iNum2 = iNum3;

    // Shuffle
    int iTemp, idx1, idx2;
    // 100������ ���� �����ش�.


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