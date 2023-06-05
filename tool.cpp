#include "m0.h"
#include "m2.hpp"
#include <vector>
#include <thread>
#include <future>
#include <cstdlib>

size_t sep1 = 4, sep2 = 8, sep3 = 12;
int data_all[81][3][3][9];

string filename = time_filename();

int73 getmain73(int num1, int num2, int num3)
{
	int73 ans;
	getmain73_new(num1, num2, num3, ans.data);
	return ans;
}
int2183 f27to36(int39 n39)
{
	int2183 ans;
	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			ans.data[0][i * 2][j] = n39.data[j][i];
			ans.data[0][i * 2 + 1][j] = n39.data[2 - j][i];
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		ans.data[1][0][i] = n39.data[0][i];
		ans.data[1][1][i] = n39.data[0][2 - i];
		ans.data[1][2][i] = n39.data[1][i];
		ans.data[1][3][i] = n39.data[1][2 - i];
		ans.data[1][4][i] = n39.data[2][i];
		ans.data[1][5][i] = n39.data[2][2 - i];
		ans.data[1][6][i] = n39.data[0][i + 3];
		ans.data[1][7][i] = n39.data[0][2 - i + 3];
		ans.data[1][8][i] = n39.data[1][i + 3];
		ans.data[1][9][i] = n39.data[1][2 - i + 3];
		ans.data[1][10][i] = n39.data[2][i + 3];
		ans.data[1][11][i] = n39.data[2][2 - i + 3];
		ans.data[1][12][i] = n39.data[0][i + 6];
		ans.data[1][13][i] = n39.data[0][2 - i + 6];
		ans.data[1][14][i] = n39.data[1][i + 6];
		ans.data[1][15][i] = n39.data[1][2 - i + 6];
		ans.data[1][16][i] = n39.data[2][i + 6];
		ans.data[1][17][i] = n39.data[2][2 - i + 6];
	}
	return ans;
}

int39 f3to27(int num1, int num2, int num3)
{
	auto t = getmain73(num1, num2, num3);
	int39 ans;
	for (size_t i = 0; i < 3; i++)
	{
		ans.data[0][i] = t.data[0][i];
		ans.data[1][i] = t.data[1][i];
		ans.data[2][i] = sum2(ans.data[0][i], ans.data[1][i]);
		ans.data[0][i + 3] = t.data[2][i];
		ans.data[1][i + 3] = t.data[3][i];
		ans.data[2][i + 3] = sum2(ans.data[0][i + 3], ans.data[1][i + 3]);
		ans.data[0][i + 6] = t.data[5][i];
		ans.data[1][i + 6] = t.data[6][i];
		ans.data[2][i + 6] = sum2(ans.data[0][i + 6], ans.data[1][i + 6]);
	}
	return ans;
}

int123 f3to12(int num1, int num2, int num3)
{
	int num[3] = {num1, num2, num3};
	int123 ans;
	for (size_t i = 0; i < 3; i++)
	{
		ans.data[0][i] = num[i];
		ans.data[1][i] = num1;
		ans.data[2][i] = num2;
		ans.data[3][i] = num3;
		ans.data[4][i] = repeat3(num[i] / 100);
		ans.data[5][i] = repeat3(num[i] / 10 % 10);
		ans.data[6][i] = repeat3(num[i] % 10);
		ans.data[7][i] = repeat3(getnumrd(num1, 2 - i));
		ans.data[8][i] = repeat3(getnumrd(num2, 2 - i));
		ans.data[9][i] = repeat3(getnumrd(num3, 2 - i));
		ans.data[10][i] = repeat3(get1mod(num[i]));
		ans.data[11][i] = getabcbyabc(sum3mod(getnumrd(num1, 2), getnumrd(num2, 2), getnumrd(num3, 2)), sum3mod(getnumrd(num1, 1), getnumrd(num2, 1), getnumrd(num3, 1)), sum3mod(getnumrd(num1, 0), getnumrd(num2, 0), getnumrd(num3, 0)));
	}
	return ans;
}

