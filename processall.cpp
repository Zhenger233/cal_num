#include <windows.h>
#include "m0.h"
#include "m2.hpp"
#include <vector>
#include <thread>
#include <future>

using namespace std;

int cfg323digit(int a, int b, int c)
{
    STARTUPINFOW si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    wstring cmd;
    int ans;
    cmd = L"tool.exe " + to_wstring(a) + L" " + to_wstring(b) + L" " + to_wstring(c);
    if (!CreateProcessW(NULL, const_cast<LPWSTR>(cmd.c_str()), NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi))
    {
        printf("CreateProcess failed (%d).\n", GetLastError());
        return 0;
    }
    else
    {
        printf("calculate %0d %0d %0d.\n", a, b, c);
        WaitForSingleObject(pi.hProcess, INFINITE);
        GetExitCodeProcess(pi.hProcess, (LPDWORD)&ans);
        printf("%0d %0d %0d ans = %d \n", a, b, c,ans);
        CloseHandle(pi.hProcess);
        CloseHandle(pi.hThread);
    }
    return ans;
}

int convert11to1(int arr[11]){
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

int process_group22(int ans27[22], int ans54[22], int ans81[22]){
	int911 ans;
	for (size_t i = 0; i < 11; i++)
	{
		ans.data[0][i] = ans27[i];
		ans.data[1][i] = ans27[i+11];
		ans.data[2][i] = sum2(ans27[i], ans27[i+11]);
		ans.data[3][i] = ans54[i];
		ans.data[4][i] = ans54[i+11];
		ans.data[5][i] = sum2(ans54[i], ans54[i+11]);
		ans.data[6][i] = ans81[i];
		ans.data[7][i] = ans81[i+11];
		ans.data[8][i] = sum2(ans81[i], ans81[i+11]);
	}
	ans.print_data();
	int ans9[9] = {0};
	for (size_t i = 0; i < 9; i++)
	{
		ans9[i] = convert11to1(ans.data[i]);
	}
	for (size_t i = 0; i < 9; i++)
	{
		printf("%d", ans9[i]);
	}
	printf("\n");
	int ans1 = (ans9[0] + ans9[1] + ans9[2] + ans9[3] + ans9[4] + ans9[5] + ans9[6] + ans9[7] + ans9[8]) % 10;
	return ans1;
}

int main() {
	clock_t start_time, end_time;
	ifstream ifs;
	int ans27[132];
    int ans54[132];
    int ans81[132];
    int ans[6];
    int sep1, sep2, sep3;
    int sep1a[132], sep2a[132], sep3a[132];
    int cnt = 0;

	ifs.open("allcfg.ini", ios::in);
	freopen("out.txt", "w", stdout); 
	print_time();

    while (true)
    {
        if(!(ifs>>sep1>>sep2>>sep3)){ cerr<<"input over!\n"; break; }
        sep1a[cnt] = sep1;
        sep2a[cnt] = sep2;
        sep3a[cnt] = sep3;
        cnt++;
        cerr<<sep1<<" "<<sep2<<" "<<sep3<<endl;
    }
    int l = cnt;
    cerr << "l = " << l << endl;

    future<int> fu[132];

    for (size_t i = 0; i < l; i++)
    {
        fu[i] = async(launch::async, cfg323digit, sep1a[i], sep2a[i], sep3a[i]);
        cerr<<"start "<<i<<" ok\n";
    }

    for (size_t i = 0; i < l; i++)
    {
        int tmp = fu[i].get();
        ans27[i] = tmp / 100;
        ans54[i] = (tmp % 100) / 10;
        ans81[i] = tmp % 10;
        cerr<<"get "<<i<<" ok " << tmp << endl;
    }

    for (size_t i = 0; i < l; i++)
    {
        printf("%0d%0d%0d\n", ans27[i], ans54[i], ans81[i]);
    }

    for (size_t i = 0; i < l/22; i++)
    {
        ans[i] = process_group22(ans27 + (i*22), ans54+ (i*22), ans81+ (i*22));
    }

    for (size_t i = 0; i < l/22; i++)
    {
        printf("%d", ans[i]);
    }
    print_time();
}

// g++ processall.cpp -o all.exe -std=c++17 -Wall -static
// zip -r all.zip processall.cpp data.txt allcfg.ini all.exe m0.h m2.hpp tool.exe tool.cpp