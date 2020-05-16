#include <iostream>
#include <queue>
#include <algorithm>
#include <map>
#define F(i, n) for(int i = 0 ; i < n ; ++i)
#define FE(i, n, m) for(int i = m ; i < n ; ++i)
#define FR(i, n, m) for(int i = m ; i >= n ; --i)
#define FIO std::ios_base::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(NULL);
struct P { int f, s, p; };
using vi = std::vector<int>;
using vP = std::vector<P>;
// 층, 변, 위치
int blocks[80][6][80];
int count[6], block[10001];

//((floor - 1) * 3 * floor) + (floor * side) + (place + 2)
int play(int num) {
	if (num <= 7) {
		if (num <= 5) return num;
		if (num == 6) return 2;
		return 3;
	}
	int start = 0, end = 80, floor, side, place;
	while (start <= end) {
		floor = (start + end) / 2;
		int s = (floor - 1) * 3 * floor + 2, e = floor * 3 * (floor + 1) + 2;

		std::cout << "Searching " << s << " < " << e << '\n';

		if (s <= num && num < e) break;
		else if (num < s) end = floor - 1;
		else if (e <= num) start = floor + 1;
	}

	num -= ((floor - 1) * 3 * floor) - 2;
	side = num / floor;
	place = num % floor;
	std::cout << num << " :::::::::: " << "ANS : " << floor << ", " << side << ", " << place << "\n";
	return blocks[floor][side][place];
}

int min_count_block(vi v) {
	int min_count = 1e9, min_index = 100;
	FR(i, 1, 5)
		if (count[i] <= min_count)
			for (int num : v) if (num != i)
				min_index = i;

	return min_index;
}
/*
	//blocks[2][0][0] = 1;		//8		((floor - 1) * 6) + (floor * side) + (place + 2)
	//blocks[2][0][1] = 4;		//9

	//blocks[2][1][0] = 5;		//10
	//blocks[2][1][1] = 1;		//11	((floor - 1) * 6) + (floor * side) + (place + 2)

	//blocks[2][2][0] = 2;		//12
	//blocks[2][2][1] = 3;		//13

	//blocks[2][3][0] = 1;		//14
	//blocks[2][3][1] = ? ;		//15

	((floor - 1) * 3 * floor) + (floor * side) + (place + 2)
*/

vi check_adjust_block(int floor, int side, int place) {
	vi v;
	if (side == 0 && place == 0) {		// 새로운 시작
		v.push_back(blocks[floor - 1][5][floor - 2]);
		v.push_back(blocks[floor - 1][0][0]);
	}
	else if (place == floor - 1) {		// 새로운 변의 꼭짓점 or 변의 마지막
		v.push_back(blocks[floor][side][place - 1]);
		v.push_back(blocks[floor - 1][side][floor - 2]);
	}
	else {								// 변 가운데
		v.push_back(blocks[floor][side][place - 1]);		// 이전 블록
		v.push_back(blocks[floor - 1][side][place]);		// 아래층 블록, 아래층 블록 - 1
		v.push_back(blocks[floor - 1][side][place - 1]);
	}

	// int num = ((floor - 1) * 6) + (floor * side) + (place + 2);

	std::cout << "Adjust nums : ";
	for (int i : v) std::cout << i << ", ";
	std::cout << '\n';
	return v;
}


void make() {
	blocks[0][0][0] = 1;		//1

	blocks[1][0][0] = 2;		//2
	blocks[1][1][0] = 3;		//3
	blocks[1][2][0] = 4;		//4
	blocks[1][3][0] = 5;		//5
	blocks[1][4][0] = 2;		//6
	blocks[1][5][0] = 3;		//7
	FE(i, 1, 6) count[i]++;

	int floor = 2;
	while (floor < 180) {
		F(side, 6) {
			F(place, floor) {
				vi v = check_adjust_block(floor, side, place);

				int new_block = min_count_block(v);
				std::cout << new_block << '\n';
				blocks[floor][side][place] = new_block;

				count[new_block]++;
			}
		}
		floor++;
	}
}

int main() {
	FIO;
	make();

	int n; std::cin >> n;
	while (n--) {
		int num; std::cin >> num;

		std::cout << play(num) << '\n';
		std::cout << "\n\n";
	}

	return 0;
}