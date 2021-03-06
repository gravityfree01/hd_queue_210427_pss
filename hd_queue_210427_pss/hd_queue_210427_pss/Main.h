#ifndef __MAIN_H__
#define __MAIN_H__

#include<stdio.h>

/*
중간평가 문제

*********** 스택을 구현하세요.********************

스택 : FILO 특징을 가지고있는 자료구조입니다.

스택은 다음 동작을 가지고있습니다.
Push : 값을 저장하는 구조
Pop : 값을 불러오는 구조

스택의 높이(현재위치) 이름을 top 이라고 합니다.

----------------------------------------------

아래를 만족시켜야만 합니다.

스택의 값을 저장하는 Push 함수가 있어야합니다.
스택의 값을 가져오는 Pop 함수가 있어야합니다.
스택의 현재 인덱스는 top 이라는 변수를사용해야 합니다

스택이 비었을때 Pop을하면 "값이 비었습니다" 를 출력해야하고, 값을 불러오지말아야합니다.
또한 함수로 IsStackEmpty()함수로 만들어야합니다.

스택이 가득찼을때 Push를 하면 "스택이 가득찼습니다"를 출력하고. 값을 저장하지 말아야합니다.
또한 함수로 IsStackFull()함수를 만들어야합니다.

스택의 사이즈 10 매크로로 해주세요.

*/

#define MAX 100
int front = -1;
int rear = -1;
int queue[MAX];
int IsEmpty(void);
int IsFull(void);
void addq(int value);
int deleteq();


#endif // !__MAIN_H__