int99 f3to81(int num1, int num2, int num3)
{
	int99 ans;
	auto t12 = f3to12(num1, num2, num3);
	int39 t12_27[12], t3_9;
	for (size_t i = 0; i < 12; i++)
	{
		t12_27[i] = f3to27(t12.data[i][0], t12.data[i][1], t12.data[i][2]);
	}
	for (size_t i = 0; i < sep1; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				t3_9.data[k][j] = sum2(t12_27[i].data[k][j], t3_9.data[k][j]);
				ans.data[k][j] = t3_9.data[k][j];
			}
		}
	}
	for (size_t i = sep1; i < sep2; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				t3_9.data[k][j] = sum2(t12_27[i].data[k][j], t3_9.data[k][j]);
				ans.data[k + 3][j] = t3_9.data[k][j];
			}
		}
	}
	for (size_t i = sep2; i < sep3; i++)
	{
		for (size_t j = 0; j < 9; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				t3_9.data[k][j] = sum2(t12_27[i].data[k][j], t3_9.data[k][j]);
				ans.data[k + 6][j] = t3_9.data[k][j];
			}
		}
	}
	return ans;
}

int33 get33s63412by73(int73 p73)
{
	int33 a;
	for (size_t i = 0; i < 3; i++)
	{
		a.data[0][i] = p73.data[5][i];
		a.data[1][i] = sum2(p73.data[2][i], p73.data[3][i]);
		a.data[2][i] = sum2(p73.data[0][i], p73.data[1][i]);
	}
	return a;
}

int33 get33s123467by73(int73 p73)
{
	int33 a;
	for (size_t i = 0; i < 3; i++)
	{
		a.data[0][i] = sum2(p73.data[0][i], p73.data[1][i]);
		a.data[1][i] = sum2(p73.data[2][i], p73.data[3][i]);
		a.data[2][i] = sum2(p73.data[5][i], p73.data[6][i]);
	}
	return a;
}

int33 get33s132by33(int33 p33)
{
	int33 ans;
	for (size_t i = 0; i < 3; i++)
	{
		ans.data[0][i] = p33.data[0][i];
		ans.data[1][i] = p33.data[2][i];
		ans.data[2][i] = p33.data[1][i];
	}
	return ans;
}

int33 get33s312by33(int33 p33)
{
	int33 ans;
	for (size_t i = 0; i < 3; i++)
	{
		ans.data[0][i] = p33.data[2][i];
		ans.data[1][i] = p33.data[0][i];
		ans.data[2][i] = p33.data[1][i];
	}
	return ans;
}

int get1s123by33(int33 p33c)
{
	auto p33 = p33c.data;
	auto a = getmain73(p33[0][0], p33[1][0], p33[2][0]).data;
	auto b = getmain73(p33[0][1], p33[1][1], p33[2][1]).data;
	auto c = getmain73(p33[0][2], p33[1][2], p33[2][2]).data;
	int t1[3][3];
	int ans[3];
	for (size_t i = 0; i < 3; i++)
	{
		t1[0][i] = get1mod(a[4][i]);
		t1[1][i] = get1mod(b[4][i]);
		t1[2][i] = get1mod(c[4][i]);
		ans[i] = sum3mod(t1[0][i], t1[1][i], t1[2][i]);
	}
	return sum3mod(ans[0], ans[1], ans[2]);
}

