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

    //알고리즘 순서
    // 1. 통계상 인기 있는 로또 번호들 1~10 번대, 11~20번대, 21~30번대, 31~40번대 4개씩 41~45번대 2개 총 18개 배열준비
    // 2. 랜덤 난수로 배열의 랜덤 인덱스 뽑기
    // 3. 새로운 배열을 한번 돌려서 해당 요소(중복)이 있는지 확인
    // 4. 새로운 배열 (6개 번호 저장할) 배열에 해당 요소 저장
    // 5. 배열의 요소가 6개가 될때까지 2~4번 행동 반복
    // 6. 출력
    // ** 새로운 요소를 담을 객체를 배열 보단 스택이나 벡터가 나을수도 있음
    //어플리케이션으로 만들 연습도 준비.

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