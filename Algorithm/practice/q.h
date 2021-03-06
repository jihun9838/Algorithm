#pragma once
#include <iostream>
#include <iomanip>		//q1008
#include <sstream>
#include "abocadoTest.h"
class q {
public:
	/*
문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
첫째 줄에 A+B를 출력한다.

예제 입력 1
1 2
예제 출력 1
3
*/
	void q1000();

/*
문제
두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
첫째 줄에 A/B를 출력한다. 절대/상대 오차는 10-9 까지 허용한다.

예제 입력 1
1 3
예제 출력 1
0.33333333333333333333333333333333
*/
	void q1008();



/*
(A+B)%C는 (A%C + B%C)%C 와 같을까?

(A×B)%C는 (A%C × B%C)%C 와 같을까?

세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 A, B, C가 순서대로 주어진다. (2 ≤ A, B, C ≤ 10000)

출력
첫째 줄에 (A+B)%C, 둘째 줄에 (A%C + B%C)%C, 셋째 줄에 (A×B)%C, 넷째 줄에 (A%C × B%C)%C를 출력한다.

예제 입력 1
5 8 4
예제 출력 1
1
1
0
0
*/
	void q10430();


	/*
	문제
상근이는 요즘 설탕공장에서 설탕을 배달하고 있다. 상근이는 지금 사탕가게에 설탕을 정확하게 N킬로그램을 배달해야 한다. 설탕공장에서 만드는 설탕은 봉지에 담겨져 있다. 봉지는 3킬로그램 봉지와 5킬로그램 봉지가 있다.

상근이는 귀찮기 때문에, 최대한 적은 봉지를 들고 가려고 한다. 예를 들어, 18킬로그램 설탕을 배달해야 할 때, 3킬로그램 봉지 6개를 가져가도 되지만, 5킬로그램 3개와 3킬로그램 1개를 배달하면, 더 적은 개수의 봉지를 배달할 수 있다.

상근이가 설탕을 정확하게 N킬로그램 배달해야 할 때, 봉지 몇 개를 가져가면 되는지 그 수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 N이 주어진다. (3 ≤ N ≤ 5000)

출력
상근이가 배달하는 봉지의 최소 개수를 출력한다. 만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.

예제 입력 1 
18
예제 출력 1 
4
예제 입력 2 
4
예제 출력 2 
-1
예제 입력 3 
6
예제 출력 3 
2
예제 입력 4 
9
예제 출력 4 
3
예제 입력 5 
11
예제 출력 5 
3
*/
	void q2839();










	/*
	문제
영어 대소문자와 띄어쓰기만으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

입력
첫 줄에 영어 대소문자와 띄어쓰기로 이루어진 문자열이 주어진다. 이 문자열의 길이는 1,000,000을 넘지 않는다. 단어는 띄어쓰기 한 개로 구분되며, 공백이 연속해서 나오는 경우는 없다. 또한 문자열의 앞과 뒤에는 공백이 있을 수도 있다.

출력
첫째 줄에 단어의 개수를 출력한다.
*/
	void q1152();

	/*
	문제
세 개의 자연수 A, B, C가 주어질 때 A×B×C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성하시오.

예를 들어 A = 150, B = 266, C = 427 이라면 

A × B × C = 150 × 266 × 427 = 17037300 이 되고, 

계산한 결과 17037300 에는 0이 3번, 1이 1번, 3이 2번, 7이 2번 쓰였다.

입력
첫째 줄에 A, 둘째 줄에 B, 셋째 줄에 C가 주어진다. A, B, C는 모두 100보다 같거나 크고, 1,000보다 작은 자연수이다.

출력
첫째 줄에는 A×B×C의 결과에 0 이 몇 번 쓰였는지 출력한다. 마찬가지로 둘째 줄부터 열 번째 줄까지 A×B×C의 결과에 1부터 9까지의 숫자가 각각 몇 번 쓰였는지 차례로 한 줄에 하나씩 출력한다.

예제 입력 1 
150
266
427
예제 출력 1 
3
1
0
2
0
0
0
2
0
0
*/
	void q2577();