int newmain(int num1, int num2, int num3)
{
	auto a = getmain73(num1, num2, num3).data;
	auto b = get33s63412by73(a).data;
	auto c = getmain73(b[0][0], b[1][0], b[2][0]).data;
	auto d = get33s123467by73(c).data;
	auto e = getmain73(b[0][1], b[1][1], b[2][1]).data;
	auto f = get33s123467by73(e).data;
	auto g = getmain73(b[0][2], b[1][2], b[2][2]).data;
	auto h = get33s123467by73(g).data;
	auto i = get33s132by33(d).data;
	auto j = get33s312by33(d).data;
	auto k = get33s132by33(f).data;
	auto l = get33s312by33(f).data;
	auto m = get33s132by33(h).data;
	auto n = get33s312by33(h).data;
	int o[3] = {get1s123by33(d), get1s123by33(i), get1s123by33(j)};
	int p[3] = {get1s123by33(f), get1s123by33(k), get1s123by33(l)};
	int q[3] = {get1s123by33(h), get1s123by33(m), get1s123by33(n)};
	int ans = sum3mod(sum3mod(o[0], o[1], o[2]), sum3mod(p[0], p[1], p[2]), sum3mod(q[0], q[1], q[2]));
	return ans;
}

int3 nine2three(int num1, int num2, int num3, int arr[18][3], int index)
{
	auto tiquzu = getmain73(num1, num2, num3);
	int3 zu[3][3];
	for (size_t i = 0; i < 3; i++)
	{
		zu[0][0].data[i] = tiquzu.data[0][i];
		zu[0][1].data[i] = tiquzu.data[1][i];
		zu[1][0].data[i] = tiquzu.data[2][i];
		zu[1][1].data[i] = tiquzu.data[3][i];
		zu[2][0].data[i] = tiquzu.data[5][i];
		zu[2][1].data[i] = tiquzu.data[6][i];
	}
	for (size_t i = 0; i < 3; i++)
	{
		auto qll = zu[i];
		int a[3] = {0, 0, 0};
		for (size_t j = 0; j < 3; j++)
		{
			a[j] = sum2(qll[0].data[j], qll[1].data[j]);
		}
		zu[i][2] = a;
	}
	// int shu[3];
	int3 ans;
	for (size_t i = 0; i < 3; i++)
	{
		auto putin = zu[i];
		int tiqu1[6];
		memset(tiqu1, 0, sizeof(tiqu1));
		for (size_t j = 0; j < 3; j++)
		{
			tiqu1[j * 2] = newmain(putin[j].data[0], putin[j].data[1], putin[j].data[2]);
			tiqu1[j * 2 + 1] = newmain(putin[0].data[j], putin[1].data[j], putin[2].data[j]);
		}
		arr[index][i] = ans.data[i] = accumulate(tiqu1, tiqu1 + 6, 0) % 10;
	}
	return ans;
}

