#include <cstdio>
#include <iostream>
#include <ctime>
#include <string>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <cstring>
#include <ctime>
#include <thread>

using namespace std;

void print_time() {
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "time now: " << dt << endl;
}

// int 7 * 3
class int73
{
public:
	int data[7][3];
	int73() { memset(data, 0, sizeof(data)); }
	int73(int a[7][3]) {
		for (size_t i = 0; i < 7; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
	void print_data() {
		for (size_t i = 0; i < 7; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				printf("%03d ", data[i][j]);
			}
			putchar('\n');
		}
	}
};

// int 3 * 3
class int33
{
public:
	int data[3][3];
	int33() { memset(data, 0, sizeof(data)); }
	int33(int a[3][3]) {
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
	void print_data() {
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				printf("%03d ", data[i][j]);
			}
			putchar('\n');
		}
	}
};

int repeat3(int num) {
	num = num % 10;
	return num * 100 + num * 10 + num;
}

int getnumrd(int num, int rd) {
	int ans = -1;
	switch (rd)
	{
	case 0:ans = num / 1 % 10; break;
	case 1:ans = num / 10 % 10; break;
	case 2:ans = num / 100 % 10; break;
	case 3:ans = num / 1000 % 10; break;
	case 4:ans = num / 10000 % 10; break;
	case 5:ans = num / 100000 % 10; break;
	case 6:ans = num / 1000000 % 10; break;
	case 7:ans = num / 10000000 % 10; break;
	case 8:ans = num / 100000000 % 10; break;
	case 9:ans = num / 1000000000 % 10; break;
	default:
		break;
	}
	return ans;
}

int sum3mod(int one, int two, int three) {
	return (one + two + three) % 10;
}

int get1mod(int p) {
	return sum3mod(p / 100 % 10, p / 10 % 10, p % 10);
}

int sum2(int one, int two) {
	int t0 = sum3mod(one % 10, two % 10, 0);
	int t1 = sum3mod(one / 10 % 10, two / 10 % 10, 0);
	int t2 = sum3mod(one / 100 % 10, two / 100 % 10, 0);
	return t2 * 100 + t1 * 10 + t0;
}

int getabcbyabc(int a, int b, int c) {
	return a % 10 * 100 + b % 10 * 10 + c % 10;
}

// int 12 * 3
class int123
{
public:
	int data[12][3];
	int123() { memset(data, 0, sizeof(data)); }
	int123(int a[12][3]) {
		for (size_t i = 0; i < 12; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
	void print_data() {
		for (size_t i = 0; i < 12; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				printf("%03d ", data[i][j]);
			}
			putchar('\n');
		}
	}
};

// int 9 * 9
class int99
{
public:
	int data[9][9];
	int99() { memset(data, 0, sizeof(data)); }
	int99(int a[9][9]) {
		for (size_t i = 0; i < 9; i++)
		{
			for (size_t j = 0; j < 9; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
	void print_data() {
		for (size_t i = 0; i < 9; i++)
		{
			for (size_t j = 0; j < 9; j++) {
				printf("%03d ", data[i][j]);
			}
			putchar('\n');
		}
	}
};

// int 18 * 3
class int183
{
public:
	int data[18][3];
	int183() { memset(data, 0, sizeof(data)); }
	int183(int a[18][3]) {
		for (size_t i = 0; i < 18; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
};

// int 3
class int3
{
public:
	int data[3];
	int3() { memset(data, 0, sizeof(data)); }
	int3(int a[3]) {
		for (size_t i = 0; i < 3; i++)
		{
			data[i] = a[i];
		}
	}
	void print_data() {
		for (size_t j = 0; j < 3; j++) {
			printf("%03d ", data[j]);
		}
		putchar('\n');
	}
};

// int 18 * 3 * 9
class int1839
{
public:
	int data[18][3][9];
	int1839() { memset(data, 0, sizeof(data)); }
	int1839(int a[18][3][9]) {
		for (size_t i = 0; i < 18; i++)
		{
			for (size_t j = 0; j < 3; j++) {
				for (size_t k = 0; k < 9; k++) {
					data[i][j][k] = a[i][j][k];
				}
			}
		}
	}
};

// int 2 * 18 * 3
class int2183
{
public:
	int data[2][18][3];
	int2183() { memset(data, 0, sizeof(data)); }
	int2183(int a[2][18][3]) {
		for (size_t i = 0; i < 2; i++)
		{
			for (size_t j = 0; j < 18; j++) {
				for (size_t k = 0; k < 3; k++) {
					data[i][j][k] = a[i][j][k];
				}
			}
		}
	}
};

// get filename output+tinenow+.txt
string time_filename() {
	time_t now = time(0);
	string s = "output" + to_string(now) + ".txt";
	return s;
}

// int 3 * 9
class int39 {
public:
	int data[3][9];
	int39() { memset(data, 0, sizeof(data)); }
	int39(int a[3][9]) {
		for (size_t i = 0; i < 3; i++)
		{
			for (size_t j = 0; j < 9; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
	void init_data() {

	}
	void input_data() {
		int t;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 9; j++) {
				// scanf("%d", &t);
				cin >> t;
				data[i][j] = t % 1000;
			}
		}
	}
	void print_data() {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 9; j++) {
				printf("%03d ", data[i][j]);
			}
			putchar('\n');
		}
	}
	void out_data(string filename) {
		ofstream outfile;
		outfile.open(filename, ios::out);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 9; j++) {
				// printf("%03d ", data[i][j]);
				outfile << setw(3) << setfill('0') << data[i][j] << ' ';
			}
			outfile << endl;
		}
		outfile.close();
	}
};

// int 9*11
class int911 {
public:
	int data[9][11];
	int911() { memset(data, 0, sizeof(data)); }
	int911(int a[9][11]) {
		for (size_t i = 0; i < 9; i++)
		{
			for (size_t j = 0; j < 11; j++) {
				data[i][j] = a[i][j];
			}
		}
	}
	void print_data() {
		for (size_t i = 0; i < 9; i++)
		{
			for (size_t j = 0; j < 11; j++) {
				printf("%03d ", data[i][j]);
			}
			putchar('\n');
		}
	}
};