	/*
	문제
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

출력
각 테스트 케이스마다 점수를 출력한다.

예제 입력 1 
5
OOXXOXXOOO
OOXXOOXXOO
OXOXOXOXOXOXOX
OOOOOOOOOO
OOOOXOOOOXOOOOX
예제 출력 1 
10
9
7
55
30
*/
	void q8958();

	/*
	문제
다장조는 c d e f g a b C, 총 8개 음으로 이루어져있다. 이 문제에서 8개 음은 다음과 같이 숫자로 바꾸어 표현한다. c는 1로, d는 2로, ..., C를 8로 바꾼다.

1부터 8까지 차례대로 연주한다면 ascending, 8부터 1까지 차례대로 연주한다면 descending, 둘 다 아니라면 mixed 이다.

연주한 순서가 주어졌을 때, 이것이 ascending인지, descending인지, 아니면 mixed인지 판별하는 프로그램을 작성하시오.

입력
첫째 줄에 8개 숫자가 주어진다. 이 숫자는 문제 설명에서 설명한 음이며, 1부터 8까지 숫자가 한 번씩 등장한다.

출력
첫째 줄에 ascending, descending, mixed 중 하나를 출력한다.

예제 입력 1 
1 2 3 4 5 6 7 8
예제 출력 1 
ascending
예제 입력 2 
8 7 6 5 4 3 2 1
예제 출력 2 
descending
예제 입력 3 
8 1 7 2 6 3 5 4
예제 출력 3 
mixed
*/
	void q2920();


	/*
	평균점수
	*/
	void q10039();

	/*
	벌집
	*/
	void q2292();

	/*
	분수찾기
	*/
	void q1193();

	/*
	Fly me to the Alpha Centauri
	*/
	void q1011();

	/*
	3분 그래프
	*/
	void q17113();

	/*
	문자열 비교하기
	*/
	void q17180();

	/*
	나이순 정렬
	*/
	void q10814();

	/*
	카드
	가장 많이 가지고 있는 정수를 출력한다.
	*/
	void q11652();

	/*
	퇴사
	*/
	void q14501();


	// Binary Search
	/*
	랜선자르기
	*/
	void q1654();

	/*
	중량제한
	*/
	void q1939();

	/*
	나무 자르기
	*/
	void q2805();

	/*
	꽃
	*/
	void q3115();

	/*숫자 카드
	*/
	void q10815();

	/*
	K번째 수
	?????????????????????????????????????????????
	*/
	void q1300();


	/*
	수 찾기
	*/
	void q1920();






	//이진트리
	/*
	완전 이진 트리
	*/
	void q3038();












	//시뮬레이션
	/*
	지능형 기차
	*/
	void q2455();

	/*
	막대기
	*/
	void q1094();

	/*
	토너먼트
	*/
	void q1057();

	/*
	회전하는큐	????????????
	*/
	void q1021();

	/*
	공
	*/
	void q1547();

	/*
	Meats on the grill
	*/
	void q10219();

	/*
	수열의 합
	???????????????????
	*/
	void q1024();

	/*
	리모컨	?????????????
	*/
	void q1107();






	//DFS, BFS
	/*
	순열 사이클*/
	void q10451();

	/*토마토*/
	void q7576();






	//범주 ??
	/*
	좋은날 싫은날
	*/
	void q17211();

	/*
	190724
	CCW
	*/
	void q11758();

	//https://www.acmicpc.net/workbook/view/2047
	/*
	ATM
	*/
	void q11399();

	/*
	차이를 최대로	????????????
	*/
	void q10819();



	/*
	사수아탕*/
	void q2419();

	/*고냠미*/
	void q10171();

	/*곱셈*/
	void q2588();
};