int twentyseven2one(int lines[3][9])
{
	int a1[18][3], a2[18][3];
	nine2three(lines[0][0], lines[0][1], lines[0][2], a1, 0);
	nine2three(lines[1][0], lines[1][1], lines[1][2], a1, 1);
	nine2three(lines[2][0], lines[2][1], lines[2][2], a1, 2);
	nine2three(lines[0][0], lines[1][0], lines[2][0], a1, 3);
	nine2three(lines[0][1], lines[1][1], lines[2][1], a1, 4);
	nine2three(lines[0][2], lines[1][2], lines[2][2], a1, 5);
	nine2three(lines[0][3], lines[0][4], lines[0][5], a1, 6);
	nine2three(lines[1][3], lines[1][4], lines[1][5], a1, 7);
	nine2three(lines[2][3], lines[2][4], lines[2][5], a1, 8);
	nine2three(lines[0][3], lines[1][3], lines[2][3], a1, 9);
	nine2three(lines[0][4], lines[1][4], lines[2][4], a1, 10);
	nine2three(lines[0][5], lines[1][5], lines[2][5], a1, 11);
	nine2three(lines[0][6], lines[0][7], lines[0][8], a1, 12);
	nine2three(lines[1][6], lines[1][7], lines[1][8], a1, 13);
	nine2three(lines[2][6], lines[2][7], lines[2][8], a1, 14);
	nine2three(lines[0][6], lines[1][6], lines[2][6], a1, 15);
	nine2three(lines[0][7], lines[1][7], lines[2][7], a1, 16);
	nine2three(lines[0][8], lines[1][8], lines[2][8], a1, 17);
	nine2three(lines[0][0], lines[0][3], lines[0][6], a2, 3);
	nine2three(lines[0][1], lines[0][4], lines[0][7], a2, 4);
	nine2three(lines[0][2], lines[0][5], lines[0][8], a2, 5);
	nine2three(lines[1][0], lines[1][3], lines[1][6], a2, 9);
	nine2three(lines[1][1], lines[1][4], lines[1][7], a2, 10);
	nine2three(lines[1][2], lines[1][5], lines[1][8], a2, 11);
	nine2three(lines[2][0], lines[2][3], lines[2][6], a2, 15);
	nine2three(lines[2][1], lines[2][4], lines[2][7], a2, 16);
	nine2three(lines[2][2], lines[2][5], lines[2][8], a2, 17);
	for (size_t i = 0; i < 3; i++)
	{
		a2[0][i] = a1[0][i];
		a2[1][i] = a1[6][i];
		a2[2][i] = a1[12][i];
		a2[6][i] = a1[1][i];
		a2[7][i] = a1[7][i];
		a2[8][i] = a1[13][i];
		a2[12][i] = a1[2][i];
		a2[13][i] = a1[8][i];
		a2[14][i] = a1[14][i];
	}
	int ans1[18], ans2[18];
	for (size_t i = 0; i < 18; i++)
	{
		ans1[i] = accumulate(a1[i], a1[i] + 3, 0) % 10;
		ans2[i] = accumulate(a2[i], a2[i] + 3, 0) % 10;
	}
	int ans = accumulate(ans1, ans1 + 18, 0) % 10;
	ans = accumulate(ans2, ans2 + 18, ans) % 10;
	return ans;
}

int3 get27t36_3_27(int data[3][9])
{
	int39 lines(data);
	// lines.input_data();
	auto sh = f27to36(lines);
	int183 h = sh.data[1];
	int99 ans[18];
	int3 ans3;
	int t39[3][9];
	for (size_t i = 0; i < 18; i++)
	{
		ans[i] = f3to81(h.data[i][0], h.data[i][1], h.data[i][2]);
	}
	int tl[18];
	memset(tl, 0, sizeof(tl));
	for (size_t i = 0; i < 18; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 9; k++)
			{
				t39[j][k] = ans[i].data[j][k];
			}
		}
		tl[i] = twentyseven2one(t39);
	}
	auto t = accumulate(tl, tl + 18, 0) % 10;
	ans3.data[0] = t;
	memset(tl, 0, sizeof(tl));
	for (size_t i = 0; i < 18; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 9; k++)
			{
				t39[j][k] = ans[i].data[j + 3][k];
			}
		}
		tl[i] = twentyseven2one(t39);
	}
	t = accumulate(tl, tl + 18, 0) % 10;
	ans3.data[1] = t;
	memset(tl, 0, sizeof(tl));
	for (size_t i = 0; i < 18; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 9; k++)
			{
				t39[j][k] = ans[i].data[j + 6][k];
			}
		}
		tl[i] = twentyseven2one(t39);
	}
	t = accumulate(tl, tl + 18, 0) % 10;
	ans3.data[2] = t;
	return ans3;
}

void testn39()
{
	int39 n39;
	n39.input_data();
	n39.print_data();
	n39.out_data(filename);
}

void testfile()
{
	ofstream outfile;
	outfile.open(filename, ios::out);
	outfile << 123 << endl;
	outfile << 123 << endl;
	outfile.close();
}

int get81to3(int index)
{
	int3 ans[3];
	for (size_t i = 0; i < 3; i++)
	{
		ans[i] = get27t36_3_27(data_all[index][i]);
	}
	int ans1[3];
	for (size_t i = 0; i < 3; i++)
	{
		ans1[i] = (ans[0].data[i] + ans[1].data[i] + ans[2].data[i]) % 10;
	}
	return ans1[0] % 10 * 100 + ans1[1] % 10 * 10 + ans1[2] % 10;
}

void cfg323digit(int &t27, int &t54, int &t81)
{
	clock_t start_time, end_time;
	int ans27 = 0, ans54 = 0, ans81 = 0;
	int t[81];
	future<int> fut[81];
	start_time = clock();

	for (size_t i = 0; i < 81; i++)
	{
		fut[i] = async(launch::async, get81to3, i);
	}

	for (size_t i = 0; i < 81; i++)
	{
		t[i] = fut[i].get();
		end_time = clock();
		printf("\n%0llu ###############\n1-%0llu | 1-%0llu | 1-%0llu\n%03d\n############### %.3fs\n\n",
			   i + 1, sep1, sep2, sep3, t[i], (double)(end_time - start_time) / CLOCKS_PER_SEC);
		fflush(stdout);
	}

	for (size_t i = 0; i < 27; i++)
	{
		ans27 = sum2(ans27, t[i]);
		ans54 = sum2(ans54, t[i + 27]);
		ans81 = sum2(ans81, t[i + 54]);
	}
	t27 = get1mod(ans27);
	t54 = get1mod(ans54);
	t81 = get1mod(ans81);
	printf("ans27-54-81: %1d%1d%1d\n", t27, t54, t81);
}

int convert11to1(int arr[11])
{
	int l[22] = {0};
	int sum9[22] = {0};
	int sum11_3[11][3] = {0};
	int ans[11] = {0};
	for (size_t i = 0; i < 11; i++)
	{
		l[i] = arr[i];
		l[i + 11] = arr[i];
	}
	for (size_t i = 0; i < 11; i++)
	{
		sum9[i] = (l[i] + l[i + 1] + l[i + 2] + l[i + 3] + l[i + 4] + l[i + 5] + l[i + 6] + l[i + 7] + l[i + 8]) % 10;
		sum9[i + 11] = sum9[i];
	}
	for (size_t i = 0; i < 11; i++)
	{
		sum11_3[i][0] = sum9[i];
		sum11_3[i][1] = sum9[i + 1];
		sum11_3[i][2] = sum9[i + 2];
		ans[i] = (sum11_3[i][0] + sum11_3[i][1] + sum11_3[i][2]) % 10;
	}
	return (ans[0] + ans[1] + ans[2] + ans[3] + ans[4] + ans[5] + ans[6] + ans[7] + ans[8] + ans[9] + ans[10]) % 10;
}

int main(int argc, char *argv[])
{
	ifstream ifs;
	vector<int> ans27, ans54, ans81;
	freopen("data.txt", "r", stdin);
	for (size_t i = 0; i < 81; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			for (size_t k = 0; k < 3; k++)
			{
				for (size_t l = 0; l < 9; l++)
				{
					if (cin.eof())
					{
						cerr << "input number err!";
						break;
					}
					cin >> data_all[i][j][k][l];
				}
			}
		}
	}
	int a, b, c;
	sep1 = atoi(argv[1]);
	sep2 = atoi(argv[2]);
	sep3 = atoi(argv[3]);
	char filename[100];
	sprintf(filename, "out_%d_%d_%d.txt", sep1, sep2, sep3);
	freopen(filename, "w", stdout);
	print_time();
	cfg323digit(a, b, c);

	print_time();
	fflush(stdout);
	return a * 100 + b * 10 + c;
}

// g++ tool.cpp -o tool.exe -std=c++17 -Wall -static -Wextra

// g++ 81to1_step123.cpp -o 81to1_step123.exe -std=c++17 -Wall -static
// zip -r 81to1_step123.zip 81to1_step123.cpp data.txt allcfg.ini 81to1_step123.exe m0.h m2.hpp

// for($i=1;$i -lt 13;$i=$i+1){Expand-Archive -Path .\81to1_step123.zip -DestinationPath .\$i\}
// for($i=1;$i -lt 12;$i=$i+1){cd "$pwd/$i";Start-Process .\81to1_step123.exe}